#include <stdio.h>

int main() {
    float marks[5]; 
    float total = 0, average;
    int i;


    
    printf("Enter marks for 5 subjects (out of 100):\n");
    for(i = 0; i < 5; i++) {
        printf("mark [%d] : ", i );
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    average = total / 5;
        printf("Average Marks: %.2f\n", average);

   
    if (average >= 90) {
        
        printf("grade = 'A'");
    } else if (average >= 80) {
        printf("  grade = 'B'");
       
    } else if (average >= 70) {
      printf("  grade = 'C'");
    } else if (average >= 60) {
        printf("grade = 'D'");
        
    } else {
        printf(" grade = 'F'");
       
    }
return 0;
}    