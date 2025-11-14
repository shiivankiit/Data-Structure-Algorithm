#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    for (int i = 0; i <= 10; i++)
    {
        cout << i << endl;
    }
    int i = 1;
    do
    {
        // logic
        cout << i << endl;
        // updation
        i = i + 1;
    } while (i <= 5);
    cout << endl;
    return 0;
}