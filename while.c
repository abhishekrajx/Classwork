#include <stdio.h>

int main()
{
	int num;
	printf("Enter no : \n ");
	scanf("%d",&num);
	int i = 1;
	while(i<=10)
	{
	printf("%d * %d = %d  \n",num,i,(num*i));
	i+=1;
	}
	return 0;

}
