#include <iostream>
using namespace std;

/*
You are given an array A[m] where first n cells contain integers in sorted order and the
rest of the cells are filled with 0.
Here assumes m>>n and value of n is unknown.
Implement an algorithm that takes an integer x as input and finds a position in the array
containing x,
*/
void findPosition(int *A, int n, int x)
{
    int i = 0;
    while (i < n && A[i] != x)
    {
        i++;
    }
    if (i < n)
    {
        cout << "Found at position " << i << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
}

void findNumberOfN(int *A, int n)
{
    int i = 0;
    int x = 0;
    int count = 0;
    while (i < n)
    {
        if (A[i] != x)
        {
            count++;
        }
        i++;
    }
    cout << "Number of n is " << count << endl;
}

int main(int argc, char const *argv[])
{
    int A[] = {1, 2, 3, 4, 0, 0, 0, 0, 0, 0};
    int n = sizeof(A) / sizeof(A[0]);
    int x;
    cout << "Enter the number to be searched: ";
    cin >> x;
    findNumberOfN(A, n);
    findPosition(A, n, x);
    return 0;
}
