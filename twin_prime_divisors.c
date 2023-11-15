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
void twinprime(int x){

	for(int i = 2;i <= sqrt(x);i++){
	
		if(x % i == 0){
		
			if(isPrime(i) == 1 && isPrime((x / i)) == 1){
			
				printf("(%d, %d)\n", i, (x / i));
			}
		}
	}
}

int main(){

	twinprime(96);
}
