#include<stdio.h>

void main()
{ int arr[20], size,i, j, temp;
printf("enter the size of array=");
scanf("%d",& size);
printf("enter the elements of array ");
for(i=0;i<size;i++)
{
    printf("\n enter the %d element",i+1);
    scanf("%d",&arr[i]);
    }
    /*start of bubble sort*/
    {
        for (j=0;i<size;j++)
        {
            if (arr[j]>arr[j+1])
            { 
                temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }

    }
    /*end of bubble sort*/
    printf("\n entered array is ");
    for(i=0;i<size;i++)
    printf("\t%d",arr[i]);
    return;
}
}
