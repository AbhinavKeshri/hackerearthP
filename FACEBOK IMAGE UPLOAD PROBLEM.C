#include <stdio.h>

int main()
{
    int L;
    scanf("%d",&L);
    int test_cases;
    scanf("%d",&test_cases);
    int height, weidth;
    for(test_cases = test_cases; test_cases>0 ;test_cases--)
    {
        scanf("%d %d",&height, &weidth);
        if((height >= L && weidth >= L) &&(height == weidth))
        {
            printf("ACCEPTED\n");
        }
        else if(height<L || weidth < L)
        {
            printf("UPLOAD ANOTHER\n");
        }
        else
        {
            printf("CROP IT\n");
        }
    }
    return 0;
}
