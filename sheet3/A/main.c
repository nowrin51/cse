#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,n;
int total = 0;
scanf ("%d",&n);
int array [n];
for (i=0;i<n;i++)
{
    scanf ("%d",&array[i]);
    total = (total + array[i]);
}
printf ("%d\n",abs(total));
return 0;
}

