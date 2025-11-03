//Input Format
//The first line of input contain a single integer X.
//Output Format
//Print the output YES if they will be going to the concert, NO otherwise.
//Constraints
//1<=N<=102
//Input-1
//100
//Output-1
//YES 
//Input-2
//500
//Output-2
//NO 
#include <stdio.h>
int main() {
    int n, price;
    scanf("%d", &n);
    price = n * 4;
    if (price <= 1000) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
