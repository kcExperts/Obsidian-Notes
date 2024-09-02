#include <iostream>
#include "raylib.h"
#include <vector>
#include <cstdlib>

#define UP 265
#define DOWN 264
#define LEFT 263
#define RIGHT 262
#define NO_INPUT 0
#define OBJ_SIZE 80 
#define HEAD 0
#define X_POS 0
#define Y_POS 1
#define FPS 5

//Function Declerations
//--------------------------------------------------------------------------------------
bool SetApplePosition(std::vector<std::vector<int>> &snake, std::vector<int> &apple, int screenWidth, int screenHeight);
bool IsSnakeAtApple(std::vector<std::vector<int>> &snake, std::vector<int> &apple);
void UpdateSnakePos(std::vector<std::vector<int>> &snake, int &prevInput, int curDirection);
void IsSnakeOutOfBounds(int x_pos, int y_pos, bool &deathFlag, int screenWidth, int screenHeight);
void IsSnakeColliding(std::vector<std::vector<int>> &snake, bool &deathFlag);
void ExtendSnake(std::vector<std::vector<int>> &snake, const int prev_tail_pos_x, const int prev_tail_pos_y);
//--------------------------------------------------------------------------------------

int main(void)
{
    // General Variable Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1280;  
    const int sCenterW = screenWidth/2; //Center of screen width
    const int screenHeight = 720; 
    const int sCenterH = screenHeight/2; //Center of screen height
    unsigned int scoreCount = 0;
    int prevInput = NO_INPUT;
    bool deathFlag = 0;
    std::srand((unsigned) time(NULL)); // Initialize timestamp variable and pass it to srand() to get pseudo-random numbers
    int prev_tail_pos_x = 0;
    int prev_tail_pos_y = 0;
    //--------------------------------------------------------------------------------------

    // Snake & Apple Initialization
    //--------------------------------------------------------------------------------------
    std::vector<std::vector<int>> snake(1, std::vector<int>(2)); //2D vector for snake position info. Rows are snake parts and columns their xy positions.
    snake[HEAD][X_POS] = 0;
    snake[HEAD][Y_POS] = 0;
    std::vector<int> apple(2);
    while (!SetApplePosition(snake, apple, screenWidth, screenHeight))
          SetApplePosition(snake, apple, screenWidth, screenHeight);
    //--------------------------------------------------------------------------------------
    //Screen Directives
    //--------------------------------------------------------------------------------------
    SetTargetFPS(FPS);
    InitWindow(screenWidth,screenHeight,"The Snake Game V1");
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose()) // Detect window close button or ESC key
    {        
        ClearBackground(RAYWHITE);
        prev_tail_pos_x = snake[snake.size()-1][X_POS];
        prev_tail_pos_y = snake[snake.size()-1][Y_POS];
        //Controls
        //--------------------------------------------------------------------------------------
        if(IsKeyPressed(KEY_UP))
        {
            UpdateSnakePos(snake, prevInput, UP);
        } 
        else if(IsKeyPressed(KEY_DOWN))
        {
            UpdateSnakePos(snake, prevInput, DOWN);
        } 
        else if(IsKeyPressed(KEY_LEFT))
        {
            UpdateSnakePos(snake, prevInput, LEFT);
        } 
        else if(IsKeyPressed(KEY_RIGHT))
        {
            UpdateSnakePos(snake, prevInput, RIGHT);
        } 
        else 
        {
            UpdateSnakePos(snake, prevInput, prevInput);
        }
        //--------------------------------------------------------------------------------------

        //Status checks
        //--------------------------------------------------------------------------------------
        IsSnakeOutOfBounds(snake[HEAD][X_POS], snake[HEAD][Y_POS], deathFlag, screenWidth, screenHeight);
        IsSnakeColliding(snake, deathFlag);
        if (IsSnakeAtApple(snake, apple))
        {
            scoreCount++;
            ExtendSnake(snake, prev_tail_pos_x, prev_tail_pos_y);
            while (!SetApplePosition(snake, apple, screenWidth, screenHeight))
                SetApplePosition(snake, apple, screenWidth, screenHeight);
        }
        //--------------------------------------------------------------------------------------

        BeginDrawing();
            if(!deathFlag)
            {
                DrawRectangle(apple[X_POS], apple[Y_POS], OBJ_SIZE, OBJ_SIZE, RED);
                for(int i{0}; i < snake.size(); i++) 
                {
                    DrawRectangle(snake[i][X_POS], snake[i][Y_POS], OBJ_SIZE, OBJ_SIZE, BLUE);
                }
            }
            else
            {
                DrawText("You lose!", sCenterW, sCenterH - 20, 10, LIME);
                DrawText(TextFormat("Score: %i", scoreCount), sCenterW, sCenterH + 20, 10, LIME);
            }

        EndDrawing();
    }

    CloseWindow();        // Close window and OpenGL context
    return 0;
}


