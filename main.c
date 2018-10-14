/*
 * This program lets the user input as many numbers as he wants and then prints them back in a line.
 *
 * Author: Gerardo González Becerril.
 * E-mail: a01411981@itesm.mx
 * Date: October 14th, 2018.
 */

 // Library used.
#include <stdio.h>

int main() {

    int x; // This variable is used to take the user input.
    int n; // This variable stores the amount of numbers the user will enter.

    // Asks the user how many he'll want to enter, then scans this number.
    printf("How many numbers would you like to enter?\n");
    scanf("%i", &n);

    int arr[n]; // Creates an array with the size to hold as many numbers as the user wants.

    printf("You will now enter %i numbers.\n", n);

    // For loop that loops the number of times the user indicated, asking the user for a number to then enter into
    // the corresponding position in the array.
    for (int i = 0; i < n; i++) {
        printf("Give me number %i:\n", i + 1);
        scanf("%i", &x);
        arr[i] = x;
    }

    // For loop that loops the number of times the user indicated, printing the number in the corresponding position
    // from the array.
    for (int i = 0; i < n; i++) {
        printf("%i ", arr[i]);
    }

    return 0;

}