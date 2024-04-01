#include"../New folder/user.h"
#include"../New folder/STD_TYPES.H"
#include"../New folder/admin.h"
void user()
{ count=0;
	printf("enter ur name :");
	scanf("%s",&info[count].name);
	printf("enter password: ");
	scanf("%d",&info[count].pass);
	printf("enter id: ");
	scanf("%d",&info[count].id);
	for(i;i<10;++i)
	{
		for(j;j<10;++j)
		{
			if(info[j].id==cas[i].id)
			{
				printf("here ur invoice");
				show_list(i);
                printf("(enter 1 to back)(enter 0 to pay)");
                scanf("%d",&choose_5);		
				if(choose_5)
				{
					user();
				}else
				{
					pay();
				}
			}
		else if((i=9)&&(info[j].id!=cas[i].id))
			printf("wrong enter you id again\n");
			user();	
			}
		}	
	count++;
}
void pay()
{

	printf("enter mastercard number");
	scanf("%d",&info[count].master);
	printf("u paid successfully. ");
	main();
}