//Functions
//--------------------------------------------------------------------------------------
//Sets a new position for the apple, returning true if it was succesful
bool SetApplePosition(std::vector<std::vector<int>> &snake, std::vector<int> &apple, int screenWidth, int screenHeight) 
{
    //Get temporary coords
    int random = rand() % (screenWidth/OBJ_SIZE);
    apple[X_POS] = random * OBJ_SIZE;
    random = rand() % (screenHeight/OBJ_SIZE);
    apple[Y_POS] = random * OBJ_SIZE;

    //Verify that they are valid
    for (int i = 0; i < snake.size(); i++)
    {
        if (snake[i][X_POS] == apple[X_POS])
        {
            if (snake[i][Y_POS] == apple[Y_POS])
                return false;
        }
    }
    return true;
}

bool IsSnakeAtApple(std::vector<std::vector<int>> &snake, std::vector<int> &apple)
{
    return (snake[HEAD][X_POS] == apple[X_POS] && snake[HEAD][Y_POS] == apple[Y_POS]);
}

//Updates the position of the snake, from tail to head
void UpdateSnakePos(std::vector<std::vector<int>> &snake, int &prevInput, int curDirection) 
{   
    //Move all parts, excluding the head, to the next position
    if (snake.size() != 1)
    {
        for(int i = snake.size() - 1; i > 0; i--)
        {
            snake[i][X_POS] = snake[i - 1][X_POS];
            snake[i][Y_POS] = snake[i - 1][Y_POS];
        }
    }

    //Move head to desired position
    switch (curDirection) 
    {
        case UP:
            snake[HEAD][Y_POS] += OBJ_SIZE * (-1);
            break;

        case DOWN:
            snake[HEAD][Y_POS] += OBJ_SIZE * (1);
            
            break;
        
        case LEFT:
            snake[HEAD][X_POS] += OBJ_SIZE * (-1);
            break;
        
        case RIGHT:
            snake[HEAD][X_POS] += OBJ_SIZE * (1);
            break;
    }
    prevInput = curDirection;
    return;
}

//Checks whether the snake is still in bounds of the map
void IsSnakeOutOfBounds(int x_pos, int y_pos, bool &deathFlag, int screenWidth, int screenHeight)
{
    //Border Check (using only the head of the snake)
    if (x_pos < 0 || x_pos >= screenWidth || y_pos < 0 || y_pos >= screenHeight)
    {
        deathFlag = 1;
        return;
    }
    return;
}

//Checks whether the snake is coliding with itself
void IsSnakeColliding(std::vector<std::vector<int>> &snake, bool &deathFlag)
{
    for(int i = 1; i < snake.size(); i++)
    {
        if (snake[HEAD][X_POS] == snake[i][X_POS] && snake[HEAD][Y_POS] == snake[i][Y_POS])
        {
            deathFlag = 1;
            return;
        }
    }
    return;
}

//Extends the size of the snake
void ExtendSnake(std::vector<std::vector<int>> &snake, const int prev_tail_pos_x, const int prev_tail_pos_y)
{
    snake.push_back({prev_tail_pos_x, prev_tail_pos_y});
    return;
}

//--------------------------------------------------------------------------------------