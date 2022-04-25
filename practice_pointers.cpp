#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
} r;


int main () {
    int a = 10;
    int *p;
    char *p2;
    float *p3;
    struct Rectangle *pointer_to_rect;
    p = &a;

    // Pointer to an array
    int A[5] = {0,1,3,3,4};


    // Allocating heap memory
    // C syntax
    int *pointer ;
    pointer = (int *) malloc(5* sizeof(int));

    // C++ syntax
    int *another_pointer;
    another_pointer = new int[5];

    cout<<("size of pointer %d", sizeof(p))<<endl;
    cout<<("size of pointer %d", sizeof(p2))<<endl;
    cout<<("size of pointer %d", sizeof(p3))<<endl;
    cout<<("size of pointer %d", sizeof(pointer))<<endl;
    cout<<("size of pointer %d", sizeof(pointer_to_rect))<<endl;
   

    // Freeing allocated memory
    free(pointer); // in C 
    delete [ ] another_pointer; // in C++

    return 0;
}