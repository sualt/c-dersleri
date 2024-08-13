#include<stdio.h>


int sayiTopla(int a,int b)
{
	int toplam=a+b;
	return toplam;



}



int main()
{
	int sayi1,sayi2;

	scanf("%d %d",&sayi1,&sayi2);
		int cevap=sayiTopla(sayi1,sayi2);
	
	printf("%d",cevap);
	
	
	
}
