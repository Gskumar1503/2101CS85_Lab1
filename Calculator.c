#include<stdio.h>
int main()
{
    double x,y;//Take a two numbers from user
    printf("Enter any two numbers:");
    scanf("%lf %lf",&x,&y);
    //Take the operation between  above two numbers like +,-,*,/
    printf("Take only 1 for +,2 for -,3 for *,4 for / \n");
    int z;
    printf("Enter the number for operation that you want the result=");
    scanf("%d",&z);
    switch(z)
    {
        case 1:
        printf("Sum of above two input numbers=%lf",x+y);
        break;
        case 2:
        printf("Difference of above input numbers=%lf",x-y);
        break;
        case 3:
        printf("Product of above two input numbers=%lf",x*y);
        break;
        case 4:
        printf("Quotient of above two input numbers=%lf",x/y);
        break;
        default:
        printf("Wrong input you have entered please check it");
    }
    return 0;
}