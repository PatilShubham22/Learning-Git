/// Program To Accept N Numbers From User
/// Find How Many Zero Inputted

#include<stdio.h>

int main()
{
	int i = 0, Cnt = 0, Num = 0, Zero = 0;
	
	printf("Enter Numbers To Input = ");
	scanf("%d",&Cnt);
	
	for(i = 1; i <= Cnt; i++)
	{
		printf("\n Enter Number %d= ",i);
		scanf("%d",&Num);
		
		if(Num == 0)
		{
			printf("\n zero updated");
			
			Zero++;
		}	
	}	
	
	printf("\n\n**************************************");
	printf("\n\n Count Of Zero  = %d",Zero);
	printf("\n\n**************************************");
	
	printf("\n Thanks For input");
	
	
return 0;
}	
			