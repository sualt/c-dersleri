#include<stdio.h>
#include<string.h>

void sayiSirala(int a,int b)
{
	
	if(a<b)
	{
		printf("%d<%d",a,b);
	}
	else if(b<a)
	{
		printf("%d<%d",b,a);
	}
	else
	{
		printf("%d=%d",a,b);
	}
	
}

int main()
{
	
	int sayi1,sayi2;
	
	printf("Sayi1 i giriniz:");
	scanf("%d",&sayi1);
	printf("Sayi2 i giriniz:");
	scanf("%d",&sayi2);
	
	sayiSirala(sayi1,sayi2);
}
