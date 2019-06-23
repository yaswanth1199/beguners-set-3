#include<stdio.h>
#include<string.h>
int main()
{
    int i,c,l;
    char a[1000];
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;++i)
    {
    c=a[i];
    if((c>119&&c<123)||(c>87&&c<91))
    {
        c=c-23;
        printf("%c",c);
        
    }
    else{
    printf("%c",c+3);
    }}
}
