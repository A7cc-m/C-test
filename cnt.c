//#include <stdio.h>
// int main() 
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

// int main(int argc, char const *argv[])
// {
//     int n,i,score,A=0,B=0,C=0,D=0,E=0;
//     scanf("%d",&n);
//     for ( i = 1; i <= n; i++)
//     {
//         scanf("%d ",&score);
//         score/=10;
//         switch (score)
//         {
//         case 10:case 9:A++;break;
//         case 8:B++;break;   
//         case 7:C++;break;
//         case 6:D++;break;    
//         case 5:case 4:case 3:case 2:case 1:case 0:E++;break;
//         default:break;
//         }
//     }
//     printf("A:%d\n",A);
//     printf("B:%d\n",B);
//     printf("C:%d\n",C);
//     printf("D:%d\n",D);
//     printf("E:%d\n",E);
//     return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int age;
//     scanf("%d",&age);
//     if (age<=0)
//     {
//         printf("age error");
//     } else
//     {
//         age/=10;
//         switch (age)
//         {
//         case 0:printf("童年");break;
//         case 1:printf("少年");break;
//         case 2:printf("青年");break;
//         case 3:printf("中年");break;
//         case 4:printf("老年");break;
//         case 5:printf("暮年");break;
//         default:break;
//         }
//     }
//     return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int n,i,a=1,b=2,t;
//     double s=0;
//     scanf("%d",&n);
//     for ( i = 1; i <= n; i++)
//     {
//         s+=b*1.0/a;
//         t=b;
//         b=b+a;
//         a=t;
//     }
//     printf("s=%.2f",s);
//     return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     double h;
//     int n,i;
//     scanf("%lf,%d",&h,&n);
//     double s=h;//第一次下落
//     double now=h;
//     for ( i = 1; i <= n; i++)
//     {
//         now=now/2.0;//反弹上去
//         s+=now;//上去加下去
//     }
//     s+=now;
//     printf("%.1f,%.1f\n",s,now);
    
//     return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int n,i=2,first=1;
//     scanf("%d",&n);
//     printf("%d=",n);
//     while (n>1)
//     {
//         if (n%i==0) 
//         {
//             if (first==1)
//             {
//                 printf("%d",i);
//                 first=0;
//             } else
//             {
//                 printf("*%d",i);
//             }
//             n/=i;
//         } else
//         {
//             i++;
//         }
//     }
//         return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int n;
//     scanf("%d",&n);
//     int peach=1;
//     for (int i = 1; i <= n-1; i++)
//     {
//         peach=(peach+1)*2;
//     }
//     printf("Totals=%d",peach);
//     return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int n;
//     scanf("%d",&n);
//     if (n<=0||n>51||n%2==0)
//     {
//         printf("Input error");
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         int m=i>(n+1)/2?n-i+1:i;
//         for (int s = 1; s <= 30-m; s++)
//         {
//             printf(" ");
//         }
//         char ch=64+m;
//         for (int k = 1; k <= 2*m-1; k++)
//         {
//             printf("%c",ch);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int c,a,b;
//     scanf("%d",&c);
//     int flag=1;
//     for ( a = 1; a < c; a++)
//     {
//         for ( b = a; b < c; b++)
//         {
//             if (c*c==a*a+b*b)
//             {
//                 printf("%d:yes\n",c);
//                 flag=0;
//             } 
//         }
        
//     }
//     if (flag==1)
//     {
//         printf("%d:no\n",c);
//     }
    
//     return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int n,first=1;
//     scanf("%d",&n);
//     for (int cnt = 0; cnt < n; cnt++)
//     {
//         first*=10;
//     }
//     for (int i =first; i < first*10; i++)
//     {
//         int t=i,sum=0;
//         for ( ; t > 0; t /= 10)
//         {
//             int d=t%10;
//             int p=d;
//             for (int j = 1; j < n; j++)
//             {
//                 p*=d;
//                 sum+=p;
//             }
            
//         }
//         if (sum==i)
//         {
//             printf("%d\n",i);
//         }
        
//     }
    
//     return 0;
// }
#include <stdio.h>
#include <math.h>
int length(int x)
{
    int cnt=0;
    while (x>0)
    {
        x/=10;
        cnt++;
    }
    return cnt;
}
int Isomorph(int n)
{
    int len=length(n);
    int mod=pow(10,len);
    if ((n*n)%mod==n)
    {
        return 1;
    } else
    {
        return 0;
    }
}
int main(int argc, char const *argv[])
{
    int a,n;
    scanf("%d,%d",&a,&n);
    int cnt=0;
    for (int i = a; cnt < n; i++)
    {
        if (Isomorph(i)==1)
        {
            printf("%d\n",i);
            cnt++;
        }
        
    }
    return 0;
}
