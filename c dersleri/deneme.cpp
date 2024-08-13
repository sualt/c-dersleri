#include<stdio.h>

int main()
{
	int sayi1,sayi2,carpim,toplam,fark;
	float bolum;
	int sec;
	printf("Lutfen 1 sayi giriniz:");
	scanf("%d",&sayi1);
	printf("Lutfen 2.sayiyi giriniz:");
	scanf("%d",&sayi2);
	
	printf("Lutfen 1-4 arasi bir sayi seciniz: [1]Toplama...[2]Cikarma...[3]Carpim...[4]Bolum");
	scanf("%d",&sec);
	
	switch(sec)
	{
		case 1:
				toplam=sayi1+sayi2;
		printf("Toplam=%d",toplam);
		break;
		case 2:
			if(sayi1>sayi2)
			{
				fark=sayi1-sayi2;
				printf("Fark=%d",fark);
				break;
			}
			else
			{
				fark=sayi2-sayi1;
				printf("Fark=%d",fark);
				break;
			}
			case 3:
				carpim=sayi1*sayi2;
				printf("Carpim=%d",carpim);
				break;
				case 4:
					bolum=sayi1/sayi2;
					printf("Bolum=%f",bolum);
					break;
					
	
		
		
		
	}
	
	
}
