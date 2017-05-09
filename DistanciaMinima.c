#include<stdio.h>
int main()
{
    int Array [5] = {16, 3, 10, 9, 8};
    int j = 0;
    int result;
    int i;
    for (i = 0; i < 5; i++)
    {
        j++;
        int k = j;
        while (k < 5)
        {
            if (Array[i] != Array[k])
            {
                result = Array[i] - Array[k];
                printf("%d ,", result);
            }
            k++;
        }
        printf("\n");
    }
    return 0;
}
