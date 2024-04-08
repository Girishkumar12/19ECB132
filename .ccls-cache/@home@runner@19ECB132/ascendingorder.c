// ascending order #include<stdio.h>
int main(){
  //sorting of elements in ascending oreder
  int numbers[50],i,j,n,a;
  printf("enter the number of elements:   ");
  scanf("%d",&n);
  printf("enter the elements :  ");
  for(i=0;i<n;i++){
    scanf("%d\n",&numbers[i]);

  }
  //sorting of elements
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
    if(numbers[i]>numbers[j]){
      a=numbers[i];
      numbers[i]=numbers[j];
       numbers[j]=a;
      }

    }
  }
  printf("numbers in ascending order are :");

    printf("\n");
  for(i=0;i<n;i++){
    printf("%d\n",numbers[i]);
  }
}