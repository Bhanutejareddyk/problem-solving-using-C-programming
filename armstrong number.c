//armstrong number
#include<stdio.h>
int main(){
	int n,r,sum=0;
	int m;
	printf("Enter the num:");
	scanf("%d",&n);
	m=n;
	while(n>0){
		r=n%10;
		sum+=(r*r*r);
		n/=10;
		
	}
	if(sum==m)
	printf("%d--> is a armstrong number",m);
	else
	printf("%d--> is not a armstrong number",m);
	return 0;
}
