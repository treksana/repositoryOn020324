#include <iostream>
#include <string>
using namespace std;
int main()
{
	char c1 = '1';
	char c2 = '2';
	char c3 = '3';
	char c4 = '4';
	char c5 = '5';
	string w{ c1, c2, c3, c4, c5 };
	int n = stoi(w);
	cout << n << endl;
}