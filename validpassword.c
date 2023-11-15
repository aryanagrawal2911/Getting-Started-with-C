#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void valid(char *pw)
{

	int a = strlen(pw);

	if ((a < 8) || (a > 16))
	{

		printf("Invalid password length!!\n");
		exit(0);
	}

	int up = 0, lo = 0, di = 0, sc = 0;

	int i = 0;

	while (pw[i] != '\0')
	{

		int asc = (int)(pw[i]);

		if ((asc >= 65) && (asc <= 90))
			up++;

		else if ((asc >= 97) && (asc <= 122))
			lo++;

		else if ((asc >= 48) && (asc <= 57))
			di++;

		else
			sc++;

		i++;
	}

	if ((up < 1) || (di < 2) || (sc < 2))
	{

		printf("Invalid password\n");
		exit(0);
	}

	else
		printf("Valid Password\n");
}

int main()
{

	char pw[100];
	printf("Create a password :");
	gets(pw);
	valid(pw);
}
