//Program Description
//Given an integer, n, perform the following conditional actions:
//If n is odd, print weird
//If n is even and in the inclusive range of 2 to 5, print not weird
//If n is even and in the inclusive range of 6 to 20, print weird
//If n is even and greater than 20, print not weird
//Input Format
//A single line containing a positive integer, n.
//Output Format
//Print the output according to the conditional actions.
//Constraints
//n lies between 1 and 100.
//Input-1
//4
//Output-1
//Not weird
//Input-2
//17
//Output-2
//weird
//----------------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n % 2 != 0) {
        printf("Weird");
    }
    else if (n % 2 == 0 && n >= 2 && n <= 5) {
        printf("Not Weird");
    }
    else if (n % 2 == 0 && n >= 6 && n <= 20) {
        printf("Weird");
    }
    else if (n % 2 == 0 && n > 20) {
        printf("Not Weird");
    }
    else {
        printf("Undefined");
    }

    return 0;
}
