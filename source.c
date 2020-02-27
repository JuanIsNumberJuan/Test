
//Juan Delgado



#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x = 0, y;
	double z;
	for(y = 0; y < 11; y++)
	{
		x+=2;
	}
	z = (double)x/20;
	printf("%.3f", z);
	printf("\n%d\n", x);

}
