#ifndef ADMIN_H
#define ADMIN_H
#include"STD_TYPES.H"
typedef struct
{
u8 name [50];
u8 adress [50];
u64 number ;
f32 price; 	
u64 id;
u8 pay ;
}castomer;
void admin();
void add_in();
void list();
void Delete();
void show_list(u8 num);
u8 choose;
u8 choose_2;
u8 choose_4;
u8 num_cas;
u16 choose_1;
void(*ptr[3])()={add_in,list,Delete,NULL};
u8 arr[50]={0};
castomer cas[10];
#endif