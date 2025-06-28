#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,n;
scanf ("%d",&n);
int a[n];
for (i=0;i<n;i++)
{
    scanf ("%d",&a[i]);
}
int save = 0;
for (i=n-1;i>=0;i--)
{
    save = a[i];
    printf ("%d ",a[i]);
}
return 0;
}
