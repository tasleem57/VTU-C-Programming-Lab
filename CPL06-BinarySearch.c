/**
1. Include necessary headers
2. Declare variables
3. Get Array size, array elements and key element as input
4. Logic to find the position of the key element
5. Print output - position of the key element
**/

#include <stdio.h>

int main()
{
    int a[50];
    int key, i, n , low, high,mid;
    int found = 0;

    printf("Enter the Array size:\n");
    scanf ("%d", &n);

    printf (" \nEnter the elements of the array: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the key to be searched: \n" );
    scanf ("%d", &key);

    low = 0;
    high = n-1;

    while (low <=high)
    {
        mid= (low+ high)/2;
        if (a[mid] == key)
        {
            found=1;
            break;
        }
        if (a[mid]>key)
            high = mid-1;
        else
            low = mid+1;
    }

    if(found)
    {
        printf("\n%d is present at the position = %d", key, mid+1);
    }
    else
    {
        printf("key not found");
    }
    return 0;
}
