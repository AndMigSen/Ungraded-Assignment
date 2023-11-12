#include <stdio.h>

void
display (char c, int nCount)
{
 /* provide your variable declaration and code */
}
/* This function should display nCount digits starting from *pNum (i.e., if
*pNum is initially 3 and nCount is 4, the function displays 3456 and *pNum
will be 7 before the end of the function. */
void
displayNumbers (int *pNum, int nCount)
{
 /* provide your variable declaration and code */
}
void
displayPattern (int n)
{ int nLine, nNum, nX, nDigits; /* do not add other variables */
nNum = 1;
nX = n;
nDigits = 0;
for (nLine = 1; )
{
displayNumbers( );
display( );
displayNumbers( );
printf(“\n”);
/* provide other necessary code here */
}
}
int
main()
{ int n;
printf(“Enter n: ”);
scanf(“%d”, &n);
displayPattern(n);
return 0;
}

