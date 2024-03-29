5# include<stdio.h>
# define SIZE 10
int main(void) {
  int a[SIZE] = {1,2,3,5,6,7,8,9};
  for (int i=0; i<SIZE; i++) 
    printf("%d \t",a[i] );
  a[10] = 25;
  printf("\nafter inserting...\n");
  for (int i=0; i<SIZE+1; i++) 
    printf("%d \t",a[i] );
}

// Static allocation of array will lead to run time errors while inserting new elements.  Alternatively we must use dynamic memory allocation - malloc()