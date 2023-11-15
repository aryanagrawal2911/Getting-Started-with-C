# include <stdio.h>
# include <string.h>

void reverse(char *str){

	int i = 0;
	int j = strlen(str) - 1;
	
	while(i < j){
	
		char ch = str[i];
		str[i] = str[j];
		str[j] = ch;
		
		i++;
		j--;
	}
}

int main(){

	char str[100];

	printf("Enter a line :");
	gets(str);
	
	reverse(str);
	
	printf("Reversed :");
	puts(str);
}
