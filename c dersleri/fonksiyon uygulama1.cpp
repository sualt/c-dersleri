#include<stdio.h>


void sayiSiralama(int a,int b)
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
	printf("Lutfen sayi1 giriniz:");
	scanf("%d",&sayi1);
	printf("Lutfen sayi2 giriniz:");
	scanf("%d",&sayi2);
	
	sayiSiralama(sayi1,sayi2);
	
}
