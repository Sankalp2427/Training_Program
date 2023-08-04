//4. Shifting Letters says that we have given a string s and an array shifts.
//Now for each shifts[i] = x, we want to shift the first i + 1 letters of s, x times. We have to return the final string after all shifts are applied.

#include<stdio.h>
int main()
{
    int num[]={3,5,9};
    char ch[]={'a','B','c'};
    char newch[3];
    for(int i=0;i<3;i++)
    { 
        for(int j=0;j<=i;j++)
        {
        ch[j]=ch[j]+num[i];
        if(ch[j]>122)
             {
                ch[j]=ch[j]%123+97;
             }
        }
    }
    for(int i=0;i<3;i++)
    {
        printf("%c",ch[i]);
    }
    return 0;
}
