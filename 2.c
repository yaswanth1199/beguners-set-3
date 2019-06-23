

#include <stdio.h>

int main()
{
    int a[100];
   int n,j=0;
   scanf("%d",&n);
   while(j<n)
   {
       scanf("%d",&a[j]);
   
       ++j;
   }
 
    printf("%d",a[n-1]);
}
