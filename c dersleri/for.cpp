#include<stdio.h>
int main()
{
	int alfa,beta,toplam=0,tektoplam=0;
	printf("Lutfen beta giriniz:");
	scanf("%d",&beta);
	for(alfa=0;alfa<=beta;alfa++)
	{
		if(alfa%2==0)
		{
			printf("%d\n",alfa);
			toplam=toplam+alfa;
		}
		else
		{
			tektoplam+=alfa;
		}
	}
	printf("Toplam=%d\n",toplam);
	printf("Toplam=%d",tektoplam);

}
