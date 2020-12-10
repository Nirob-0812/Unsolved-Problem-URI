#include<stdio.h>
int main()
{
    double salary,sub1,sub2,sub3,sum1,sum2,sum3;
    scanf("%lf",&salary);
    if(salary>=0.00 && salary<=2000.00)
        printf("Isento\n");
    else if(salary>2000)
    {
        sub1=salary-2000.00;
        if(sub1<=999.99)
        {
            sum1=sub1*0.08;
            printf("%0.2lf\n",sum1);
        }
        else if(sub1>999.99 && sub1<=2499.99)
        {
            sub2=sub1-1000.00;
            sum2=sub2*0.18;
            printf("%0.2lf\n",80+sum2);
        }
        else if(sub1>2499.99)
        {
            sub3=sub1-2500.00;
            sum3=sub3*0.28;
            printf("%0.2lf\n",80+270+sum3);
        }

    }
    return 0;
}
