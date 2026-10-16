// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int n;
//     scanf("%d",&n);
//     long long first=1;
//     for (int cnt = 1; cnt < n; cnt++)
//     {
//         first*=10;
//     }
//     for (int i = first; i < first*10; i++)//遍历100~1000,例如i=123
//     {
//         long long t=i,sum=0;//用t代替i进入后面运算
//         for ( ; t < 0; t /= 10)//结尾t/10得到的数12再次进入循环取2,以此类推
//         {
//             int d=t%10;//取个位3
//             long long p=d;//用p代替d算后面乘方n的和(需要循环)
//             for (int j = 1; j < n; j++)
//             {
//                 p*=d;//循环完得到3*3*3
//             }
//             sum+=p;
//         }
//         if (sum==i)
//         {
//             printf("%lld",i);
//         }
//     }
    
    
//     return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int n;
//     scanf("%d",&n);
//     int i,j;
//     for ( i = 1; i <= n; i++)
//     {
//         for ( j = 1; j <= i;j++)
//         {
//             printf("%d*%d=%d",j,i,j*i);
//             if (j*i < 10)
//             {
//                 printf("   ");
//             } else
//             {
//                 printf("  ");
//             }
//         }
//     printf("\n");    
//     }
    
//     return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int n;
//     scanf("%d",&n);
//     int first = 1,cnt;
//     for ( cnt = 1;cnt < n; cnt++)
//     {
//         first *= 10;
//     }
//     int i ;
//     for ( i = first; i < first*10; i++)
//     {
//         int t = i,sum = 0;
//         do 
//         { 
//             int d = t % 10;
//             t /= 10;
//             int p = d;
//             int j = 1;
//             while (j < n)
//             {
//                 p *= d;
//                 j++;
//             }
//             sum += p;            
//         } while(t > 0);
//         if (sum == i)
//         {
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int n,i;
//     scanf("%d %d",&n,&i);

//     int guess,cnt = 0;
//     while (1)//在C语言里，0为假，其他数是真，while(1)表示条件是真，则无限循环
//     {
//         scanf("%d",&guess);
//         cnt++;
//         if (guess < 0)
//         {
//             printf("Game Over\n");
//             break;
//         } if (guess < n)
//         {
//             printf("Too Small\n");
//         } else if (guess > n)
//         {
//             printf("Too Big\n");
//         } else
//         {
//             if (cnt = 1)
//             {
//                 printf("Bingo!\n");
//             } else if (cnt <= 3)
//             {
//                 printf("Lucky You!\n");
//             } else
//             {
//                 printf("Good Guess!\n");
//             }
//             break;
//         }
//         if (cnt >= n)
//         {
//             printf("Game Over\n");
//             break;
//         }
//     }
    
//     return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     double x,a,b,c;
//     int t;
//     scanf("%lf,%d",&x,&t);
//     if (x<=3)
//     {
//         a=10;
//     } else if (x<=10)
//     {
//         a=10+(x-3)*2;
//     } else
//     {
//         a=10+(10-3)*2+(x-10)*3;
//     }
//     b=t/5*2; 
//     c=a+b;
//     printf("money=%.0f",c);
    
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>
// int main(int argc, char const *argv[])
// {
//     int n,i;
//     scanf("%d",&n);
//     double m,sum=0;
//     for ( i = 1; i <= n; i++)
//     {
//         m=sqrt(i);
//         sum += m;
//     }
//     printf("%.2f",sum);
//     return 0;
// }
// #include <stdio.h>
// double fact(int x);
// double fact(int x)
// {
//     int i;
//     double multiply=1.0;
//     for ( i = 1; i <= x; i++)
//     {
//         multiply *= i;
//     }
//     return multiply;
// }
// int main(int argc, char const *argv[])
// {
//     int n,e=0,i;
//     scanf("%d",&n);
    
//     for ( i = 1; i <= n; i++)
//     {
//         e += fact(i);
//     }
//     printf("%d\n",e);
//     return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int first=1,k,n,x;
//     scanf("%d",&n);
//     for ( k = 1; k <= n; k++)
//     {
//         scanf("%d",&x);
//         if (x%2==0)
//         {
//             if (first==1)
//             {
//                 printf("%d",x);
//                 first=0;
//             } else
//             {
//                 printf(" %d",x);
//             }
//         }
//     }
    
//     return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int n;
//     int cnt=0;
//     scanf("%d",&n);
//     for (int a = 1; a <= n-7; a++)
//     {
//         for (int b = 1; b <= (n-6)/2; b++)
//         {
//             for (int c = 1; c <= (n-3)/5; c++)
//             {
//                 if (a+b*2+c*5==n)
//                 {
//                     cnt++;
//                 }
                
//             }
            
//         }
        
//     }
//     printf("count=%d\n",cnt);
//     return 0;
// }
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,n,i,m=0;
    double sum=0;
    scanf("%d,%d",&a,&n);
    for ( i = 1; i <= n; i++)
    {
        m=m*10+a;
        sum+=m;
    }
    prntf("%.4f\n",sum);
    return 0;
}