# include <stdio.h>
int strlen(char array[]);
void letterdeleter(char array[],int index);
int main()
{
    int testcase;
    scanf("%d",&testcase);
    label:
    testcase--;
    char array1[10000];
    char array2[10000];
    scanf("%s",array1);
    scanf("%s",array2);
    int inde=0;
    int i=0;

    while(array1[inde]!='\0')
    {
        while(array1[inde]!=array2[i]&&array2[i]!='\0' )
            i++;
        if(array1[inde]==array2[i])
        {
            letterdeleter(array1,inde);
            letterdeleter(array2,i);
            inde--;
        }
        i =0;
        inde=inde+1;
    }
    printf("%d\n",strlen(array1)+strlen(array2));
    if(testcase!=0)
        goto label;


}
int strlen(char array[])
{
    int len=0;
    while(array[len]!='\0')
        len++;
    return len;
}
void letterdeleter(char array[],int index)
{
    while(array[index]!='\0')
    {
        array[index]= array[index+1];
        index++;
    }
}
