#include<stdio.h>
void fx701(int k,int n,float a);
int main()
{
	int k=1,n=5;
	float a=3.2,b=8.5;
	printf("�� �� ǰ k=%d n=%d a=%.2f b=%.2f\n",k,n,a,b);
	fx701(k,n,a);
	printf("�� �� �� k=%d n=%d a=%.2f b=%.2f\n",k,n,a,b);
	return 0;
}
void fx701(int k,int n,float a)
{
	int q=100;
	float b,x=6.2;
	k+=q;n*=q;a-=x;b=3.5*a;
	printf("�� �� �� k=%d n=%d a=%.2f b=%.2f\n",k,n,a,b);
}

