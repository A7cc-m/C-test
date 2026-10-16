// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int month;
//     scanf("%d",&month);
//     switch (month)
//     {
//     case 1: 
//         printf("Winter");
//         break;
//     case 2: case 3: case 4:
//         printf("Spring");
//         break;
//     case 5: case 6: case 7:
//         printf("Summer");
//         break;
//     case 8: case 9: case 10:
//         printf("Autumn");
//         break;
//     default:
//         printf("Error");
//         break;
//     }
//     return 0;
// }
// #include <stdio.h>
// int judgeyear(int year) {
//     int flag = 0;
//     if ((year%4==0&&year%100!=0)||year%400==0)
//     {
//         flag = 1;
//     }
//     return flag;
// }
// int main(int argc, char const *argv[])
// {
//     int year,month,day;
//     int n=0;
//     scanf("%d-%d-%d",&year,&month,&day);
//     switch (month)
//     {
//     case 12:n+=30;
//     case 11:n+=31;
//     case 10:n+=30;    
//     case 9:n+=31;
//     case 8:n+=31;
//     case 7:n+=30;
//     case 6:n+=31;
//     case 5:n+=30;
//     case 4:n+=31;
//     case 3:n+=28+judgeyear(year);
//     n+=31;
//     break;
//     case 2:n+=31;
//     case 1:break;
//     default:printf("Input error!");
//     }
//     printf("%d",n+day);
//     return 0;
// }
// #include <stdio.h>
// int judgeyear(int year) 
// {return ((year%4==0&&year%100!=0)||year%400==0);}
// int main(int argc, char const *argv[])
// {
//     int year,month,day;
//     int n=365;
//     scanf("%d-%d-%d",&year,&month,&day);
//     if (judgeyear(year))
//     {
//         n=366;
//     }
//     switch (month)
//     {
//     case 1:n-=31;
//     case 2:n-=28+judgeyear(year);
//     case 3:n-=31;   
//     case 4:n-=30;   
//     case 5:n-=31;   
//     case 6:n-=30;   
//     case 7:n-=31;   
//     case 8:n-=31;   
//     case 9:n-=30;   
//     case 10:n-=31;   
//     case 11:n-=30;   
//     case 12:n-=31;   
//         break;
//     default:printf("Input error");
//     }
//     printf("%d",n+day);
//     return 0;
// }

// #include <stdio.h>
// int judgeyear(int year) {
//     int flag = 0;
//     if ((year%4==0&&year%100!=0)||year%400==0)
//     {
//         flag = 1;
//     }
//     return flag;
// }
// int main(int argc, char const *argv[])
// {
//     int i,year,month,day;
//     int n=0;
//     scanf("%d-%d-%d",&year,&month,&day);
//     if(month<1||month>12)
//     {
//         printf("Input error!");
//     } else
//     {
//         for ( i = 1; i < month; i++)
//         {
//             switch(i)
//             {
//             case 1:
//             case 3:
//             case 5:
//             case 7:
//             case 8:
//             case 10:n+=31;break;
//             case 4:
//             case 6:
//             case 9:
//             case 11:n+=30;break;
//             case 2:n+=28+judgeyear(year);
//             }
//         }
//     }
//     printf("%d\n",n+day);
//     return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int n,sum=0;
//     while (1)
//     {
//         scanf("%d",&n);
//         if (n>0)
//         {
//             if (n%2!=0)
//             {
//                 sum+=n;
//             }
            
//         }else
//         {
//             break;
//         }
//     }
//     printf("%d\n",sum);
//     return 0;
// }
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int a,n,sum=0;
//     scanf("%d,%d",&a,&n);
//     int b=a;
//     for (int i = 1; i <= n; i++)
//     {
//         sum+=b;
//         b=b*10+a;
//     }
//     printf("s=%d",sum);
//     return 0;
// }


    


