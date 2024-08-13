#include<stdio.h>
int main()
{
	int sayilar[20];
	int kactane;
	printf("Kac tane sayi gireceksin?:");
	scanf("%d",&kactane);
	for(int i=0;i<kactane;i++)
	{
		printf("\n Sayi %d:",i+1);
		scanf("%d",&sayilar[i]);
	}
	
	for(int j=0;j<kactane;j++)
	{
		printf("%d.ci Sayi=%d\n",j+1,sayilar[j]);
	}
	
	
}
