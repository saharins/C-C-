//compare two string
#include <stdio.h>
#include <string.h>
int main()
{
    char A[1000];
    scanf("%s", A);
    char B[100000];
    scanf("%s", B);

    int comp = 1;

    for (int i = 0; A[i] != '\0' && B[i] != '\0'; i++)
    {
        if (A[i] != B[i])
        {
            comp = 0;
            break;
        }
    }

    if (comp == 1)
    {
        printf("They are same\n");
    }
    else
    {
        printf("They  are not same\n");
    }

    return 0;
}
