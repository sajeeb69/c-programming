#include<stdio.h>
int main()
{
   int X;
   scanf("%c",&X);
   if(X>='0' && X<='9')
    {
    printf("IS DIGIT",X);
    }
    else{
        printf("ALPHA\n");
        if(X>='a' && X<='z')
        {
            printf("IS SMALL\n");
        }
        else
        {
            printf("IS CAPITAL");
        }
    }
    
    return 0;
}
