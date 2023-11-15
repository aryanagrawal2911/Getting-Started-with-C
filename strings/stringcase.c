# include <stdio.h>

void lower(char *str){

	for(int i = 0;str[i] != '\0';i++){
	
		int a = (int)(str[i]);
		
		if((a >= 65) && (a <= 90)){
		
			a += 32;
		}
		
		str[i] = (char)(a);
	}
}

void upper(char *str){

	for(int i = 0;str[i] != '\0';i++){
	
		int a = (int)(str[i]);
		
		if((a >= 97) && (a <= 122)){
		
			a -= 32;
		}
		
		str[i] = (char)(a);
	}
}

int main(){

	char str[100], s;
	
	printf("Enter a line :");
	gets(str);
	
	lower(str);
	puts(str);
	
	upper(str);
	puts(str);

}
