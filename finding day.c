//Program Description
//Write a program to print days of week using if else ladder statement.
//In this program, we will take a number between 1 to 7 as input from user, where 1 corresponds to Monday, 2 corresponds to Tuesday and so on. We will use if else ladder statement to print name of day in words.If any other input is given, then print "Invalid input".
//Input Format
//A single line input containing one integer.
//Output Format
//Display output according to the description.
//Constraints
//0<=input<=10000
//Input-1
//8
//Output-1
//Invalid input
//Input-2
//1
//Output-2
//Monday
//------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int i;
    scanf("%d", &i);

    if (i == 1) printf("Monday");
    else if (i == 2) printf("Tuesday");
    else if (i == 3) printf("Wednesday");
    else if (i == 4) printf("Thursday");
    else if (i == 5) printf("Friday");
    else if (i == 6) printf("Saturday");
    else if (i == 7) printf("Sunday");
    else printf("Invalid input");

    return 0;
}
