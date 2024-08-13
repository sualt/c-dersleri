#include<stdio.h>
int main()
{
	int matris[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	matris[0][0]=1;
	matris[0][1]=2;
	matris[0][2]=3;
	matris[0][3]=4;
	matris[1][0]=5;
	matris[1][1]=6;
	matris[1][2]=7;
	matris[1][3]=8;
	matris[2][0]=9;
	matris[2][1]=10;
	matris[2][2]=11;
	matris[2][3]=12;
	matris[3][0]=13;
	matris[3][1]=14;
	matris[3][2]=15;
	matris[3][3]=16;
	
	for(int i=0;i<=3;i++)
	{
		for(int j=0;j<=3;j++)
		{
			printf("%d\n",matris[i][j]);
		}
		}	
	
	
	
	
}
