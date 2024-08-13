#include<stdio.h>


int sayilarEsitMi(int a,int b)
{
	if(a==b)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
	
	
}




int main()
{
	
	int sayi1,sayi2;
	scanf("%d %d",&sayi1,&sayi2);
	
	bool deger= sayilarEsitMi(sayi1,sayi2);
	if(deger)
	{
		printf("Esit");
	}
	else
	{
		printf("Degil");
	}
	
}
