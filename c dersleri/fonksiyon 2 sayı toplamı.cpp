#include<stdio.h>


int toplamaIslemi(int a,int b)
{
	int topla;
	topla=a+b;
	printf("%d",topla);
	
}


int main()
{
	int sayi1,sayi2;
	printf("Lutfen sayi1 giriniz:");
	scanf("%d",&sayi1);
	printf("Lutfen sayi2 giriniz:");
	scanf("%d",&sayi2);
	
	toplamaIslemi(sayi1,sayi2);
	
}
