#include <iostream>

void doNothing(int&) // Don't worry about what & is for now, we're just using it to trick the compiler into thinking variable x is used
{
}
int getInteger();
int main()
{
    // define an integer variable named x
    int x; // this variable is uninitialized
    7;

    doNothing(x); // make the compiler think we're assigning a value to this variable

    // print the value of x to the screen (who knows what we'll get, because x is uninitialized)
    std::cout << x << '\n';
    std::cout << sizeof(int) << '\n';
    int z{ getInteger() };
	int y{ getInteger() };

	std::cout << z << " + " << y << " is " << z + y << '\n';

    return 0;
}