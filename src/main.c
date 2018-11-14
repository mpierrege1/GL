//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "cvi_gui.h"

int main(void)
{
	char over = 0;
	long score = 0;
	long de = 0;
			 
  	while (de != 1)
	{
		de = GetLong("Rentrez le numero du de");  
		if ( de == 2 || de == 4 || de == 6 )
		{
			score = score + de;	
		}
		if ( de == 3)
		{
			score = score * 2;	
		}
		if ( de == 5 && score >= 2)
		{
			score = score - 2;	
		}
		
	}		 
	DisplayLong ("Score Total" ,score);
    return 0;
}
