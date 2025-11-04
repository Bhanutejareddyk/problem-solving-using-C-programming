//Program Description
//Write a Program to print the color name by taking the Color code as input.
//V -> Violet
//I -> Indigo
//B -> Blue
//G -> Green
//Y -> Yellow
//O -> Orange
//R -> Red
//Note: If none of the above mentioned character is entered as input, print -1 as output.
//Input Format
//Single line input containing, one character
//Output Format
//Print the output according to the description.
//Constraints
//Input is case sensitive i.e. V and v are same .
//Input-1
//Z
//Output-1
//-1
//Input-2
//G
//Output-2
//Green
//------------------------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);

    if (ch == 'V') printf("Violet");
    else if (ch == 'I') printf("Indigo");
    else if (ch == 'B') printf("Blue");
    else if (ch == 'G') printf("Green");
    else if (ch == 'Y') printf("Yellow");
    else if (ch == 'O') printf("Orange");
    else if (ch == 'R') printf("Red");
    else printf("-1");

    return 0;
}
