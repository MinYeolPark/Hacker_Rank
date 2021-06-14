#include <iostream>
#include <string>
using namespace std;

class Complex
{
public:
	int a, b;
	void input(string s)
	{
		int v1 = 0;
		int i = 0;
		while (s[i] != '+')
		{
			v1 = v1 * 10 + s[i] - '0';
			i++;
		}
		while (s[i] == ' ' || s[i] == '+' || s[i] == 'i')
		{
			i++;
		}
		int v2 = 0;
		while (i < s.length())
		{
			v2 = v2 * 10 + s[i] - '0';
			i++;
		}
		a = v1;
		b = v2;
	}
};
//
//void Complex::input(string s)
//{
//	string A, B;
//	for (int i = 0; i < s.length(); i++)
//	{
//		if (s[i] == '+')
//		{
//			A=s.substr(0, i);
//		}
//		if (s[i] == 'i')
//		{
//			B = s.substr(i+1,s.length());
//		}
//	}
//	cout << "S : " << s << endl;
//	cout << "A :" << A << endl;
//	cout << "B : " << B << endl;
//
//	a=stoi(A);
//	b=stoi(B);
//}

Complex operator+(const Complex _a, const Complex _b)
{
	Complex Z;
	Z.a = _a.a + _b.a;
	Z.b = _a.b + _b.b;

	return Z;
}

ostream& operator<<(ostream& os, const Complex _c)
{
	return os << _c.a << "+" << "i" << _c.b;
}

int main()
{
	Complex x, y;
	string s1, s2;
	cin >> s1;
	cin >> s2;
	x.input(s1);
	y.input(s2);
	Complex z = x + y;
	cout << z << endl;
}