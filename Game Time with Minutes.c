#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,sum,sum1,sum2,hour1,hour2,miniute1,miniute2,h,m;
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    hour1=h1*3600;
    miniute1=m1*60;
    sum1=hour1+miniute1;
    hour2=h2*3600;
    miniute2=m2*60;
    sum2=hour2+miniute2;

    if(sum1>sum2)
        {
        sum=sum1-sum2;
        }
    else
        sum=sum2-sum1;
        if(h1==h2 && m1==m2)
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        else{
        h=sum/3600;
        sum=sum%3600;
        m=sum/60;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
        }

    return 0;
}
