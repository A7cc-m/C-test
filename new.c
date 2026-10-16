// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int a,b,t;
//     scanf("%d %d",&a,&b,&t);

//     while (b != 0)
//     {
//         t = a % b;
//         a=b;
//         b=t;
//     }
//     printf("gcd=%d\n",a);
//     return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int a;
//     scanf("%d",&a);
//     int i,j,k;
//     int cnt = 0;
    
//     i = a;
//     while (i <= a+3)
//     {
//         j = a;
//         while (j <= a+3)
//         {
//             k = a;
//             while (k <= a+3)
//             {
//                 if (i != j)
//                 {
//                     if (j != k)
//                     {
//                         if (i != k)
//                         {
//                             cnt++;
//                             printf("%d%d%d",i,j,k);
//                             if (cnt == 6)
//                             {
//                                 printf("\n");
//                                 cnt = 0;
//                             } else {
//                                 printf(" ");
//                             }
                            
//                         }
//                     }
                    
//                 }
//                 k++;
//             }
//             j++;
//         }
//         i++;
//     }
    
//     return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int m,n;
//     scanf("%d/%d",&m,&n);

//     int a = m;
//     int b = n;
//     int t;
//     while (b > 0)
//     {
//         t = a % b;
//         a = b;
//         b = t;
//     }
//     printf("%d/%d",m/a,n/a);
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>
// int main(int argc, char const *argv[])
// {
//     double x0,y0,A,B,C;
//     scanf("%lf %lf",&x0,&y0);
//     scanf("%lf %lf %lf",&A,&B,&C);
//     double m,n,d;
//     m=fabs(A*x0+B*y0+C);
//     n=sqrt(A*A+B*B);
//     d=m/n;
//     printf("%lf",d);
//     return 0;
// 
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a1,a2,a3,a4,m;
//     double n;
//     scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
//     m=a1+a2+a3+a4;
//     n=m/4.0;
//     printf("%d %.1f",m,n);
//     return 0;
// }
// #include <stdio.h>
// #include<math.h>
// int main(int argc, char const *argv[])
// {
//     int m,n,i;
//     double j,sum=0;
//     scanf("%d %d",&m,&n);
//     for ( i = m; i <= n; i++)
//     {
//         j=pow(i,2)+pow(i,-1);
//         sum += j;
//     }
//     printf("%.6f\n",sum);
//     return 0;
// }
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int n,i,sign=1;
//     double m,sum=0;
//     scanf("%d",&n);
//     for ( i = 1; i <= n; i++)
//     {
//         m=i/(2.0*i-1);
//         sum += sign*1.0*m;
//         sign = -sign;
//     }
//     printf("%f\n",sum);
//     return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int n;
//     scanf("%d",&n);
//     if (n%5==0&&n%7==0)
//     {
//         printf("A");
//     } else if (n%5==0&&n%7!=0)
//     {
//         printf("B");
//     } else if (n%5!=0&&n%7==0)
//     {
//         printf("C");
//     } else
//     {
//         printf("D");
//     }
//     return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     double n,x;
//     scanf("%lf %lf",&n,&x);
//     if (x>=n*1.1&&x<n*1.5)
//     {
//         printf("罚款200元\n");
//     } else if (x>=n*1.5)
//     {
//         printf("吊销驾驶证\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// void swap(int *pa,int *pb);
// int main(int argc, char const *argv[])
// {
//     int a=5,b=6;
//     swap(&a,&b);
//     printf("%d %d",a,b);
//     return 0;
// }
// void swap(int *pa,int *pb)
// {
//     int t=*pa;
//     *pa=*pb;
//     *pb=t;
// }
#include <stdio.h>
void minmax(int *a,int len,int *min,int *max);
int main(int argc, char const *argv[])
{
    int a[]={2,5,67,46,21,15,1,48,36};
    int min,max;
    minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
    printf("%d %d",min,max);
    return 0;
}
void minmax(int *a,int len,int *min,int *max)
{
    int i;
    *min=*max=a[0];
    for ( i = 1; i < len; i++)
    {
        if (a[i]<*min)
        {
            *min=a[i];
        }
        if (a[i]>*max)
        {
            *max=a[i];
        }
        
    }
    
}



