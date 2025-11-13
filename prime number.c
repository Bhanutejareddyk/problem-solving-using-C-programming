//prime number
#include<stdio.h>
int main(){
	int n,i,count=0;
	printf("Enter the no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0)
		count++;
	}
	if(count==2)
	printf("%d is a prime num",n);
	else
	printf("%d is not a prime num",n);
	return 0;
}
