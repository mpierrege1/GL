//  Copyright (c) 2018 Antoine Tran Tan
//

#include <userint.h>
#include <ansi_c.h>
#include "my_header.h"

int main(void)
{
	char nom[100];
	char prenom[100];
	long age = 0;
	char phrase[100];
	printf("Inserer votre nom SVP :");
	scanf("%s", nom);
	printf("Inserer votre prenom SVP :"); 
	scanf("%s", prenom);
	printf("Inserer votre age SVP :"); 
	scanf("%d", &age);
	sprintf(phrase,"je m'appelle %s %s et j'ai %d ans", prenom, nom, age);
	MessagePopup("Bonjour et bienvenue", phrase);
	return 0;
}
