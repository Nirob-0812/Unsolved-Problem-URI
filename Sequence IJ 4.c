#include<stdio.h>
int main()
{
    int j;
    double j1=1,j2=2,j3=3,i;
    for(i=0;i<=2;i=i+0.2)
    {
        for(j=1;j<=3;j++)
        {
            if(i==0 )
            {
              if(j==1)
              {
                printf("I=%0.0lf J=%0.0lf\n",i,j1);
              }
              if(j==2)
              {
                printf("I=%0.0lf J=%0.0lf\n",i,j2);
              }
              if(j==3)
              {
                printf("I=%0.0lf J=%0.0lf\n",i,j3);
              }
            }
            if(i>0 && i<=0.99)
            {
                if(j==1)
              {
                printf("I=%0.1lf J=%0.1lf\n",i,j1);
              }
              if(j==2)
              {
                printf("I=%0.1lf J=%0.1lf\n",i,j2);
              }
              if(j==3)
              {
                printf("I=%0.01lf J=%0.1lf\n",i,j3);
              }
            }
            if(i==1)
            {

              if(j==1)
              {
                printf("I=%0.0lf J=%0.0lf\n",i,j1);
              }
              if(j==2)
              {
                printf("I=%0.0lf J=%0.0lf\n",i,j2);
              }
              if(j==3)
              {
                printf("I=%0.0lf J=%0.0lf\n",i,j3);
              }
            }
            if(i>1 && i<=1.9)
            {
                if(j==1)
              {
                printf("I=%0.1lf J=%0.1lf\n",i,j1);
              }
              if(j==2)
              {
                printf("I=%0.1lf J=%0.1lf\n",i,j2);
              }
              if(j==3)
              {
                printf("I=%0.01lf J=%0.1lf\n",i,j3);
              }
            }
            else if(i>1.9)
            {

              if(j==1)
              {
                printf("I=%0.0lf J=%0.0lf\n",i,j1);
              }
              if(j==2)
              {
                printf("I=%0.0lf J=%0.0lf\n",i,j2);
              }
              if(j==3)
              {
                printf("I=%0.0lf J=%0.0lf\n",i,j3);
              }
            }
        }
        j1=j1+0.2;
        j2=j2+0.2;
        j3=j3+0.2;
    }
    return 0;
}
