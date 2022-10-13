#include <stdio.h>

int main()
{
 int n,r,sum=0,temp;
 printf("Enter numeber:");
  scanf("%d",&n);
 temp=n;
 while(n>0)
 {
 r=n%10;
 sum=(sum*10)+r;
 n=n/10;
}
 if(temp==sum)
 {
     printf("Number is Palindrome");
 }
 else
 {
      printf("Not a Palindrome");
 }
 return 0;
}
