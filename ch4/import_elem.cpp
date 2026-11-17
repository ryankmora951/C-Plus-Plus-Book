#include <iostream> // tells the compiler to use iostream because it is a module that has std::cout, and is part of the standard library
// Include modules/libraries
int main()  // should return a number
// main is the start of the program
{
    int value = 100;
// Variable with initial value
    std::cout << "Divisors of " << value << " are:\n"; // Output of text, almost like Java but with <<
    for(int divider = 1; divider <= value; divider = divider + 1) // loop from 1 to 100
    {
    // begin of the repetition part
        if(value % divider == 0) 
    // test for conditional execution
            std::cout << divider << ","; // only if the test is positive
    }
    // end of the loop
        std::cout << "\n";
    // single output
        return 0;
    // means end of program in main()
}
// end of main()