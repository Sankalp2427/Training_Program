#include <stdio.h>
int main()
{
    int v,w,f,t;
    printf("Enter the number of wheels and vehicles:\n");
    scanf("%d %d",&w,&v);
    f=(w-2*v)/2;
    t=v-f;
    printf("Four wheelers:%d\n",f);
    printf("Two wheelers:%d",t);
    return 0;
}