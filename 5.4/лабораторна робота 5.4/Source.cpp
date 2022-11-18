
#include <iostream>
#include <cmath>
using namespace std;
double P0(const int K, const int N)
{
	double p = 1;
	for (int k = K; k <= N; k++)
		p *= ((k - N) * 1.0 / (k + N)) + 1.;
	return p;
}

double P1(const int K, const int N, const int k)
{
	if (k > N)
		return 1;
	else
		return ((((k - N) * 1.0) / (k + N)) + 1.) * P1(K, N, k + 1);
}

double P2(const int K, const int N, const int k)
{
	if (k < K)
		return 1;
	else
		return ((((k - N) * 1.0) / (k + N)) + 1.) * P2(K, N, k - 1);
}

double P3(const int K, const int N, const int k, double t)
{
	t = t * ((((k - N) * 1.0) / (k + N)) + 1.);
	if (k >= N)
		return t;
	else
		return P3(K, N, k + 1, t);
}

double P4(const int K, const int N, const int k, double t)
{
	t = t * ((((k - N) * 1.0) / (k + N)) + 1.);
	if (k <= K)
		return t;
	else
		return P4(K, N, k - 1, t);
}

int main()
{
	int K = 1;
	int N = 19;
	//cout << "K = "; cin >> K;
	//cout << "N = "; cin >> N;
	cout << "(iter) P0 = " << P0(K, N) << endl;
	cout << "(rec up ++) P1 = " << P1(K, N, K) << endl;
	cout << "(rec up --) P2 = " << P2(K, N, N) << endl;
	cout << "(rec down ++) P3 = " << P3(K, N, K, 1) << endl;
	cout << "(rec down --) P4 = " << P4(K, N, N, 1) << endl;



	return 0;
}