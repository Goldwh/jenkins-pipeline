#include<stdio.h>
#include<stdlib.h>
int main()
{
    int j = 0, i = 10;
    printf("Hello world\n");
    printf("thank you\n");
    for(;j<=10;j++)
    {
	printf("第%d次循环：\n",j);
    	while(i--)
    	    {
	        printf("**");	
	        printf("i = %d\n",i);
		printf("----");
	    }
	i = 10;
    }
    exit(0);
}
