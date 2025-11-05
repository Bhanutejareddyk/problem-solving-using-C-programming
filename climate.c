//Climate
//Program Description
//Mr. Snowman considers the climate HOT if the temperature is above 20, otherwise he considers it as COLD. You are given the temperature C, find whether the climate is HOT or COLD.
//Input Format
//A single line input containing one integer.
//Output Format
//Print the output according to the description.
//Constraints
//-10000<=INPUT<=10000
//Input-1
//100
//Output-1
//HOT
//Input-2
//41
//Output-2
//HOT
//------------------------------------------------------------------------------------------------
#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);      // Input temperature value

    if (t > 20)           // Check if temperature is greater than 20
        printf("HOT");    // If true, print HOT
    else
        printf("COLD");   // Otherwise, print COLD

    return 0;
}
