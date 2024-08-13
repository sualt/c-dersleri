#include<stdio.h>
int main()
{
	int i,j=1;
	float faktoriyel=1;
	printf("Lutfen faktoriyelini hesaplamak istediginiz sayiyi giriniz:");
	scanf("%d",&i);
	while(j<=i)
	{
		faktoriyel=faktoriyel*j;
		j++;
	}
	printf("Sayinizi faktoriyeli=%f",faktoriyel);
	
	
	
	
}
