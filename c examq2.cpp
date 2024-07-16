#include<stdio.h>
 void name(){
   printf("\nProgram is find the average of a given 2D array.\n\n");

    int row,col;

    printf("Enter the array's row size:-  ");
    scanf("%d",&row);
    printf("Enter the array's column size:- ");
    scanf("%d",&col);

    int a[row][col];
    printf("\n\nEnter array's elements:\n");
      int sum=0;

    for(int i=0;i<row;i++){
        for(int j=0; j<col;j++){
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
               sum +=a[i][j];
        }
    }
  
    double average = (double)sum / (row * col);
    printf("\nAverage of an Array:- %.2f\n\n",average);
 }
int main()
{
 

     name();

    return 0;
}