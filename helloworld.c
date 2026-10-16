//#include <stdio.h>

//int main(int argc, char const *argv[])
//{
//	int n;
//	int i;
//	double sum = 0.0;
//	int sign = 1;
//
//	scanf("%d",&n);
//  for ( i = 1; i <= n; i++)
//	{
//		sum += sign*1.0/i;
//		sign = -sign;
//	}
//	printf("f(%d)=%f\n",n,sum);
//	return 0;}
//#include <stdio.h>

//int main(int argc, char const *argv[])
//{
	
//	int a;
//	int b;

	
//    scanf("%d %d",&a,&b);
//    printf("%d + %d = %d\n", a, b, a+b);
	
//	return 0;
//}
//#include <stdio.h>

//int main(int argc, char const *argv[])
//{
	
	//int price ;

	
	//scanf("%d",&price);

	//int change = 100 - price;

	//printf("%d\n", change);

	//return 0;
//}
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	printf(" Hello World\n");
// 	printf("*****\n");
// 	printf("*\n");
// 	printf("*\n");
// 	printf("*****\n");
// 	return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	double x,y;
// 	scanf("%lf",&x);

// 	printf("x(x>=0):\n");
// 	if (x<=100)
// 	{
// 		y=0.51*x;
// 	} else
// 	{
// 		y=100*0.51+(x-100)*0.65;
// 	}
// 	printf("%.2f\n",y);
	
// 	return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	int n,i,j,cnt=0;
// 	scanf("%d",&n);
// 	for ( i = 1; i <= n; i++)
// 	{
// 		for ( j = 0; j <= n; j++)
// 		{
// 			if (i!=j)
// 			{
// 				printf("%d%d\n",i,j);
// 				cnt++;
// 			}
			
// 		}
		
// 	}
// 	printf("%d",cnt);
	
// 	return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	char ch;
// 	int digit=0,letter1=0,letter2=0,other=0;
// 	while ((ch=getchar())!='\n')
// 	{

// 		if (ch>='A'&&ch<='Z')
// 		{
// 			letter1++;
// 		} else if (ch>='0'&&ch<='9')
// 		{
// 			digit++;
// 		} else if (ch>='a'&&ch<='z')
// 		{
// 			letter2++;
// 		} else
// 		{
// 			other++;
// 		}
		
// 	}
// 	printf("%d,%d,%d,%d",letter1,letter2,digit,other);
// 	return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int n;
// 	long long first=1;
//     scanf("%d",&n);
//     for (int cnt = 1; cnt < n; cnt++)//求最小n位数first
//     {
//         first*=10;
//     }
//     for (long long i =first; i < first*10; i++)//举例n=3,i为100-1000
//     {
//         long long t=i;//例如t=123
// 		long long sum=0;
//         for ( ; t > 0; t /= 10)//t/10=12>0再循环
//         {
//             int d=t%10;//取出个位3
//             long long p=d;//p=3
//             for (int j = 1; j < n; j++)//计算个位
//             {
//                 p*=d;//3*3*3,前面p=3,再乘2次就行故j<n
//             }
//             sum+=p;
//         }
//         if (sum==i)
//         {
//             printf("%lld\n",i);
//         }
        
//     }
//     //用long long是因为n=7时用int会溢出超过int范围
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>
// int sum(int a,int n)
// {
//     int s=0;
//     while (a>0)
//     {
//         int g=a%10;
//         s+=pow(g,n);
//         a/=10;
//     }
//     return s;
// }
// int length(int x)
// {
//     int cnt=0;
//     while (x>0)
//     {
//         x/=10;
//         cnt++;
//     }
//     return cnt;
// }
// int Daffodil(int n)
// {
//     int len=length(n);
//     if (sum(n,len)==n)
//     {
//         return 1;
//     } else
//     {
//         return 0;
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int start,end;
//     scanf("%d,%d",&start,&end);
//     for (int i = start; i <= end; i++)
//     {
//         if (Daffodil(i))
//         {
//             printf("%d\n",i);
//         }
        
//     }
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>
// int judgeyear(int year)
// {
// 	return((year%4==0 && year%100!=0)||year%400==0);
// }
// int IsDate(int year,int month,int day)
// {
//     int flag;
//     if (day>=1&&day<=31&&(month==1||month==3||month==5||month==7||month==8||month==10||month==12))
// 		flag=1;
// 	else if(day>=1&&day<=30&&(month==4||month==6||month==9||month==11))
// 		flag=1;
// 	else if(day>=1&&day<=28+judgeyear(year)&&month==2)
// 		flag=1;
//     else
//         flag=0;
//     return flag;
// }
// int Yeardays(int year)
// {
//     if (judgeyear(year))
//     {
//         return 366;
//     } else
//     {
//         return 365;
//     }
// }
// int Totaldays(int year,int month,int day)
// {
//     int sum=day;
//     int monDays[]={0,31,28,31,30,31,30,31,31,30,31,30};
//     for (int i = 1; i < month; i++)
//     {
//         sum+=monDays[i];
//     }
//     if (month>2&&judgeyear(year))
//     {
//         sum+=1;
//     }
//     return sum;
// }
// long long Alldays(int year,int month,int day)
// {
//     long long total=0;
//     for (int i = 1; i < year; i++)
//     {
//         total+=Yeardays(i);
//     }
//     total+=Totaldays(year,month,day);
//     return total;
// }
// int main(int argc, char const *argv[])
// {
//     int year1,month1,day1, year2,month2,day2;
//     scanf("%d-%d-%d",&year1,&month1,&day1);
//     scanf("%d-%d-%d",&year2,&month2,&day2);
//     if (IsDate(year1,month1,day1)&&IsDate(year2,month2,day2))
//     {    
//         long long d1=Alldays(year1,month1,day1);
//         long long d2=Alldays(year2,month2,day2);
//         long long d=fabs(d1-d2);
//         printf("days=%d\n",d);
//     }
//     return 0;
// }
// #include <stdio.h>
// int sign(double x)
// {
//     int f;
//     if (x>0)
//     {
//         f=1;
//     } else if (x<0)
//     {
//         f=-1;
//     } else
//     {
//         f=0;
//     }
//     return f;
// }
// int main(int argc, char const *argv[])
// {
//     double x;
//     int y;
//     scanf("%lf",&x);
//     y=sign(x);
//     printf("f(x)=%d",y);
//     return 0;
// }
// #include <stdio.h>
// int even(int n)
// {
//     if (n%2==0)
//     {
//         return 1;
//     } else
//     {
//         return 0;
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int n,sum=0;
//     scanf("%d",&n);
//     while (n>0)
//     {
//         if (even(n)==0)
//         {
//             sum+=n;
//         }
//         scanf("%d",&n);
//     }
//     printf("%d\n",sum);
//     return 0;
// }
