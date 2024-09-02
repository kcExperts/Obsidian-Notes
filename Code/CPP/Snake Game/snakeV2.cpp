/*
Changelog:
    - Game now runs at 60 FPS, meaning quicker inputs from the user are accepted
    - Snake will no longer revive after dying if its two death flags return false
    - Player can no longer reverse trajectory
    - Supports fullscreen for 1920x1080 ONLY
    - Supports restarting
    - Snake and Apple now uses a struct to store x and y coords
*/


#include <iostream>
#include "raylib.h"
#include <vector>
#include <cstdlib>

#define UP 265
#define DOWN 264
#define LEFT 263
#define RIGHT 262
#define NO_INPUT 0
#define OBJ_SIZE (80 * modifier) 
#define HEAD 0
#define FPS 60

static float modifier = 1.f;

struct point
{
    int x;
    int y;
};

//Function Declerations
//--------------------------------------------------------------------------------------

bool SetApplePosition(std::vector<point> &snake, point &apple, int screenWidth, int screenHeight);
bool IsSnakeAtApple(std::vector<point> &snake, point &apple);
void UpdateSnakePos(std::vector<point> &snake, int &prevInput, int curDirection);
bool IsSnakeOutOfBounds(int x_pos, int y_pos, int screenWidth, int screenHeight);
bool IsSnakeColliding(std::vector<point> &snake);
void ExtendSnake(std::vector<point> &snake, const int prev_tail_pos_x, const int prev_tail_pos_y);
//--------------------------------------------------------------------------------------

int main(void)
{
    // General Variable Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1280;  
    const int sCenterW = screenWidth/2; //Center of screen width
    const int screenHeight = 720; 
    const int sCenterH = screenHeight/2; //Center of screen height
    const int drawTime = 12;
    unsigned int scoreCount = 0;
    int prevInput = NO_INPUT;
    int updateTime = 0; //Will update game drawing at drawTime, resetting back to 0
    int desiredMov = 0;
    int keyPressed = 0;
    bool dead = false;
    bool fullScreen = false;
    std::srand((unsigned) time(NULL)); // Initialize timestamp variable and pass it to srand() to get pseudo-random numbers
    int prev_tail_pos_x = 0;
    int prev_tail_pos_y = 0;
    //--------------------------------------------------------------------------------------

    // Snake & Apple Initialization
    //--------------------------------------------------------------------------------------
    std::vector<point> snake;
    point apple;
    snake.push_back({0,0});
    while (!SetApplePosition(snake, apple, screenWidth, screenHeight))
          SetApplePosition(snake, apple, screenWidth, screenHeight);
    //--------------------------------------------------------------------------------------
    //Screen Directives
    //--------------------------------------------------------------------------------------
    SetTargetFPS(FPS);
    InitWindow(screenWidth,screenHeight,"The Snake Game V2");
    Vector2 initWindowPos = GetWindowPosition();
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose()) // Detect window close button or ESC key
    {     
        ClearBackground(RAYWHITE);
        prev_tail_pos_x = snake[snake.size()-1].x;
        prev_tail_pos_y = snake[snake.size()-1].y;
        if (!fullScreen) //Preserves window movement 
        {
            initWindowPos = GetWindowPosition();
        }

        if (IsKeyPressed(KEY_F11)) //?????? what is going on here???
        {
            fullScreen = !fullScreen; //Toggler
            float tempModifier = fullScreen ? 1.5f : 0.666666667f;
            modifier = fullScreen ? 1.5f : 1.0f;
            SetWindowSize(screenWidth * modifier, screenHeight * modifier);
            fullScreen ? SetWindowPosition(0,0) : SetWindowPosition(initWindowPos.x, initWindowPos.y);
            apple.x *= tempModifier;
            apple.y *= tempModifier;
            for (auto&elem: snake) //what kind of fuckery is this
            {
                elem.x *= tempModifier;
                elem.y *= tempModifier;
            }
        }

        if (keyPressed == 0) 
        {
            if(IsKeyPressed(KEY_UP) && prevInput != DOWN)
            {
                desiredMov = UP;
                keyPressed = 1;
            } 
            else if(IsKeyPressed(KEY_DOWN) && prevInput != UP)
            {
                desiredMov = DOWN;
                keyPressed = 1;
            } 
            else if(IsKeyPressed(KEY_LEFT) && prevInput != RIGHT)
            {
                desiredMov = LEFT;
                keyPressed = 1;
            } 
            else if(IsKeyPressed(KEY_RIGHT) && prevInput != LEFT)
            {
                desiredMov = RIGHT;
                keyPressed = 1;
            } 
        }

        if (updateTime >= drawTime)
        {
            if (keyPressed == 0)
            {
                UpdateSnakePos(snake, prevInput, prevInput);
            } else 
            {
                UpdateSnakePos(snake, prevInput, desiredMov);
            }
            updateTime = 0; 
            keyPressed = 0;
        }

        //Status checks
        //--------------------------------------------------------------------------------------
        if (IsSnakeAtApple(snake, apple))
        {
            scoreCount++;
            ExtendSnake(snake, prev_tail_pos_x, prev_tail_pos_y);
            while (!SetApplePosition(snake, apple, screenWidth, screenHeight))
                SetApplePosition(snake, apple, screenWidth, screenHeight);
        }
        //--------------------------------------------------------------------------------------

        BeginDrawing();
            if(!IsSnakeOutOfBounds(snake[HEAD].x, snake[HEAD].y, screenWidth * modifier, screenHeight * modifier) && !IsSnakeColliding(snake) && !dead)
            {
                DrawRectangle(apple.x, apple.y, OBJ_SIZE, OBJ_SIZE, RED);
                for(int i{0}; i < snake.size(); i++) 
                {
                    DrawRectangle(snake[i].x, snake[i].y, OBJ_SIZE, OBJ_SIZE, BLUE);
                }
            }
            else
            {
                dead = true;
                DrawText("You lose!", sCenterW * modifier, sCenterH * modifier - 20, 10, LIME);
                DrawText(TextFormat("Score: %i", scoreCount), sCenterW * modifier, sCenterH * modifier + 20, 10, LIME);
                DrawText("Press ENTER to restart", sCenterW * modifier, sCenterH * modifier + 40, 10, LIME);
                if (IsKeyPressed(KEY_ENTER)) 
                {
                    dead = false;
                    snake.clear();
                    snake.push_back({0,0});
                    SetApplePosition(snake, apple, screenWidth, screenHeight);
                    prevInput = NO_INPUT;
                    scoreCount = 0;
                }
            }

        EndDrawing(); //Updates the game to the next frame
        updateTime++;
    }

    CloseWindow(); 
    return 0;
}


