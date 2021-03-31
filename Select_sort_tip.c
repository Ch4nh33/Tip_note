#include<stdio.h>

int main(void)
{
    int min, index, temp;
    int arr[10] = {1, 10, 5 ,8,7,6,3,2,9};
    
    for (size_t i = 0; i < 10; i++)
    {
        min = 9999;
        for (size_t j = i; j < 10; j++)
        {
            if(arr[j]<min)
            {
                min = arr[j];
                index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    
    return 0;
}
