//  Copyright (c) 2018 Antoine Tran Tan
//

#include <stdlib.h>
//#include "my_header.h"


int main(void)
{   
	unsigned long s1 = 0, s2 = 0,s3 = 0, s4 = 0, nmbaleatoire = 0; 
	unsigned char n = 1,n2 = 1, n3 = 0, n4 = 0, n5 = 0;
// Ex 1
	while (n <11)  // Valeur de while choisi au hasard comme l'énoncer ne le précise pas
	{
		s1 = s1 + 3 * n;
		n++;
	}
// Ex 2 
	do 
	{	
		s2 = s2 + 3 * n2;
		n2++;
	}
	while (s2 < 9876);  
// Ex 3 	
	while (n3 < 12)
	{
	nmbaleatoire = rand();
	nmbaleatoire = nmbaleatoire % 10;
	nmbaleatoire = nmbaleatoire + 1;  
	s3 = s3 + nmbaleatoire; 
	n3++;
	}
// Ex 4 
	while (n4 <20)
	{
		 if ( (n5 % 3) == 0)
		 {
			 s4 = s4 + n5;
			 n4++;
		 }
		 else if ( (n5 % 7) == 0 )				
		 {
			 s4 = s4 + n5;
			 n4++;
		 } 
		 n5++;
	}
  return 0;
}
