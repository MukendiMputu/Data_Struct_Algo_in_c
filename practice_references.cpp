#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
} rect;

// References don't take up memory space,
// they use the same as the variable they're referencing
int main() {
    int a = 10;
    int &r = a; // reference to a (alias of a)
    struct Rectangle *pointer_to_rect;

    //Accessing member of a stuct variable
    rect.length;

    // Accessing member of a pointer to struct
    pointer_to_rect->breadth = 10;
    pointer_to_rect->length = 3;

    cout<< pointer_to_rect->breadth << endl;
    cout<< pointer_to_rect->length << endl;
}