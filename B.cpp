#include<stdio.h>

long long int power(long long int a,long long int b){
	if(b==0){
		return 1;
	}
	return  a* power(a,b-1);
	
}

int main(){
	long long int n;
	scanf("%lli",&n);
	printf("%lli\n",power(2,n)-1);
	
	
	return 0;
}
