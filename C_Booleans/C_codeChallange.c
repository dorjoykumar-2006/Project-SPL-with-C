#include <stdio.h>
#include <stdbool.h>
int main()
{
    int age = 20;
    int minAge = 18;

    bool isGreater = age > minAge;

    if (isGreater)
    {
        printf("Age is bigger\n");
    }

    printf("the result is: %d\n", age > minAge);
    return 0;
}