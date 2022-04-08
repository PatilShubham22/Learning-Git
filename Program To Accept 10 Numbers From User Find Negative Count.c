/// Program To Accept 10 Numbers From User
/// Find How Many Negative Numbers Inputted

#include<stdio.h>

int main()
{
	int i = 0, Num = 0, Neg = 0;
	
	for(i = 1; i <= 10; i++)
	{
		printf("\n Enter Number %d= ",i);
		scanf("%d",&Num);
		
		if(Num < 0)
		{
			printf("\n Negative updated");
			
			Neg++;
		}	
	}	
	
	printf("\n\n**************************************");
	printf("\n\n Count Of Negative Numbers = %d",Neg);
	printf("\n\n**************************************");
	
	printf("\n Thanks For input");
	
	
return 0;
}	
			