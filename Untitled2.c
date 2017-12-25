#include <stdio.h>
#include<string.h>
int main()
{
char t,tt,s1[100000],s2[100000];
long int i,kk,ll,j,k,l,count;
scanf("%d",&i);
for(j=0;j<i;j++)
{
scanf("%s",s1);
scanf("%s",s2);
//count=0;
for(k=0;k<strlen(s2)-1;k++)
{
for(l=k+1;l<strlen(s2);l++)
{ if(s2[k]>s2[l])
{t=s2[k];
s2[k]=s2[l];
s2[l]=t;}
}

}
for(kk=0;kk<strlen(s2)-1;kk++)
{
for(ll=kk+1;ll<strlen(s2);ll++)
{ if(s1[kk]>s1[ll])
{tt=s1[kk];
s1[kk]=s1[ll];
s1[ll]=tt;}
}

}
if(strcmp(s1,s2)==0)
printf("\nYES");
else printf("\nNO");
}
return 0;
}
