#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	char string[50],a[20],b[20],c;
	int val,i;
	printf("ENTER a string\n");
	gets(string);
	val=strlen(string);
	printf("Enter a character to split string:\n");
	scanf("%c",&c);
	for(i=0;i<val;i++)
	{
		if(string[i]!=c)
		{
			a[i]=string[i];
		}else
		{
			a[i]=' ';
		}
		
	}
	puts("STRING AFTER SPLITTING IS:\n");
	puts(a);
	return 0;
}

