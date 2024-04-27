//concatenate two string

#include <stdio.h>
#include <string.h>
int main()
{
    char A[200];
    char B[100];
    scanf("%s",A);
    scanf("%s",B);
    int k =  strlen(A);
    for(int i = 0; i <= strlen(B);i++)
    {
        A[k] = B[i];
        k++;
    }
    printf("%s %s",A,B);
    return 0;
}
