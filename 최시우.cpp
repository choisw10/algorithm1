#include<stdio.h>

int Sum(int n);

int main(){
	int num;
	scanf("%d",&num);
	int a = Sum(num);
	printf("%d",a);
}
Sum(int n){
	if(n == 1){
		return 1;
	}
	else{
		return Sum(n - 1) + n;
	}
}
