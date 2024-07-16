#include <stdio.h>
#include <string.h>

struct Laptop {
    char company[50];
    char name[50];
    char processor[50];
    float price;
};
int main() {
int n, i;

printf("Enter the number of laptops: ");
scanf("%d", &n);
struct Laptop laptops[n];

for(i = 0; i < n; i++) {
printf("Enter details for laptop %d:\n", i );

printf("Company: ");
scanf("%s", laptops[i].company);

printf("Name: ");
scanf("%s", laptops[i].name);

printf("Processor: ");
scanf("%s", laptops[i].processor);

printf("Price: ");
scanf("%f", &laptops[i].price);
}

printf("\nList of Laptops:\n");
for(i = 0; i < n; i++) {
printf("Laptop %d:\n", i );
printf("Company: %s\n", laptops[i].company);
printf("Name: %s\n", laptops[i].name);
printf("Processor: %s\n", laptops[i].processor);
printf("Price: %.2f\n\n", laptops[i].price);
}

return 0;
}