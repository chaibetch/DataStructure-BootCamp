#include<stdio.h>

int main(){
	long long int a,b,c,d;
	scanf("%lli %lli %lli %lli",&a,&b,&c,&d);
	if((a*b)==(c-d)){
		printf("True\n");
	}
	else{
		printf("False\n");
	}
	
	
	return 0;
}
