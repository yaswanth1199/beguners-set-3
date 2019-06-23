

#include <stdio.h>

int main()
{
    int a[100];
   int n,j=0,i,c;
   scanf("%d",&n);
   while(j<n)
   {
       scanf("%d",&a[j]);
   
       ++j;
   }
 
 c=a[0];
 for(i=1;i<n-1;++i)
 {
     if(a[i]>c)
     {
         c=a[i];
     }
 }
  printf("%d",c);
}
