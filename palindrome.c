//reversing a number & palindrome check
#include<stdio.h>
int main(){
	int n,r,rev=0,m;
	printf("Enter the num:");
	scanf("%d",&n);
	m=n;
	while(n>0){
		r=n%10;
		n/=10;
		rev = rev * 10 +r;
	}
	
	if(rev == m)
	printf("%d-->is a palindrome",m);
	else
	printf("%d-->is not a palindrome",m);
	return 0;
	
}

