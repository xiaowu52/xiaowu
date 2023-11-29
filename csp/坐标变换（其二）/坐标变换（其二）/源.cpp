#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<double> theta(n+1,0);
	vector<double> k(n+1, 1);

	for (int i = 1; i <= n; i++) {
		int type;
		double oper;
		cin >> type >> oper;
		if (type == 1) {
			k[i] = k[i - 1] * oper;
			theta[i] = theta[i - 1];
		}
		else {
			k[i] = k[i - 1];
			theta[i] = theta[i - 1] + oper;
		}
	}

	for (int z = 0; z < m; z++) {
		int i, j;
		double x, y;
		cin >> i >> j >> x >> y;
		double pro_k = k[j] / k[i - 1];
		double sum_theta = theta[j] - theta[i - 1];
		
		cout << fixed << setprecision(3) << (x * cos(sum_theta) - y * sin(sum_theta)) * pro_k
			<< " " << (x * sin(sum_theta) + y * cos(sum_theta)) * pro_k << endl;
	}

	return 0;
}