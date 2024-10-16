#include <stdio.h>

// int main(){
//     int *ptr;
//     int x;
//     ptr = &x;
//     *ptr = 10;
//     printf("%d", *ptr);
// }


/**
 * @file C.c
 * @brief A simple C program demonstrating the use of pointers.
 *
 * This program initializes an integer variable and two pointers.
 * Both pointers are assigned the address of the integer variable.
 * The program then prints the value of the integer variable using both pointers.
 *
 * @details
 * - Initializes an integer variable `x` with the value 10.
 * - Declares two integer pointers `ptr` and `ptr1`.
 * - Assigns the address of `x` to both `ptr` and `ptr1`.
 * - Prints the value of `x` using the dereferenced pointers.
 *
 * @author
 * Your Name
 * 
 * @date
 * Date of creation
 */
#include <stdio.h>

// int main(){
//     int *ptr, *ptr1;
//     int x = 10;
//     ptr = &x;
//     ptr1 = &x;
//     printf("%d\n", *ptr);
//     printf("%d\n", *ptr1);
// }



// The pointer only points to same data type throughtout the program as it initialize with the data type at
// starting of the program.
// int main(){
//     int *ptr , *ptr1;
//     int x = 10; 
//     float y = 10.5;
//     ptr = &x;
//     ptr1 = &y;
//     printf("%d\n", *ptr);
//     printf("%f\n", *ptr1);
// }

int main(){
    int *ptr;
    ptr = 10;
    printf("%d", ptr);
    char *ch;
    ch = "Hello World";
    printf("%s", ch);
}