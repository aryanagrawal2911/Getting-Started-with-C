# include <stdio.h>

int main(){
	int n, sum = 0;
	
	printf("Enter a number between 0 and 1000 : ");
	scanf("%d", &n);
	
	//while(n != 0){
	//	sum += n % 10;
	//	n /= 10;
	//}
	
	sum += n % 10;
	n /= 10;
	sum += n % 10;
	n /= 10;
	sum += n % 10;
	n /= 10;
	
	
	printf("Sum of the digits of %d = %d\n", n, sum);
}
