#include <stdio.h>
#include <string.h>

int main() {
FILE *market;
int n;
market = fopen("hello.txt", "w");
if (market == NULL) {
printf("mode not same.\n");
}
char fruitName[50];
char colorName[50];

printf("Enter name of fruit : ");
gets(fruitName);
printf("Enter color of fruit : ");
gets(colorName);
fprintf(market, "Fruit: %s, Color: %s\n", fruitName, colorName);
    

fclose(market);
printf("your fruit successfully written mode to .hello\n");
return 0;
}