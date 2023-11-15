# include <stdio.h>
# include <math.h>

static int isPrime(int x){
	int ret = 1;
	
	for(int i = 2;i <= sqrt(x) ;i++){
	
		if(x % i == 0){			
			ret = 0;
			break;		
		}
		
	}
	
	return ret;
}

int main(){
	
	for(int i = 2;i <= 10000;i++){
		
		if(isPrime(i) == 1){
		
			printf("%d	", i);
		
		}
		
	}
	
	printf("\n");
	
}
