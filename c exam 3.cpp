#include<stdio.h>
void name(){

    int size;
    printf("Enter your size:- ");
    scanf("%d",&size);
  

   int a[size];
    for(int i=0; i<size;i++){
    printf("a[%d]= ",i);
    scanf("%d",& a[i]); 
    }
printf("odd number is :- ");
for(int i=0;i<size;i++){
if(a[i] %2 !=0){
printf("%d ",a[i]);
        }
    }
}
int main(){
    name();
 }