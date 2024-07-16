#include <stdio.h>
int main()
{
for (int row = 10; row >= 6; row--)
{
for (int space = 1; space <=row-6; space++)
{
printf("  ");
}
for (int col = row; col <= 10; col++)
{
printf("%d ", col);
}
printf("\n");
}
}