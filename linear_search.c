#include <stdio.h>
int main()
{
    int array[100],c,n,search,count=0;
    printf("Enter the no. of elements in array: \n");
    scanf("%d", &n);
    printf("Enter %d values: \n",n);
    for(c=0;c<n;c++)
      {
      scanf("%d", &array[c]);
      }
    printf("Enter a no. to search: \n");
    scanf("%d",&search);
    for(c=0;c<n;c++)
    {   count++;
        if (array[c]==search)
        {
            printf("%d is present at location %d\n",search,c+1);
            break;
        }
    }
    if(c==n)
    {
        printf("%d isn't present in the array.\n",search);
        count++;
    }
    printf("Steps= %d",count);
    return 0;
}
