#include<conio.h>
#include<stdio.h>
main(){
int a[10],i,sum=0;
float avg;
printf("Enter ten numbers:");
for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
for(i=0;i<=9;i++)
    sum=sum+a[i];
//printf("%d",sum);

avg = sum/10.0;
printf("Average is %d",avg);

}
