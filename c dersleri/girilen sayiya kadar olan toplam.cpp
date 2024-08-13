#include<stdio.h>
int main()
{
	int i=1,toplam=0,k;
	printf("Lutfen sayinizi giriniz:");
	scanf("%d",&k);
	while(i<=k)
	{
		printf("Degerler=%d\n",i);
		toplam=toplam+i;
		i++;
	}
	printf("Toplam=%d",toplam);
}
