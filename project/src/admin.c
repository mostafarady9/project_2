#include"../New folder/STD_TYPES.H"
#include"../New folder/admin.h"

void admin()
{
printf("\nchoose the operation:\n1-add an invoice\n2-list an invoice\n3-delete an invoice\n4 for exit\n (enter 0 to back)");
scanf("%d",&choose);
if((choose==1)||(choose==2)||(choose==3)||(choose==4))
{
ptr[choose-1]();

}
else if(choose==0)
{
	main();
}
else
{
printf("worng enter number of operation correct.\n");
admin();	
}
}
void add_in()
{
	printf("enter number of castumer:\n(enter 0 to back)");
	scanf("%d",&num_cas);
	if(num_cas!=0)
	{
		printf("enter castumer name:");
		scanf("%s",&cas[num_cas-1].name);
		printf("enter castumer number:");
		scanf("%d",&cas[num_cas-1].number);
		printf("enter castumer adresse:");
		scanf("%s",&cas[num_cas-1].adress);
		printf("enter castumer price:");
		scanf("%f",&(cas[num_cas-1].price));
		printf("enter castumer id:");
		scanf("%d",&(cas[num_cas-1].id));
		printf("\nenter 1 to show invoice\nenter 0 to back\nenter 2 to enter new invoice \n");
		scanf("%i",&choose_1);
	    
		if(choose_1==0)
		{
			admin();
		}
		else if(choose_1==1) 
		{
			show_list(num_cas-1);
			printf("\n(enter 0 to back)(1 to back to list)");
			scanf("%d",&choose_2);
			if(choose_2==0)
			{
			admin();
			}
			else if(choose_2==1)
			{
			list();
			}
			
		}
		else if(choose_1==2)
		{
			add_in();
		}
	}
	else
	{
		admin();
	}
}
void list()
{
	u8 choose_3;
	for(int i=0;i<10;++i)
	{
		show_list(i);
	}
	
	printf("(enter 0 to back)\nchoose one of them : ");
	scanf("%d",&choose_3);
	if(choose_3==0)
	{
		admin();
	}
	else
	{
		show_list(choose);
		printf("\n(enter 0 to back)(1 to back to list)");
		scanf("%d",&choose_2);
		if(choose_2==0)
		{
			admin();
		}
		else if(choose_2==1)
		{
			list();
		}
	}
}
void Delete()
{
	printf("choose what u want to delete :");
	scanf("%d", choose_4);
//	cas[choose_4].name[]=arr;
	cas[choose_4].number=0;
//	cas[choose_4].adress[]=arr;
	cas[choose_4].price=0.0;
    cas[choose_4].id=0	;
	printf("\n\n invoics num %d successfully.",choose_4);
	admin();
	
}
void show_list(u8 num)
{
			
	printf("\n\n\ninvoisce num%d\n\n",num+1);
	printf("castumer name:%s\n",cas[num].name);
	printf("castumer number :%d\n",cas[num].number);
	printf("castumer id :%d\n",cas[num].id);
	printf("castumer adresse :%s\n",cas[num].adress);
	printf("castumer price :%.3F\n",cas[num].price);

}
