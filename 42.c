#include<stdio.h>
#include<stdlib.h>
int X, sum;
void main(int);
void main(int x)
{
printf("Keshav Garg\n");
sum=sum+x;
printf ("\nx=%d sum=%d",x,sum);
if(x==6) 
exit(0);
main(++x);
}
