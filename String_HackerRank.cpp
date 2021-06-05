#include <iostream>
#include <string>
using namespace std;

int main() {
	//Input a,b 
	string a, b;
	cin >> a;
	cin >> b;

	//Input length;
	int la, lb;
	cin >> la >> lb;

	cout << a.size() << " " << b.size() << endl;
	cout << a + b << endl;

	//Swap
	char temp = a[0];
	a[0] = b[0];
	b[0] = temp;

	cout << a << " " << b << endl;

	return 0;
}