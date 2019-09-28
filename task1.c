#include<stdio.h>
main()
{
	char name[10];
	int age;
	double ph_no;
	printf("enter name:");
	scanf("%s",&name);
	printf("enter age:");
	scanf("%d",&age);
	printf("enter phone number:");
	scanf("%lf",&ph_no);
	printf("your name is %s",name);
	printf("\n your age is %d",age);
	printf("\n your ph_no is %lf",ph_no);
}

