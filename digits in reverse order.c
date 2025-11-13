//displaying the digits of a num in reverse order
#include<stdio.h>
int main(){
	int i,n,r;
	printf("Enter the num:");
	scanf("%d",&n);
	while(n>0){
		r=n%10;
		n/=10;
		printf("%d",r);
	}
return 0;	
}
