#include<stdio.h>

typedef struct{
	int a;
	int b;
}div;

int main(void){
	div n;
	scanf("%d",&n.a);
	scanf("%d",&n.b);
	
	printf("%d / %d = %d ... %d",n.a,n.b,n.a/n.b,n.a%n.b);
}
