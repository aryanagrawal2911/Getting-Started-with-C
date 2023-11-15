#include <stdio.h>

int factorial(int x){

	if(x == 0){
	
		return 1;
	}
	
	return x * factorial(x - 1);
}


double series(int x){
	
	double sum = 1;
	
	for(int i = 2;i <= x;i++){
		
		if(i % 2 == 0) {
			
			sum = sum - (1.0 / (factorial(i) * factorial(i + 1)));
		}
		
		else{
		
			sum = sum + (1.0 / (factorial(i) * factorial(i + 1)));
		}
	}
	
	return sum;
}


int main(){

	printf("%lf\n", series(10));
}
