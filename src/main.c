//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"
#define SEUILB -100
#define SEUILH 200

int main(void)
{
	unsigned char i,i2,i3,i3bis = 9,i4, i4bis = 5,i5, i5bis=10;
	unsigned char bin[10] = {122,82,45,12,42,36,2,76,94,100};
	short sat[10];
	unsigned char dist[10] = {15,42,36,58,14,68,25,14,30,41};
	unsigned char a[5] = {1,3,5,8,10};
	unsigned char b[5];
	unsigned char miroir[10] = {1,2,3,4,5};   
	// ------------- Exo 1 ------------------     
	
	for (i=0 ; i<10; i++)
	{
		if (bin[i] < 50) // Seuil choisi 50
		{
			bin[i] = 0;
		}
		else 
		{	
			bin[i] = 1;
		}	
	}	
// ------------- Exo 2 ------------------ 	
	for (i2=0 ; i2<10; i2++) // Boucle pour générer les nombres UNIQUEMENT 	
	{
		sat[i2] = (rand()%600) - 300; //Nombre entre -300 et259  
		
	}
	for (i2=0; i2<10; i2++)
	{
		if (sat[i2] < SEUILB)
		{
			sat[i2] = SEUILB;	
		}
		else if (sat[i2] > SEUILH)
		{
			sat[i2] = SEUILH;		
		}	
	}
// ------------- Exo 3 ------------------ 
	for (i3=9; i3>0; i3--)
	{
		i3bis = i3 - 1;
		if (dist[i3] > dist[i3bis])
		{
			dist[i3] = dist[i3] - dist[i3bis];
		}
		else if (dist[i3] < dist[i3bis])
		{
			dist[i3] = dist[i3bis] - dist[i3];
		}
	}
	
// ------------- Exo 4 ------------------ 
	for (i4=0; i4<5; i4++)
	{
		i4bis = i4bis - 1; 
		 b[i4bis]= a[i4];	
	}		
// ------------- Exo 5 ------------------     	
	 for (i5=0; i5<5; i5++)
	 {
		 i5bis = i5bis - 1; 
		 miroir[i5bis] = miroir[i5];
	 }	 
	return 0; 	
}
