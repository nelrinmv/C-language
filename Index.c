#include <stdio.h>
int main()
{
    int n, i, key, found = 0;
    int a[100];
    printf("Enter the no. of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            printf("Element %d found at position %d\n", key, i + 1);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Element %d not found in the array\n", key);
    }
    return 0;
}