#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i = 10;
    printf("Hello world\n");
    printf("thank you\n");
    for(int j=0; j<=10; j++)
    {
	printf("第%d次循环：\n",j);
    	while(i--)
    	    {
	        printf("**");	
	        printf("i = %d\n",i);
	    }
	i = 10;
    }
    exit(0);
}
