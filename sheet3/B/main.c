#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,i;
scanf ("%d",&n);
int array[n];
for (i=0;i<n;i++)
{
    scanf ("%d",&array[i]);
}
int x;
scanf ("%d",&x);
int save=0;
for (i=0;i<n;i++)
{
    if ((array[i])==x)
        {
        save = i;
        break;
        }
   else
    {
        save = -1;

    }
}
    printf ("%d\n",save);

return 0;
}
