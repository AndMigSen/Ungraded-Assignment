#include <stdio.h>

float functionCall1(int nValueOfX, int nBase)
{
	int nExponent;
	float nBaseContainer, nAddContainer1, nSubContainer1, nFactorialContainer1, nFactorialCounter, fEverythingContainer;
	nBaseContainer = nBase;
	//runs once because 1/1 is obviously 11
	nExponent = 0;
	if(nExponent == 0)
	{
		nAddContainer1 = 1;
		
		
		nFactorialContainer1 = 1;
		
		nAddContainer1 /= nFactorialContainer1;
		printf("%.2f\n", nAddContainer1);
		nExponent++;
	}
	//runs once since base/1 is just yknow, the base
	if(nExponent == 1)
	{
		nSubContainer1 = nBase;
	
		nExponent++;
		
		nFactorialContainer1 = 1;
		printf("%.2f\n", nSubContainer1);
		
		nSubContainer1 /= nFactorialContainer1;
		nAddContainer1 -= nSubContainer1;
	}
	
	if(nValueOfX != 1 && nValueOfX != 0 && nValueOfX != 2) 
	{
	
	printf("firstpass: %.2f\n", nAddContainer1);
	//the meat of the code idk how i made it work but it works :')))
	do
	{
	nBaseContainer *= nBase ;
	printf("\n\nnBaseContainer: %.2f\n", nBaseContainer);

	nFactorialCounter = 1;
	nFactorialContainer1 = 1;
	// i could turn these into a function but I'll just do that later
	if(nExponent % 2 == 0)
	{
	printf("\n\nnExponent % 2 == 0 is working here it should alternate\n\n");
	//while statement here
		while(nFactorialCounter != nExponent)
		{
			nFactorialCounter++;
			nFactorialContainer1 *= nFactorialCounter;
			

		}
		printf("nFactorialContainer1: %.2f\n", nFactorialContainer1);
		fEverythingContainer = nBaseContainer / nFactorialContainer1;
		printf("\nfEverythingContainer: %f\n",fEverythingContainer);
		nAddContainer1 += fEverythingContainer;
		printf("addition: %.2f\n", nAddContainer1);
	}
	
	else if (nExponent % 2 == 1)
	{
	printf("\n\nnExponent % 2 == 1 is working here it should alternate\n\n");
	//while statement ehre
		while(nFactorialCounter != nExponent)
		{
			nFactorialCounter++;
			nFactorialContainer1 *= nFactorialCounter;

		}
		printf("nFactorialContainer1: %.2f\n", nFactorialContainer1);
		printf("nFactorialCounter: %.2f\n", nFactorialCounter);
		fEverythingContainer = nBaseContainer /nFactorialContainer1;
		printf("\nfEverythingContainer: %f\n",fEverythingContainer);
		nAddContainer1 -= fEverythingContainer;
	printf("nAddContainer1: %f\n", nAddContainer1);
	}
	
	nExponent++;
	}while (nExponent != nValueOfX);
	
	// post while statement; copy pasted because i'm too lazy to make it into a function
		nBaseContainer *= nBase ;
	printf("\n\nnBaseContainer: %.2f\n", nBaseContainer);

	nFactorialCounter = 1;
	nFactorialContainer1 = 1;
		if(nExponent % 2 == 0)
	{
	printf("\n\nnExponent % 2 == 0 is working here it should alternate\n\n");
	//while statement here
		while(nFactorialCounter != nExponent)
		{
			nFactorialCounter++;
			nFactorialContainer1 *= nFactorialCounter;
		}
		printf("nFactorialContainer1: %.2f\n", nFactorialContainer1);
		fEverythingContainer = nBaseContainer / nFactorialContainer1;
		printf("\nfEverythingContainer: %f\n",fEverythingContainer);
		nAddContainer1 += fEverythingContainer;
		printf("addition: %.2f\n", nAddContainer1);
	}
	else if (nExponent % 2 == 1)
	{
	printf("\n\nnExponent % 2 == 1 is working here it should alternate\n\n");
	//while statement ehre
		while(nFactorialCounter != nExponent)
		{
			nFactorialCounter++;
			nFactorialContainer1 *= nFactorialCounter;

		}
		printf("nFactorialContainer1: %.2f\n", nFactorialContainer1);
		printf("nFactorialCounter: %.2f\n", nFactorialCounter);
		fEverythingContainer = nBaseContainer /nFactorialContainer1;
		printf("\nfEverythingContainer: %f\n",fEverythingContainer);
		nAddContainer1 -= fEverythingContainer;
	printf("nAddContainer1: %f\n", nAddContainer1);
	}
}
	if(nValueOfX == 0)
	{
		nAddContainer1 = 1;
	}
	printf("nExponent: %d", nExponent);
	printf("\n\nRESULT: %.2f\n", nAddContainer1);
	//returns it since it is a float thing afterall
	return nAddContainer1;
}

void
Checkexp()
{
	int Low, High, Check;
	Check = 0;
	for (int x = -500; x <= 500; x++)
		/*Checks through x values from -500 to 500 */
		{
			for (int y = -500; y <=500; y++) 
			{
			/*Checks through y values from -500 to 500 */
				for (int z = -500; z <=500; z++)
				{
				/*Checks through z values from -500 to 500 */
					if ((2 * x) - (3 * y) >= (5*z))  
						Check++;
					/*Checks if condition is met then increments check */
				}
			}
		}
	printf("%d", Check);
}




void display (char c, int nCount)
{
	
}

/* This function should display nCount digits starting from *pNum (i.e., if
*pNum is initially 3 and nCount is 4, the function displays 3456 and *pNum
will be 7 before the end of the function. */
void displayNumbers (int *pNum, int nCount)
{
 /* provide your variable declaration and code */
}

void displayPattern (int n)
{ int nLine, nNum, nX, nDigits; /* do not add other variables */
nNum = 1;
nX = n;
nDigits = 0;
//for (nLine = 1; )
{
//displayNumbers( );
//display( );
//displayNumbers( );
//printf(“\n”);
/* provide other necessary code here */
}

}
int main()
{ 
int nOption, nExpoVal, nBasVal;
int base, n;
	nOption = 0;
	nExpoVal = 0;
	nBasVal = 0;
	
do
{

	printf("Enter option from 1-4: ");
	fflush(stdin);
	scanf("%d", &nOption);
switch(nOption)
{
	case 1:
	printf("\nEnter exponent and factorial <= value: ");
	scanf("%d", &nExpoVal);
	printf("\nEnter Base Value: ");
	scanf("%d", &nBasVal);
	functionCall1(nExpoVal, nBasVal);
	printf("\n\n");
	break; 
	case 2: Checkexp();
	break;
	case 3: 
	break;
}
}while(nOption != 4);
printf("\nSHUTTING DOWN!\nGOODBYE :(");
}

