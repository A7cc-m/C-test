//#include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	int i;
//     int sum = 0;

// 	for ( i = 1; i <= 100; i++)
// 	{
// 		if (i%6 == 0)
// 		{
// 			sum += i;
// 		}
		
// 	}
// 	printf("%d\n",sum);
// 	return 0;
// }
//#include <stdio.h>

//int main(int argc, char const *argv[])
//{
	/* code */
//    int x;
//    scanf("%d",&x);

//	int f = 0;
//	if (x < 0)
//	{
//		f = -1;
//	} else if (x == 0)
//	{
//		f = 0;
//	} else {
//		f = 2*x;
//	}

//	printf("%d\n",f );
//	return 0;
//}
//输入一个整数，输出其正序分解形式：相邻数字间有一个空格
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	int x;
// 	scanf("%d",&x);

// 	int mask = 1;
// 	int t = x;
// 	while (t > 9)
// 	{
// 		t /= 10;
// 		mask %= 10;
// 	}
// 	do
// 	{
// 		int d = x / mask;
// 		printf("%d ",d);
// 		if (mask > 9)
// 		{
// 			printf(" ");
// 		}
// 		x %= mask;
// 		mask /= 10;
// 	} while (mask > 0);
	
// 	printf("\n");
// 	return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	int n;
// 	scanf("%d",&n);
// 	double a,b;
// 	double t;
// 	double sum = 0.0;
// 	int i;
// 	for ( i = 1; i <= n; i++)
// 	{
// 		sum += 1.0*a/b;
// 		t = a;
// 		a = a + b;
// 		b = t;
// 	}
// 	printf("%.2f\n",sum);//精确到小数点后两位
// 	return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	int x,y,z,t;
// 	scanf("%d%d%d",&x,&y,&z);
// 	if (x>y)
// 	{
// 		t=x;x=y;y=t;
// 	}
// 	if (x>z)
// 	{
// 		t=x;x=z;z=t;
// 	}
// 	if (y>z)
// 	{
// 		t=y;y=z;z=t;
// 	}
// 	printf("small to big:%d %d %d\n",x,y,z);
// 	return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	int i,j,n;
	
// 	scanf("%d",&n);
// 	for ( i = 1; i <= n; i++)
// 	{    
// 		for ( j = 0; j < n - i; j++)
// 		{
// 			printf(" ");
// 		}
// 		for ( j = 0; j < 2*i-1; j++)
// 		{
// 			printf("*");
			
// 		}
// 	    printf("\n");
// 	}
	
// 	return 0;
// }
#include <stdio.h>
int judgeyear(int year)
{
	return((year%4==0 && year%100!=0)||year%400==0);
}
int main(int argc, char const *argv[])
{
	int year,month,day;
	int flag=0;
	scanf("%d-%d-%d",&year,&month,&day);
	if (day>=1&&day<=31&&(month==1||month==3||month==5||month==7||month==8||month==10||month==12))
		flag=1;
	else if(day>=1&&day<=30&&(month==4||month==6||month==9||month==11))
		flag=1;
	else if(day>=1&&day<=28+judgeyear(year)&&month==2)
		flag=1;
	if(flag)printf("yes");
	else printf("no");
	return 0;
}
// #include <stdio.h>
// int judgeyear(int year)
// {
// 	return((year%4==0 && year%100!=0)||year%400==0);
// }
// int main(int argc, char const *argv[])
// {
// 	int min,max;
// 	scanf("[%d,%d]",&min,&max);
// 	int year,cnt=0;
// 	for ( year = min; year <= max;year++)
// 	{
// 		if (judgeyear(year))
// 		{
// 			cnt++;
// 		}
		
// 	}
// 	printf("years=%d\n",cnt);
// 	return 0;
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
// int sum(int start,int count);
// int main(int argc, char const *argv[])
// {
//     int n,total=0;
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         total+=sum(i,i+1);
//     }
//     printf("sum=%d",total);
//     return 0;
// }
// int sum(int start,int count)
// {
//     int sum=0;
//     for (int i = start; i <= start+count-1; i++)
//     {
//         sum+=i;
//     }
//     return sum;
// }
// #include <stdio.h>
// #include <math.h>
// int isPrime(int x);
// int main(int argc, char const *argv[])
// {
//     int a,n;
//     a=2,n=3;
//     int m=a;
//     for (int i = 1; i <= n; )
//     {
        
//         if (isPrime(m)&&isPrime(m+2))
//         {
//             printf("%d:%d\n",m,m+2);
//             i++;
//         }
//         m++;
        
//     }
    
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
#include <math.h>
int isPrime(int x);
int main(int argc, char const *argv[])
{
    int a,n,cnt=0;
    a=2,n=3;
    for (int i = a; cnt < n; i++)
    {
        if (isPrime(i)&&isPrime(i+2))
        {
            printf("%d:%d\n",i,i+2);
            cnt++;
        }
        
    }
    
    return 0;
}
int isPrime(int x)
{
    int flag=1;
    if (x<2)
    {
        flag=0;
    } else
    {
        for (int i = 2; i <= sqrt(x)&&flag; i++)
        {
            if (x%i==0)
            {
                flag=0;
                break;
            }
            
        }
        
    }
    return flag;
}
#include <stdio.h>
#include <math.h>
int isPrime(int x);
int main(int argc, char const *argv[])
{
    int a,n,cnt=0;
    a=5,n=2;
    int flag=1;
    for (int i = a; cnt < n; i++)
    {
        if (i%2==0)
        {
            for (int m = 2; m <= i/2; m++)
            {
                if (isPrime(m)&&isPrime(i-m))
                {
                    printf("%d=%d+%d\n",i,m,i-m);
                    flag=0;
                    cnt++;
                }
            }
        }
        
    }
    return 0;
}
int isPrime(int x)
{
    int flag=1;
    if (x<2)
    {
        flag=0;
    } else
    {
        for (int i = 2; i <= sqrt(x)&&flag; i++)
        {
            if (x%i==0)
            {
                flag=0;
                break;
            }
            
        }
        
    }
    return flag;
}
