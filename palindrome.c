#include <stdio.h>

int main(void) {
  int a,n,remainder,rev=0;
  printf("enter a number");
  scanf("%d",&a);
  n=a;
  while(n!=0)
    {
      remainder=n%10;
      rev=rev*10+remainder;
      n=n/10;
    }
      if (rev==a)
        printf("number is palindrome");
      else 
        printf("number is not a palindrome");
      return 0;




  return 0;
}