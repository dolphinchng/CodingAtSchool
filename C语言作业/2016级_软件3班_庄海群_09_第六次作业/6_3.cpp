#include<stdio.h>
float area(float a,float b)
{
	float s;
	s=a*b;
	return(s);
}
float zc(float a,float b)
{
	float p;
	p=2*(a+b);
	return(p);
}
int main()
{
	float a,b,s,p;
	printf("�����볤���εı߳�a,b:");
	scanf("%f%f",&a,&b);
	s=area(a,b);
	p=zc(a,b);
	printf("�����ε��ܳ�Ϊp=%f,�����ε����Ϊs=%f",p,s);
}
