//compare two string
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char A[1000];
    cout << "Enter A : ";
    cin >>A;
    char B[100000];
    cout << "Enter B : ";
    cin >> B;

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
       cout << "They are same";
    }
    else
    {
        cout << "They are not same";
    }

    return 0;
}
