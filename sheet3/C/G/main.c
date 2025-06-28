
#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,i;
scanf ("%d",&n);
int a[n];
scanf ("%d",&a[i]);
int temp=num,ans=0,r;
while (temp>0)
{
    r = temp % 10;
    ans = (ans * 10) + r;
    temp = temp / 10;
}
if (ans == num)
    printf ("%lld\nYES\n",ans);
else
    printf ("%lld\nNO\n",ans);
return 0;
}
