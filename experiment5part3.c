#include <stdio.h>
#include <math.h>
int main()
{
    int num,ans,sum=0,r,l=0,num1;
    printf("Enter the number :- ");
    scanf("%d",&num);   
    num1=num;
    while(num>0){
        l++;
        num /=10;

    }
    num = num1;
    while(num>0){
        r = num  % 10;
        sum = sum + pow(r,l);
        num/=10;
    }
    if (num1==sum)
    printf("\nThe given number is Armstrong");
    else 
    printf("\nThe given number is not Armstrong");
    return 0;
}