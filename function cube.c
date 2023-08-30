#include<stdio.h>

int cub(int n);

int main()
{
    int n,c;
    scanf("%d",&n);
    c=cub(n);

    printf("Cube of %d is %d",n,c);

    return 0;


}

int cub(int n)
{
    return (n*n*n);
}
