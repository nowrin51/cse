
#include <stdio.h>
#include <stdlib.h>

int main()
{
long long int n,sum=0;
int a=0,b=1,i;
scanf ("%lld",&n);
int array [n];
for (i=0;i<n-2;i++)
{
    sum = a+b;
    a = b;
    b = sum;
    array[i] = sum;
}
//for (i=0;i<n-2;i++)
//{
    printf ("%lld\n",sum);
//}
return 0;
}
