#include<stdio.h>

int main()

{
	int sayi,sayi2,islem,bolme;
	printf("Bir sayi giriniz:\n");
	scanf("%d",&sayi);
	
	printf("Ýkinici sayi giriniz:");
	scanf("%d",&sayi2);
	
	islem=sayi*sayi2;
	
	
	printf("\nCarpim=%d",islem);
	
	bolme=sayi/sayi2;
	
	printf("\nbolum=%d",bolme);
	
}
