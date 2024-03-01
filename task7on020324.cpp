#include <iostream>
#include <string>
using namespace std;
int main()
{
    string w1, w2;
    cin >> w1 >> w2;
    if (w1.back() == w2.front())
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}