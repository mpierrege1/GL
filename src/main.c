//  Copyright (c) 2018 Antoine Tran Tan
//

#include <userint.h>
#include <ansi_c.h>
#include "my_header.h"

int main(void)
{
	char ligne1[80] = "Nom: pentagone_B" ;
	char ligne2[80] = "Nb points: 5" ;
	char ligne3[80] = "Cordonnees: 10 20 30 20 30 40 43 53 35 65" ;
	char nom_fig[100], msg[100];
	long nb_pts = 0;
	long x[5]={0,0,0,0,0}, y[5]={0,0,0,0,0}, checkvar = 0,i;
	sscanf(ligne1,"%*s %s", nom_fig);
	sscanf(ligne2,"%*s %*s %d", &nb_pts);  
	sscanf(ligne3,"%*s %d %*d %d %*d %d %*d %d %*d %d %*d", &x[0],&x[1],&x[2],&x[3],&x[4]);
	sscanf(ligne3,"%*s %*d %d %*d %d %*d %d %*d %d %*d %d", &y[0],&y[1],&y[2],&y[3],&y[4]);
	for (i=0; i<5; i++)
	{
		if (x[i] != -1)
		{
			checkvar++;
		}	
		if (y[i] != -1)
		{
			checkvar++;
		}
	}
	if (checkvar == nb_pts * 2)
	{
		sprintf(msg, "La Figure %s possede %d sommets", nom_fig, nb_pts);
		MessagePopup("Figure", msg);
	}
	else 
	{
		MessagePopup("ERREUR !","ERREUR : Le nombre de points et les coordonees fournies sont incoherantes");	
	}	
    return 0;
}
