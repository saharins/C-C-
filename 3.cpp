//array insertion
#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter N : ";
    cin >> N;
    int Arr[N];
    cout << "The size of arry is : ";

    for(int i = 0; i < N; i++)
    {
        cin >> Arr[i];
    }
    int X,V;
    cout << "Enter X : ";
    cin >> X;
    cout << "Enter V : ";
    cin >> V;
    cout << "New array is : ";
    for(int i = 0; i < N; i++)
    {
        Arr[X] = V;
       cout <<Arr[ i ] << " ";
    }
    cout << endl;

    return 0;

}

