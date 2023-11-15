#include <stdio.h>

int factorial(int x){

	if(x == 0){
	
		return 1;
	}
	
	return x * factorial(x - 1);
}


int comb(int x, int y){
	
	return factorial(x) / (factorial(y) * factorial(x - y));
}


void pascaltri(int x){
	
	for(int i = 1;i <= x;i++){
	
		for(int j = x - i;j > 0;j--){
		
			printf("  ");
		}
	
		for(int k = 0;k < i;k++){
			
			printf(" %2d ", comb(i, k));
		
		}
		
		printf("\n");
	}
}

int main(){

	pascaltri(8);	
}
