#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>

#define dizi_boyutu 10

int depolama(int arr[],int size,int num)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==num)
		{
			return 1;
		}
	}
	return 0;
}




int main()
{
	int sayilar[dizi_boyutu];
	
	srand(time(NULL));
	
	
	for(int i=0;i<dizi_boyutu;i++)
	{
		int yeniSayilar;
		do{
			yeniSayilar=1+rand()%10;
		}
		while(depolama(sayilar,dizi_boyutu,yeniSayilar));
		sayilar[i]=yeniSayilar;
	}
	for(int i=0;i<dizi_boyutu;i++)
	{
		printf("%d\n",sayilar[i]);
	}
	return 0;
	
}




