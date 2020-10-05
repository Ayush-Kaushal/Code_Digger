/*Given an array arr[] and a number K where K is smaller than size of array,
 the task is to find the Kth smallest element in the given array. It is given 
 that all array elements are distinct.*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t,n,*a,i,j,k,l,b;
    scanf("%d\n",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d\n",&n);
        a=(int*)malloc((sizeof(int))*n);
       
        for(j=0;j<n;j++)
        {
            scanf("%d ",&a[j]);
        }
        scanf("\n%d",&k);
        for (l = 0; l < k; ++l) 
        {
 
            for (j = l + 1; j < n; ++j)
            {
 
                if (a[l] > a[j]) 
                {
 
                    b =  a[l];
                    a[l] = a[j];
                    a[j] = b;
 
                }
 
            }
 
        }
        printf("%d\n",a[k-1]);
    }
    return 0;
}