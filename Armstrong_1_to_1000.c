# include <stdio.h>
# include <math.h>

static int isArmstrong(int x){
	int ret = 0;
	int a = x, b = x;
	int sum = 0;
	int c = 0;
	
	while(b != 0){
		c++;
		b /= 10;
	}
	
	while(x != 0){
		int r = x % 10;
		
		if(c == 3){
			sum += pow(r, 3);
		}
		
		else{
			sum += pow(r, 4);
		}
		
		x /= 10;
	}
	
	if(sum == a){
		ret = 1;
	}
	
	return ret;
}

int main(){

	for(int i = 1;i <= 10000;i++){
	
		if(isArmstrong(i) == 1){
		
			printf("%d	", i);
			
		}
	}
	
	printf("\n");
	
}
	
