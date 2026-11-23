#include<stdio.h>
int main()
{
    int n;
    int Arr[n],i,sum=0, mean1;
    printf("enter the number ofelements:");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&Arr[i]);
        sum=sum + Arr[i];
        mean1=sum/n;

    }
    printf("the mean of the elements is %d",mean1);
    return 0;
}