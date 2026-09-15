#include <iostream>
using namespace std;

#define MAX 100

void insertEnd(int A[], int &n, int item)
{
    int UB = n - 1;

    // Overflow check
    if (UB == MAX - 1)
    {
        cout << "Overflow";
        return;
    }

    UB++;
    A[UB] = item;
    n++;
}

int main()
{
    int A[MAX] = {10, 20, 30, 40};
    int n = 4;
    int item = 50;

    insertEnd(A, n, item);

    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}