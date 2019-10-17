#include<stdio.h>
#include<stdlib.h>
void binarysearch(int *a,int f,int r,int e);
int main()
{
    int a[50],key,n,i,c,d;
    printf("Enter No. of elements in an array\n");
    scanf("%d",&n);
    printf("Enter sorted elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        d=a[i];
    }
     printf("Enter the element you want to search:\n");
    scanf("%d",&key);
    c=a[0];
    binarysearch(a,c,d,key);
}
void binarysearch(int *b,int f,int r,int e)
{

    int mid=(f+r)/2,g=0;
    while(f<=r)
    {
        if(b[mid]==e)
            {
            printf("Element found at %d position \n",mid+1);
            g++;
            exit(1);
            }
        else if(b[mid]>e)
        {
            binarysearch(b,f,mid-1,e);
        }
        else if(b[mid]<e)
        {
            binarysearch(b,mid+1,r,e);
        }
    }
if(g!=1)
{
    printf("Not found");
    exit(0);
}
}
