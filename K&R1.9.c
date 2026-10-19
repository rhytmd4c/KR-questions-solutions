#include <stdio.h>
int main()
{
	int c,lastc='\n';
	
	while((c=getchar())!=EOF)
	{
		if(c==' '||c=='\t')
			{if(lastc!=' ')
			{
			putchar(' ');
			lastc=' ';
		}}
		else
		{
			putchar(c);
			lastc=c;
		}
	}
}