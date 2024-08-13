#include<stdio.h>


int usHesabi(int a,int b)
{
	int cevap=1;
	for(int i=0;i<b;i++)
	{
		cevap*=a;
	}
	printf("\n Sayinin kuvvet degeri=%d",cevap);
	
	
}

int main()
{
	
	int sayi;
	int us;
	
	
	printf("Sayi:\n");
	scanf("%d",&sayi);
	
	printf("Kacinci dereceden us:");
	scanf("%d",&us);
	
	
	usHesabi(sayi,us);
	
	
	
}
