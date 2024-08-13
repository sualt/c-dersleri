#include<stdio.h>


int toplamaIslemi(int a,int b)
{
	int topla;
	topla=a+b;
	printf("%d\n",topla);
	
}
int cikarmaIslemi(int a,int b)
{
    int cikarma;
    if(a<b)
    {
    	cikarma=b-a;
	}
	else
	{
		cikarma=a-b;
	}
	printf("%d",cikarma);	
	
}


int main()
{
	int sayi1,sayi2;
	printf("Lutfen sayi1 giriniz:");
	scanf("%d",&sayi1);
	printf("Lutfen sayi2 giriniz:");
	scanf("%d",&sayi2);
	
	toplamaIslemi(sayi1,sayi2);
	cikarmaIslemi(sayi1,sayi2);
}
