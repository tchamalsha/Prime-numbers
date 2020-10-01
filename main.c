#include <stdio.h>

int main()
{
    int n,t=1;
    int fac=0;
    int r=1;
    int index=0;

    //getting input here
    printf("Enter the number: ");
    scanf("%d",&n);

    while (r<=n){
        if (n%r==0){
            fac=fac+1;
        }

        r++;
    }
    int array[fac-1];
    while (t<=n){
        if (n%t==0){
            array[index]=t;
            index++;
        }
        t++;
    }
    printf("%d is %sa prime number.\n",n, fac==2?"":"not ");

    printf("Facts of %d are: ",n);
    for(int i=0;i<fac;i++){
        printf("%d, ",array[i]);
    }
}