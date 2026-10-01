#include <stdio.h>
int main()
{
	char name[30];
	int roll;
	int age;

	printf("Enter Name,roll no,age");
	scanf("%s %d %d" , name,&roll,&age);

	printf("Your detail are as follows : \n");
	printf("Name    :%s\n",name);
	printf("Roll Np :%d\n",roll);
	printf("Age     :%d\n",age);
	if(age<=18)
	{
	printf("Get Away from Distractions\n");
	printf("Go and Focus on Study\n");
	}
	else
	{
	printf("Do work & Enjoy");
	}
	return 0;


}
