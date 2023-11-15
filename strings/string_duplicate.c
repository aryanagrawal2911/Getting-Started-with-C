# include <stdio.h>
# include <stdlib.h>
# include <string.h>

char *duplicate(const char* str){

	int i = 0;
	
	while(str[i] != '\0')
		i++;
		
	char *str2 = (char*)malloc((i + 1) * sizeof(char));
	
	i = 0;
	
	while(str[i]){
		str2[i] = str[i];
		i++;
	}
		
	str2[i] = '\0';
	
	return str2;
}

int main(){

	char str[100], *str2;
	
	printf("Enter a string :");
	gets(str);
	
	int i = 0;
	
	while(str[i] != '\0')
		i++;
		
	str2 = (char*)malloc((i + 1) * sizeof(char));
	
	strcpy(str2, str);

	printf("Duplicated string :");
	puts(str2);
	
	printf("\n");
	
}
