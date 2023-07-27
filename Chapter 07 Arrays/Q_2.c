#include <stdio.h>

void input_Arrays(int, int[]);
void print_Arrays(int, int[]);
void merge_Arrays(int, int[], int, int[], int[]);
int main()
{
    int n1, n2;
    printf("Enter the size of the First array you want to create : ");
    scanf("%d", &n1);
    printf("-----------------------\n");
    printf("Enter the size of the Second array you want to create : ");
    scanf("%d", &n2);
    printf("-----------------------\n");
    // Initialize the arrays and its sizes

    int size_3 = n1 + n2;
    int arr_1[n1], arr_2[n2], arr_3[size_3];

    input_Arrays(n1, arr_1);
    printf("-----------------------\n");
    input_Arrays(n2, arr_2);
    printf("-----------------------");
    merge_Arrays(n1, arr_1, n2, arr_2, arr_3);
    printf("-----------------------");
    print_Arrays(size_3, arr_3);
    printf("-----------------------");
}
void input_Arrays(int size, int arr[])
{
    // Take input from the user
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of element %dth of the array : ", i);
        scanf("%d", &arr[i]);
    }
}
void print_Arrays(int size, int arr[])
{
    // Print the array
    for (int i = 0; i < size; i++)
    {
        printf("%d \n", arr[i]);
    }
}

void merge_Arrays(int size1, int arr1[], int size2, int arr2[], int arr3[])
{
    int i, j, k;
    i = j = k = 0;

    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < size1)
    {
        arr3[k++] = arr1[i++];
    }

    while (i < size2)
    {
        arr3[k++] = arr2[j++];
    }
    
    
    
}


