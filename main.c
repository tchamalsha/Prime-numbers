#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,t=1;
    int fac=0;
    int r=1;
    int c=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    int fact[n];
    while (r<=n){
        if (n%r==0){
            fac=fac+1;
        }

        r++;
    }
    int array[fac-1];
    while (t<=n){
        if (n%t==0){
            array[c]=t;
            c++;
        }

        t++;
    }
    if (fac==2)
        printf("%d is a prime number.\n",n);
    else
        printf("%d is not a prime number.\n",n);

    printf("Facts of %d are: \n",n);
   for(int i=0;i<fac;i++){
        printf("%d\n",array[i]);
   }

}
