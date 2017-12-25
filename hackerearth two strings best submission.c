#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int arr[26]={0};
        int flag=0;
        char str[100000];
        scanf("%s",str);
        for(int j=0;str[j]!='\0';j++)
        {
            arr[str[j]-'a']++;
        }
        scanf("%s",str);
        for(int j=0;str[j]!='\0';j++)
        {
            arr[str[j]-'a']--;
        }
        for(int j=0;j<26;j++)
        {
            if(arr[j]!=0)
                {flag=1;break;}
        }
        if(flag==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
