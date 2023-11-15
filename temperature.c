# include <stdio.h>

int main(){

	float c, f;
	
	printf("Enter value in Celsius : ");
	scanf("%f", &c);
	
	f = ((c * 9) / 5) + 32;
	
	printf("%2.2f degree in Celsius is %3.2f degree in Fahrenheit.\n", c, f);
}
