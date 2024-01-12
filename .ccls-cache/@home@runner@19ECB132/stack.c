#include<stdio.h>
int top=0;
int array[];
void display();
void push(int x);
void pop(int y);
int main(){
  push(2);
  push(4);
  push(6); 
  push(8);
  pop(8);
  display();
  return 0;
}
void push(int x){
  array[top++]=x;
}
void pop(int y){
  array[top--]=y;
}
void display(){
  for(int i=0;i<top;i++){
    printf("%d\n",array[i]);
  }
}
// Output: 2