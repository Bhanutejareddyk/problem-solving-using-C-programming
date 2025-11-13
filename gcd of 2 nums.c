//GCD of two numbers
#include<stdio.h>
int main(){
	int n,m;
	printf("Enter n and m:");
	scanf("%d %d",&n,&m);
int	n1=n;
int	n2=m;
	while(m!=n){
		if(m>n)
		m-=n;
		else
		n-=m;
	}
	printf("%d-->is GCD of %d and %d",m,n1,n2);
	return 0;
}
