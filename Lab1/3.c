/*
#include <stdio.h>
#include <math.h>
#include <locale.h>


int main(void)
{
	setlocale(LC_ALL, "RUS");
	
	
	int n;
	
	
	printf("n = ");
	scanf_s("%d", &n);
	
	
	if(n < 1 || 27 < n) 
	{
		printf("Невозможно выполнить операцию");
		return(0);
	}
	else
	{
		for(int i=100; i<1000; i++)
			if ( i / 100 + (i / 10) % 10 + i % 10 == n) printf("\n%d", i); 
	}
	
	
	return(0);	
}
*/
