//  Fibonacci series (first 10 terms).
// Solution:

#include<stdio.h>
int main()
{
    int a = 0, b = 1,x = 0, t; 
    printf("Enter the number of terms: \n");
    scanf("%d",&t);
    printf("%d %d ", a, b);
    for(int i=0; i<=t; i++)
    {
        x = a + b;
        a = b;
        b = x;
        printf("%d ",x);
    }
return 0;

}