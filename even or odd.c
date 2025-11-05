//Program Description
//Find out whether the given number is Even or Odd.
//Input Format
//A single line input containing one integer.
//Output Format
//Print the Output according to the description.
//Constraints
//-106<=X<=106
//Input-1
//6
//Output-1
//Even
//Input-2
//5
//Output-2
//Odd
//-----------------------------------------------------------------
#include<stdio.h>

int main() {

    int x;
    scanf("%d", &x);          // Input an integer

    if (x % 2 == 0)           // Check if divisible by 2
        printf("Even");       // If yes, print Even
    else
        printf("Odd");        // Otherwise, print Odd

    return 0;
}
