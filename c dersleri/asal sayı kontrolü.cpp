#include<stdio.h>
int main()
{
	int sayi;
	int sayac=0;
	printf("Lutfen sayi giriniz:"),
	scanf("%d",&sayi);
	
	
	for(int i=2;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			sayac++;
		}
	}
	if(sayac==0)
	{
		printf("!!!!!!Sayiniz asaldir!!!!!!");
	}
	else
	{
		printf("......Sayiniz asal degildir......");
	}
}
