#include<iostream>
using namespace std;
int main()
{
    int b;
    cin >> b;
    cout << b / 1024 << "KB" << endl;
    cout << b / 1024 / 1024 << "MB" << endl;
    cout << b / 1024 / 1024 / 1024 << "GB" << endl;

    return 0;
}