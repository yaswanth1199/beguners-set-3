

#include <stdio.h>

int main()
{
    int a[100];
   int n,j=0,i=0,c;
   scanf("%d",&n);
   while(j<n)
   {
       scanf("%d",&a[j]);
   
       ++j;
   }
 
  while(i<n-1)
  {
      if(a[i]<a[i+1])
      {
          c=a[i+1];
      }
      else
      {
          c=a[i];
      }
      
  ++i; 
  }
  printf("%d",c);
}
