# include <stdio.h>
# include <stdlib.h>
# include <string.h>

char* concat(char *str1, char *str2){

	int i = strlen(str1);
	int j = strlen(str2);
	
	char* str3 = (char*)malloc((i + j + 1) * sizeof(char));

	i = 0;
	
	while(str1[i] != '\0'){
	
		str3[i] = str1[i];
		i++;	
	}
	
	j = 0;
	
	while(str2[j] != '\0'){
	
		str3[i] = str2[j];
		i++;
		j++;	
	}
	
	str3[i] = '\0';
	
	return str3;

}

int main(){

	char str1[100], str2[100], *str3;

	printf("Enter a string :");
	gets(str1);
	
	printf("Enter another string :");
	gets(str2);
	
	str3 = concat(str1, str2);
	puts(str3);

}
