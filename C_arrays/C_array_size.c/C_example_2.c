// EXAMPLE 2 ; get the number of elements

#include <stdio.h>
int main()
{
    int arr_1[] = {10, 20, 30, 40};
    double arr_2[] = {11.1, 22.2, 33.3, 44.4 , 55.5 , 66.6};

    int length_1 = sizeof(arr_1) / sizeof(arr_1[0]);
    int length_2 = sizeof(arr_2) / sizeof(arr_2[0]);

    printf("total number if elements in array one :%d\n", length_1);
    printf("total number if elements in array two :%d", length_2);

    return 0;
}