//Functions
//--------------------------------------------------------------------------------------

//Sets a new position for the apple, returning true if it was succesful
bool SetApplePosition(std::vector<point> &snake, point &apple, int screenWidth, int screenHeight) 
{
    //Get temporary coords
    int random = rand() % (int)(screenWidth/OBJ_SIZE);
    apple.x = random * OBJ_SIZE;
    random = rand() % (int)(screenHeight/OBJ_SIZE);
    apple.y = random * OBJ_SIZE;

    //Verify that they are valid
    for (int i = 0; i < snake.size(); i++)
    {
        if (snake[i].x == apple.x)
        {
            if (snake[i].y == apple.y)
                return false;
        }
    }
    return true;
}

bool IsSnakeAtApple(std::vector<point> &snake, point &apple)
{
    return (snake[HEAD].x == apple.x && snake[HEAD].y == apple.y);
}

//Updates the position of the snake, from tail to head
void UpdateSnakePos(std::vector<point> &snake, int &prevInput, int curDirection) 
{   
    //Move all parts, excluding the head, to the next position
    if (snake.size() != 1)
    {
        for(int i = snake.size() - 1; i > 0; i--)
        {
            snake[i].x = snake[i - 1].x;
            snake[i].y = snake[i - 1].y;
        }
    }

    //Move head to desired position
    switch (curDirection) 
    {
        case UP:
            snake[HEAD].y += OBJ_SIZE * (-1);
            break;

        case DOWN:
            snake[HEAD].y += OBJ_SIZE * (1);
            
            break;
        
        case LEFT:
            snake[HEAD].x += OBJ_SIZE * (-1);
            break;
        
        case RIGHT:
            snake[HEAD].x += OBJ_SIZE * (1);
            break;
    }
    prevInput = curDirection;
}

//Checks whether the snake is still in bounds of the map
bool IsSnakeOutOfBounds(int x_pos, int y_pos, int screenWidth, int screenHeight)
{
    //Border Check (using only the head of the snake)
    if (x_pos < 0 || x_pos >= screenWidth || y_pos < 0 || y_pos >= screenHeight)
    {
        return true;
    }
    return false;
}

//Checks whether the snake is coliding with itself
bool IsSnakeColliding(std::vector<point> &snake)
{
    for(int i = 1; i < snake.size(); i++)
    {
        if (snake[HEAD].x == snake[i].x && snake[HEAD].y == snake[i].y)
        {
            return true;
        }
    }
    return false;
}

//Extends the size of the snake
void ExtendSnake(std::vector<point> &snake, const int prev_tail_pos_x, const int prev_tail_pos_y)
{
    snake.push_back({prev_tail_pos_x, prev_tail_pos_y});
}

//--------------------------------------------------------------------------------------