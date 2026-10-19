#include <stdio.h>
int main()
{
	int c,whitespaces,n_other,a[10];
	whitespaces=n_other=0;
	for(int i=0;i<10;i++)
	a[i]=0;
	while((c=getchar())!=EOF)
	{
		if(c>='0'&&c<='9')
			a[c-'0']++;
		else if(c=='\n'||c==' '||c=='\t')
			whitespaces++;
		else
			n_other++;
	}
	for(int i=0;i<10;i++)
		printf("%d's occurances is %d%c",i,a[i],'\n');
	printf("The number of white spaces are %d and others are %d",whitespaces,n_other);
	
	
	
}