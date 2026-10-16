// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     char *s="Hello World";
//     s[0]='B';
//     printf("Here!s[0]=%c\n",s[0]);
//     return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     char word[8];
//     char word2[8];
//     scanf("%s",word);
//     scanf("%s",word2);
//     printf("%s##%s##\n",word,word2);
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>
// int isPrime(int x);
// int main(int argc, char const *argv[])
// {
//     int sum=0,m,n,cnt=0;
//     scanf("%d,%d",&m,&n);
//     for (int i = m; i <= n; i++)
//     {                                   
//         if (isPrime(i))
//         {
//             cnt++;
//             sum+=i;
//         }
        
//     }
//     printf("count=%d,sum=%d",cnt,sum);
//     return 0;
// }
// int isPrime(int x)
// {
//     int flag=1;
//     if (x<2)
//     {
//         flag=0;
//     } else
//     {
//         for (int i = 2; i <= sqrt(x)&&flag; i++)
//         {
//             if (x%i==0)
//             {
//                 flag=0;
//                 break;
//             }
            
//         }
        
//     }
//     return flag;
// }
// #include <stdio.h>
// void add(double r1,double i1,double r2,double i2);
// void mul(double r1,double i1,double r2,double i2);
// double r,i;
// int main(int argc, char const *argv[])
// {
//     double a1,b1,a2,b2;
//     scanf("%lf,%lf",&a1,&b1);
//     scanf("%lf,%lf",&a2,&b2);
//     add(a1,b1,a2,b2);
//     printf("sum=%f+%fi\n",r,i);
//     mul(a1,b1,a2,b2);
//     printf("com=%f+%fi\n",r,i);
//     return 0;
// }
// void add(double r1,double i1,double r2,double i2)
// {
//     r=r1+r2;
//     i=i1+i2;
// }
// void mul(double r1,double i1,double r2,double i2)
// {
//     r=r1*r2-i1*i2;
//     i=r1*i2+r2*i1;
// }
// #include <stdio.h>
// double cash;
// void income(double n)
// {
//     cash+=n;
// }
// void expense(double n)
// {
//     cash-=n;
// }
// int main(int argc, char const *argv[])
// {
//     int type;
//     cash=0;
//     printf("0--end,1--income,2--expense:");
//     scanf("%d",&type);
//     while (type!=0)
//     {
//         double value;
//         scanf("%lf",&value);
        
//         if (type==1)
//         {
//             income(value);
//         } else
//         {
//             expense(value);
//         }
//         printf("%.2f\n",cash);
        
//     }
    
//     return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int a,n,i,m=0;
//     double sum=0;
//     scanf("%d,%d",&a,&n);
//     for ( i = 1; i <= n; i++)
//     {
//         m=m*10+a;
//         sum+=m;
//     }
//     prntf("%.4f\n",sum);
//     return 0;
// }
// #include <stdio.h>
// int isPrime(int x);
// int main(int argc, char const *argv[])
// {
//     int m,n,cnt=0,sum=0;
//     scanf("%d,%d",&m,&n);
//     for (int i = m; i <= n; i++)
//     {
//         if (isPrime(i))
//         {
//             cnt++;
//             sum += i;
//         }
        
//     }
//     printf("count=%d, sum=%d\n",cnt,sum);
//     return 0;
// }
// int isPrime(int x)
// {
//     int flag=1;
//     if (x<2)
//     {
//         flag=0;
//     } else
//     {
//         for (int i = 2; i <= sqrt(x)&&flag; i++)
//         {
//             if (x%i==0)
//             {
//                 flag=0;
//                 break;
//             }
            
//         }
        
//     }
//     return flag;
// }
#include <stdio.h>
int countdigit(int n,int digit)
{
    int cnt=0,t;
    while (n>0)
    {
        t=n;
        t%=10;
        if (t==digit)
        {
            cnt++;
        }
        n/=10;
    }
    return cnt;
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int cnt=countdigit(n,2);
    printf("%d",cnt);
    return 0;
}
