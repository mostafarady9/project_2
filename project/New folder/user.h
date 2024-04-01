#include"STD_TYPES.H"
#ifndef USER_H
#define USER_H
void user();
void pay();
typedef struct
{
	u8 name[50] ;
	u64 pass;
	u64 id;
	u64 master;
}cast;
cast info[10];
u8 count;
u8 choose_5;
u8 i=0;
u8 j=0; 
#endif