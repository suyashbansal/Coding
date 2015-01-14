#include<stdio.h>

int pascal(int *,int);
int fact(int);

int main()
{
    int n,t,i,j,array[100],res[100];
    scanf("%d",&n);
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf(" %[^\n]d",array);
        //res[i]=pascal(array,n); // <-- error !!!
        /*for(j=0; j<10; j++)
        {
            scanf("%d",&array[j]);
        }*/
    }
    //printf("\nYou entered: %s", array);
    printf("%s", res);
    return 0;
}

int pascal(int *ptr_2_array,int n)
{
    int sum=0,r;
    //sum = sum + (fact(n)/(fact(n-r)*fact(r)));
    if(n<=ptr_2_array[0])
    {
        for(r=1; r<100; r++)
        {
            sum = sum + (fact(ptr_2_array[0])/(fact(ptr_2_array[0]-ptr_2_array[r])*fact(ptr_2_array[r])));
        }
        return sum;
    }
    else
        return -1;
}

int fact(int x)
{
    if(x==0)
        return 1;
    else
        return(x*fact(x-1));
}
