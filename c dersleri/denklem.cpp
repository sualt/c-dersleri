#include<stdio.h>

int main()

{
	
	int sayiX;
	int sayiY;
	int denklem;
	
	printf("Lutfen x degerini giriniz:");
	scanf("%d",&sayiX);
	printf("Lutfen y degerini giriniz:");
	scanf("%d",&sayiY);
	
	
	denklem=2*(sayiX*sayiX)+2*(sayiY)+3;
	printf("Denklemin sonucu=%d",denklem);
	
	
	
}
