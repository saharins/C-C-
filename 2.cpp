
//concatenate two string

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char A[200],B[100];
    cout <<"Enter A : ";
    cin >> A;
    cout << "Enter B : ";
    cin >> B;
    int k =  strlen(A);
    for(int i = 0; i <= strlen(B);i++)
    {
        A[k] = B[i];
        k++;
    }
    cout <<"The conatenate is : "<<A,B;
    return 0;
}
