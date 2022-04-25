#include <iostream>

using namespace std;


/* Calling by value is usefull, when you want the function to 
    process some value and returrn the result without changing
    the original variable value*/
int add (int a, int b) {
    a++;

    int c;
    c = a + b;

    return c; 
}

/* Calling by address is usefull, when you want the function to 
    process and change the original variable value. To pass by
    address, define the parameter as pointers */
int swap (int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

/* In C++ you can call a function by reference. This means,
    you pass the reference of the variable using '&'.
    This allows the compiler to turn the function into an inline
    function in the main function.

*/
int pwas (int &x, int &y) {
    int temp;

    temp = x;
    x = y;
    y = temp;
}

int main () {
    int first_num = 10, second_num = 15;

    // passing arguments by value
    int sum = add(first_num, second_num);
    
    // passing arguments by address
    swap(&first_num, &second_num);

    // passing argumets by reference
    pwas(first)
}
