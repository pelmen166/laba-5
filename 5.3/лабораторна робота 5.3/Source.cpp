#include <iostream>
#include <cmath>
using namespace std;
double j(const double x);
int main()
{
	double kp, kk, z, k;
	int n;
	cout << "kp = "; cin >> kp;
	cout << "kk = "; cin >> kk;
	cout << "n = "; cin >> n;
	double dk = (kk - kp) / n;
	k = kp;
	while (k <= kk)
	{
		z = j(k) + pow(j(k - 1), 2) + 2 * j(1.);
		cout << k << " " << z << endl;
		k += dk;
	}
	return 0;
}
double j(const double x)
{
	if (abs(x) >= 1)
		return (sin(x)+1)/(cos(x)* cos(x)+exp(x));
	else
	{
		double S = 0;
		int k = 0;
		double a = 1;
		S = a;
		do
		{
			k++;
			double R = (2 * x * x) / (2 * k * k - k);
			a *= R;
			S += a;
		} while (k < 7);
		double result = 1. / cos(2 * x) * S;
		return result;
	}
}