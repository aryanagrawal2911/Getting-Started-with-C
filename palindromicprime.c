#include <stdio.h>
#include <math.h>

int isPrime(int x){

	int b = 1;
	
	for(int i = 2;i <= sqrt(x);i++){
	
		if(x % i == 0){
		
			b = 0;
			break;
		}
	}
	
	return b;
}

int isPal(int x){

	int b = 0, rev = 0, xc = x;
	
	while(xc != 0){
	
		rev *= 10;
		rev += xc % 10;
		xc /= 10;
	}
	
	if(rev == x){
	
		b = 1;
	}
	
	return b;
}


void isPalprime(int x){
	
	if(isPrime(x) == 1 && isPal(x) == 1){
		
		printf("%d is a palindromic-prime\n", x);
	}
	
	else{
	
		printf("%d is not a palindromic-prime\n", x);
	}
}
int main(){

	isPalprime(101);
}
