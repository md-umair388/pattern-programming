#include<stdio.h>
int main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
      for(int j=1; j <= n-i; j++)
      printf(" "); // space for

      for(int k=1; k <= (2*i-1); k++)
      printf("*"); // star for

      printf("\n"); // new line for 
    }

    return 0;
}