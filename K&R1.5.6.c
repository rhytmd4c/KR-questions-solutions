#include <stdio.h>
#define IN 0
#define OUT 1
int main()
{
	int c,nl=0,nw=0,nc=0,state;
	while((c=getchar())!=EOF)
	{
		nc++;
		if(c=='\n')
			nl++;
		if(c=='\t'||c==' '||c=='\n')
			state=OUT;
		else if(state==OUT){
			nw++;
			state=IN;
		}
		
	}
	printf("The count of new lines=%d new words=%d new character=%d ",nl,nw,nc);
	return 0;
}