#include<stdio.h>
int main()
{
    double x,y;//Take a two numbers from user
    printf("Enter any two numbers:");
    scanf("%lf %lf",&x,&y);
    //Take the operation between  above two numbers like *
    printf("Take only 3 for * \n");
    int z;
    printf("Enter the number for operation that you want the result=");
    scanf("%d",&z);
    switch(z)
    {
        case 3:
        printf("Product   of above two input numbers=%lf",x*y);
    }
    return 0;
}
