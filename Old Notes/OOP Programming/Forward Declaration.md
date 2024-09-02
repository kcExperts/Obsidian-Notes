A compiler compiles the code *sequentially*, hence the following:
```cpp
#include <iostream>

int main() 
{
	int x{};
	std::cin >> x;
	int y = add(x);
	std::cout << "Result is: " << x;
	return 0;
}

int add(int x)
{
	return x+x;
}
```

Will **not** compile as the compiler cannot actually see the `add` function. To fix this (and for code readability), one should let the compiler know that the function exists by using *forward declaration*. To do so, add the name of the function and its argument but omit the body of the code:

```cpp
#include <iostream>

int add(int x); //forward declaration

int main() 
{
	int x{};
	std::cin >> x;
	int y = add(x);
	std::cout << "Result is: " << y;
	return 0;
}

int add(int x)
{
	return x+x;
}
```

Now the compiler knows that the function exists and you can comment what the function does (basics at least) at the forward declaration instead of where the body lies. 

Functions need not be defined on the same file, as long as the declaration is there to let the file containing the main function know that it exists, the body of the function may be placed elsewhere.