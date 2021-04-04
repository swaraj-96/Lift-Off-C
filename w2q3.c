#include <stdio.h>
#include <string.h>
 
int main()
{
  	char s[50];
  	int i, n;
  	n = 1;
 
  	printf("\n  Enter any String :  ");
  	scanf("%[^\n]",&s);
	for(i = 0; s[i] != '\0'; i++)
	{
		if(s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			n++;	
		} 
	}	
	printf("\n  Total Number of Words in the String is  = %d",n);
	
  	return 0;
}