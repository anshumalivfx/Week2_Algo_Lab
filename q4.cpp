#include<iostream>
using namespace std;
/*
Implement the recursive algorithms for (a) Tower of Hanoi and (b) Fibonacci Number
computation and analyse the space and time requirements of both the algorithms.
*/
void towerOfHanoi(int n, char source, char aux, char dest)
{
    if (n == 1)
    {
        cout << "Move disk 1 from " << source << " to " << dest << endl;
        return;
    }
    towerOfHanoi(n - 1, source, dest, aux);
    cout << "Move disk " << n << " from " << source << " to " << dest << endl;
    towerOfHanoi(n - 1, aux, source, dest);
}

void fibonacci(int n)
{
    if (n == 1)
    {
        cout << "1" << endl;
        return;
    }
    if (n == 2)
    {
        cout << "1 1" << endl;
        return;
    }
    int a = 1, b = 1, c = 0;
    cout << "1 1 ";
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}

// computation and analyse the space and time requirements of both the algorithms.

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;
    towerOfHanoi(n, 'A', 'B', 'C');
    cout << endl;
    int a;
    cout << "Enter the number of terms: ";
    cin >> a;
    fibonacci(a);
    return 0;
}