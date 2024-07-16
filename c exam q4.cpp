#include<stdio.h>

void  even(int *array,int *size){

printf("even number is :-");
for(int i=0;i<*size;i++){
      
if(array[i] %2==0){
printf("%d ",array[i]);
}
}

}

int main(){
int size;
printf("\nEnter array's size:- ");
scanf("%d",&size);
int array[size];

printf("Enter array's element:\n");

for(int i=0;i<size;i++){
printf(" a [%d] = ",i);
scanf("%d",&array[i]);
}

even(array,&size );
return 0;
 }