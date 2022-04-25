#include <iostream>

using namespace std;
/*
    Arrays can only be passed by address.
    When passing an array like in func, passes only 
    a pointer to the begining of the address on the array
*/
void func(int A[], int count) {
    // there for using foreach loop won't work
    // only loop with a regular loop will:
    for (size_t i = 0; i < count; i++)
    {
        cout<<A[i]<<endl;
    }
    
}
/*
    You can even define the argument directly as a pointer.
    It works the same!!
*/
void func2(int *A, int count) {
    // only a regular loop will work:
    for (size_t i = 0; i < count; i++)
    {
        cout<<A[i]<<endl;
    }
}

/*
    In C++ you can even create the array last inside the function,
    by allocating heap memory of the wished size.
*/
int * func3(int size) {
    int *p;
    p = new int[size];

    // Since we have a pointer, looping through the array only works
    // with a regular for-loop
    for (int i = 0; i < size; i++)
    {
        p[i] = i++;
    }
    
}

int main () {
    int A[] = {2, 4, 6, 3, 10};

    int n = 5;

    // We are passing the array as argument, but
    // inside the function func, it will be treated as a pointer
    func(A, n);
    func2(A, n);

    // here we're able to use the foreach loop on an actual array
    for (int x : A)
    {
        cout<< x << " ";
    }
    
    int *ptr, size = 5;
    ptr = func3(size);

    for (int i = 0; i < size; i++)
    {
        cout<< ptr[i] << endl;
    }
    

    return 0;
}