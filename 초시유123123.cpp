#include<stdio.h>

int main(void){
	char string[1000];
	gets(string);
	for(int i = 0 ; i < string[i]!=0; i++){
		if(string[i] >= 'A' && string[i] <= 'Z' || string[i] >= 'a' && string[i] <= 'z')
			printf("%c ",string[i]);
		
	}
}
