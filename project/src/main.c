#include<stdio.h>
#include"../New folder/STD_TYPES.H"
#include"../New folder/admin.h"
#include"../New folder/user.h"
#include"user.c"
#include"admin.c"
u8 ch=0;
int main()
{
	printf("if user enter 1 \nif admin enter 2\n(enter 0 to close)\n");
	scanf("%d",&ch);
	if(ch==1)
	{
	user();	
	}
	else if(ch ==2)
	{
	admin();
	}
	else if(ch ==0)
	{
		
	}
	else
	{
		printf("wrong input enter again\n\n\n");
		main();
	}
return 0;
}