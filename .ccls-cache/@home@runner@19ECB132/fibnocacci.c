#include <stdio.h>

int main(void) {
  int a,i,n1=0,n2=1,n3;
  printf("enter a number");
  scanf("%d",&a);
  printf("%d\n",n1);
  printf("%d\n",n2);
  for (i=2;i<a;i++)
    {
      n3=n1+n2;
      printf("%d\n",n3);
      n1=n2;
      n2=n3;



    }


  return 0;
}