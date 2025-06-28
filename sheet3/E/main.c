#include <stdio.h>
#include <stdlib.h>

int main()
{
int size,i,lowest;
scanf ("%d",&size);
int array[size];
for (i=1;i<=size;i++)
{
    scanf ("%d",&array[i]);
}
lowest = array[1];
int save=1;
for (i=1;i<=size;i++)
{
    if (lowest > array[i])
    {
        lowest = array[i];
        save = i;
    }
}
printf ("%d %d\n",lowest,save);

return 0;
}
