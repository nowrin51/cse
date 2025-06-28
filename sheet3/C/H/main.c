#include <stdio.h>
#include <stdlib.h>

int main()
{
int arr[10051],i,j,n,step,temp;
scanf ("%d",&n);
for (i=0;i<n;i++)
{
    scanf ("%d",&arr[i]);
}
for (i=0;i<n;i++)
{
    for (j=0;j<n-i-1;j++)
    {
        if (arr[j]>arr[j+1])
        {
            temp = arr[j];
        }
    }
}
