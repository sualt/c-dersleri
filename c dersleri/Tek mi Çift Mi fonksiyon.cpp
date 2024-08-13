#include<stdio.h>

tekmiciftmi(int a)
{
	if(a%2==0)
	{
		printf("Sayi Cift",a);
		
	}
	
	
	else
	{
		printf("Sayi Tek",a);
	}
}


int main()
{
	
	int sayi;
	
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	
	
	tekmiciftmi(sayi);
	
	
}
