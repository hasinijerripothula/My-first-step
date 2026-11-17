#include<stdio.h>
int main()
{
int n,i,r=0;
printf("Enter a number greater than 1:\n");
scanf("%d",&n);
for (i = 2; i <= n / 2; i++)
        {
          if (n % i == 0)
             { r=1;
              break;
              }
              }
  if(r==0)
    printf("%d is a prime number",n);
   else 
    printf("Not a prime number");
return 0;
}    
