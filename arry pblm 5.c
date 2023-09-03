#include <stdio.h>
#define N 12
int main()
{
int a[N] = { 14, 21, 36, 14, 12, 9, 8, 22, 7, 81, 77, 10};
int i;
// Find The Maximum Element
int max=a[0]; // pick the first number as the current maximum
for(i=1; i< N; i++)
{
if(max < a[i])
{
max=a[i];
}
}
printf("The maxiumum value in the array is %d.\n\n", max);
}
