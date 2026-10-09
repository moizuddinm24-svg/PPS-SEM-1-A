#include<stdio.h>
int main()
{
    int x,y,z,N;
    long fact1,fact2,fact3;
    printf("input the numbere of rows in pascal's triangle");
    scanf("%d",&N);
    for(x=0;x<N;x++)
    {
     for(z=0;z<N-x-1;z++)
     printf(" ");
     for(y=0;y<=x;y++)
     {

         fact1=1;
         fact2=2;
         fact3=3;
         for(z=1;z<=x;z++)
        fact1=fact1 * z;
        for(z=1;z<=y;z++)
        fact2=2 *z;
        for(z=1;z<x-y;z++)
        fact3=3 *z;
        printf("%1d",fact1/(fact2*fact3));

     }
     printf("\n");
    }
    return 0;
}
