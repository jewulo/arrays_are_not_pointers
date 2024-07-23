// arrays_are_not_pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// https://www.youtube.com/watch?v=H18yIPSsgLg
#include <stdio.h>

// An array name is not a variable and it is not a pointer 
int main()
{
    char str1[] = "Hello";          // an array is literally an address, it is not modifiable
    const char *str2 = "Goodbye";   // a pointer is a variable that stores an address, it is modifiable

    printf("%p %p %s\n", &str1, str1, str1);    // the address of the array and the array have the same value
    printf("%p %p %s\n", &str2, str2, str2);    // the address of the pointer and the paoint have the different values

    // str1 = "New Hello";      // we cannot modify an address
    str2 = "New Goodbye";       // we can modify a pointer

    // str1 will remain the same, str2 can change
    printf("%p %p %s\n", &str1, str1, str1);
    printf("%p %p %s\n", &str2, str2, str2);

    //str1++;;   // we cannot modify an address
    str2++;      // we can modify a pointer

    // str1 will remain the same, str2 can change
    printf("%p %p %s\n", &str1, str1, str1);
    printf("%p %p %s\n", &str2, str2, str2);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
