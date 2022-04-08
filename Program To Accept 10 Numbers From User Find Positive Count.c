/// Program To Accept 10 Numbers From User
/// Find How Many Positive Numbers 

#include<stdio.h>

int main()
{
	int i = 0, Num = 0, Pos = 0;
	
	for(i = 1; i <= 10; i++)
	{
		printf("\n Enter Number %d= ",i);
		scanf("%d",&Num);
		
		if(Num > 0)
		{
			printf("\n Positive updated");
			
			Pos++;
		}	
	}	
	
	printf("\n\n**************************************");
	printf("\n\n Count Of Positive Numbers  = %d",Pos);
	printf("\n\n**************************************");
	
	printf("\n Thanks For input");
	
	
return 0;
}	
			