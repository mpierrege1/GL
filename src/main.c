//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib_suite.h" 

int main(void)
{
     unsigned char tirage[6];
	 unsigned char user[6];
	 unsigned char cpttirage, cptuser, nmbcommun = 0, tour = 0, highscore = 0;
	 // Variable nmbcommun ne sert a compter le nombre de nombre commun entre le tirage et la grille de l'utilisateur
	 // Tirage alléatoire des nombre choisi par l'utilisateur
	 initialiserTirage()  ;
	 for(cptuser=0; cptuser<6; cptuser++)
	 {
		user[cptuser] = tirerNumero();	 
	 }
		// Tirage alléatoire du tirage
	 	initialiserTirage();
	 	for(cpttirage=0; cpttirage<6; cpttirage++)
	 	{
			tirage[cpttirage] = tirerNumero();	 
		}
	 	//   Comparaison des nombres commun entre l'utilisateur et le tirage
	 
	 	for(cptuser=0; cptuser<6; cptuser++)
	 	{
	   		for (cpttirage=0; cpttirage<6; cpttirage++) // On doit test le premier numéro d'user avec l'ensemble de tirage   
	  		{	   
	   			if (user[cptuser] == tirage[cpttirage])
				{
			  		nmbcommun++;
				}	
	   		}				
	
	 	}
	return 0;
}
