#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=5;i++) /*�ȴ�ӡ�ϱߵ�����*/
	{
		for(j=1;j<=5-i;j++)  /*����Ҫ��ӡ�Ŀո�����*/
			printf(" ");
		for(k=1;k<=2*i-1;k++)  /*����Ҫ��ӡ���Ǻ���*/
			printf("*");
		printf("\n");
	}
}