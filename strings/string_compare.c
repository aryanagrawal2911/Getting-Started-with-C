# include <stdio.h>

int strcmp(char *str, char *str1){

	int re = 0;
	
	for(int i = 0;str[i] != '\0';i++){
	
		if(str[i] != str1[i]){
		
			if(str1[i] > str[i]){
				re = 1;
				break;
			}
		}
	}
	
	return re;
}

int main(){

	char str[100], str1[100];
	gets(str);
	gets(str1);
	
	int r = strcmp(str, str1);
	
	if(r == 0)
		printf("%s is greater than %s\n", str, str1);
	
	else
		printf("%s is greater than %s\n", str1, str);
}
