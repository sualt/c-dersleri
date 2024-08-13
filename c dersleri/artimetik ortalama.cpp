#include<stdio.h>
int main()


{
	
	int sayi1,sayi2,sayi3;
	float ortalama;
	
	
	printf("Ilk sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("Ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	printf("Ucuncu sayiyi giriniz:");
	scanf("%d",&sayi3);
	
	ortalama=(sayi1+sayi2+sayi3)/3;
	
	printf("Ortalama=%f",ortalama);
	
	
}
