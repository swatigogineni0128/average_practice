#include<stdio.h>
int main()
{
	int n[10];
	int i,sum=0;

for(i=0;i<10;i++)
{
	n[i]=i+10;
	printf("the values are %d\n", n[i]);	
}
for(i=0;i<10;i++)
{
	sum=sum+n[i];
}
//sum = sum/10;
printf("the average is %f", (float)sum/10);
}

