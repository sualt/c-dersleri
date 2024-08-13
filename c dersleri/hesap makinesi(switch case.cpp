#include<stdio.h>

int main()


{
	int sayi1,sayi2,islem;
	
	
	printf("Ilk sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("Ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	
	printf("Lutfen islemi seciniz(1 ile 4 arasýnda secim yapiniz):");
	scanf("%d",&islem);
	
	
	
	switch(islem)
	{
		case 1:
		printf("Toplama islemini sectiniz=%d",sayi1+sayi2);
		break;
		case 2:
			if(sayi1>sayi2)
			{
				printf("Cikarma islemini sectiniz=%d",sayi1-sayi2);
				break;
			}
			else
			{
				printf("Cikarma islemini sectiniz=%d",sayi2-sayi1);
				break;
			}
			
			
			case 3:
				printf("Carpma islemini sectiniz=%d",sayi1*sayi2);
				break;
				case 4:
					printf("Bolme islemini sectiniz=%d",sayi1/sayi2);
					break;
		
	}
	
	
}
