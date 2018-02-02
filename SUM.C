#include<stdio.h>
int main()
{
int i,sum=0,number;
printf("Enter the values:\n");
scanf("%d",&number);
for(i=0;i<=number;i++)
{
sum=sum+i;
}
printf("The sum is %d\n",sum);
return 0;
}
