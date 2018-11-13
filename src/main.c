//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"
#include "TP_lib.h"


int main(void)
{
	short resultat, i = 0;
	// 10 Lancer de dé
	while (i<10)
	{
	resultat = LancerDe();
	i++;
	// 	On Garde uniquement la valeur du dernier
	// affichage de la valeur du dé
	}
		printf("Le de montre un %hd !", resultat);   
    return 0;
}
