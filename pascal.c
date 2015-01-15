#include<stdio.h>

int pascal(int *,int);
int fact(int);

int main()
{
    int n,t,i,j,array[100],res[100];
    scanf("%d",&n);
    scanf("%d",&t);
    for(i=0; i<2; i++)
    {
        //scanf(" %[^\n]d",array[j]);
        //printf("%d ",array[0]);
        //res[i]=pascal(array,n);

        for(j=0; j<10; j++)
        {
            scanf("%d",&array[j]);
            if(array[j] == '\0'){
                break;
            }
        }
    }
    printf("%s", res);
    return 0;
}

int pascal(int *ptr_2_array,int c)
{
    int sum=0,i;
    int n=ptr_2_array[0];
    //sum = sum + (fact(n)/(fact(n-r)*fact(r)));
    if(c>=n)
    {

        for(i=1; i<3; i++)
        {
            int r = ptr_2_array[i];
            //sum = sum + (fact(ptr_2_array[0])/(fact(ptr_2_array[0]-ptr_2_array[r])*fact(ptr_2_array[r])));
            //sum = sum + (fact(n)/(fact(n-r)*fact(r)));
        }
        printf("%d ", n);
        printf("if pascal");
        return sum;
    }
    else
    {
        printf("Else pascal");
        return -1;
    }
}

int fact(int x)
{
    if(x==0)
        return 1;
    else
        return(x*fact(x-1));
}
