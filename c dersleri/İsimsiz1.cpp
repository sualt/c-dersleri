#include<stdio.h>


int main()
{
	int integerdeg;
	double doubledeg;
	float floatdeg;
	char chardeg;
	
	printf("İnt değişkeninin bellekte kapladığı yer=%ld\n",sizeof(integerdeg));
	printf("Double değişkeninin bellekte kapladığı yer=%ld\n",sizeof(doubledeg));
	printf("Float değişkeninin bellekte kapladığı yer=%ld\n",sizeof(floatdeg));
	printf("Char değişkeninin bellekte kapladığı yer=%ld\n",sizeof(chardeg));
}
