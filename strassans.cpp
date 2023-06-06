#include <iostream>
using namespace std;


int main()
{
    int a[2][2],b[2][2],c[2][2],i,j;
     int s1,s2,s3,s4,s5,s6,s7;
    int cnt = 0;
    
    printf("Enter 1st (2*2) Matrix : \n");
    for(i=0 ;i<=1 ; i++)
    {
        for(j=0 ; j<=1 ; j++)
        {   cnt++;
            int temp ; cin>>temp;
            a[i][j] = temp;
        }
    }
     printf("Enter 2nd (2*2) Matrix : \n");
    for(i=0 ;i<=1 ; i++)
    {
        for(j=0 ; j<=1 ; j++)
        {  cnt++;
        int temp;cin>>temp;
        b[i][j] = temp;
        }
    }
      for(i=0 ;i<=1 ; i++)
    {
        printf("\n");
        for(j=0 ; j<=1 ; j++)
        {
            printf("%d ",a[i][j]);
        }
    }
    printf("\n");
      for(i=0 ;i<=1 ; i++)
    {
        printf("\n");
        for(j=0 ; j<=1 ; j++)
        {
            printf("%d ",b[i][j]);
        }
    }
    printf("\n\n");
    
    
    
   
    s1=(a[0][0]+a[1][1])*(b[0][0]+b[1][1]);
    s2=(a[1][0]+a[1][1])*b[0][0];
    s3=a[0][0]*(b[0][1]-b[1][1]);
    s4=a[1][1]*(b[1][0]-b[0][0]);
    s5=(a[0][0]+a[0][2])*b[1][1];
    s6=(a[1][0]-a[0][0])*(b[0][0]+b[0][1]);
    s7=(a[0][1]-a[1][1])*(b[1][0]+b[1][1]);
    
    c[0][0] =s1+s4-s5+s7;
    c[0][1] = s3+s5;
    c[1][0] = s2+s4;
    c[1][1] = s1+s3-s2+s6;
    
    
    printf("After multiplication  : \n");
        for(i=0 ;i<=1 ; i++)
    {
        printf("\n");
        for(j=0 ; j<=1 ; j++)
        {
    printf("%d\t ",c[i][j]);
        }} 
   return 0;
}


