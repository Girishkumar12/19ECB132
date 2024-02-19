#include<stdio.h>
int main(){
    int array[100],n,max=0,i,j,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
}
for(i=0;i<n;i++){
    for(j=i;j<n;j++){
        if(array[i]>max)
        max=array[i];

    }

}
for(i=0;i<n;i++){
if (array[i]==max)
count=count+1;

}
printf("%d",count);
}
