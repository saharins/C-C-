//array insertion
#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int Arr[N];
    for(int i = 0; i < N; i++)
    {
        scanf("%d",&Arr[i]);
    }
    int X,V;
    scanf("%d",&X);
    scanf("%d",&V);
    for(int i = 0; i < N; i++)
    {
        Arr[X] = V;
       printf("%d ",Arr[i]);
    }
//for(int i = N - 1; i >= 0; i--)//print reverse this line
    //{

    //}
    printf("\n");

    return 0;

}

