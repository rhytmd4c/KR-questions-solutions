#include <stdio.h>
#define IN 1
#define OUT 0
int main()
{
	int c,state;
	while((c=getchar())!=EOF)
	{
		if(c==' '||c=='t'||c=='\n')
		state=OUT;
		else if(state==OUT)
		{
			putchar('\n');
			state=IN;
			 
		}
		else
			putchar(c);
	}
}