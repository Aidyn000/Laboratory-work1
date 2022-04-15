/*#include <iostream>
#include <cmath>
using namespace std;
int main() {
	/*int A, B, N; // for 2
	cout << " A : " ;
  cin >> A;
  cout << " B : " ;
  cin >> B;
  	N = 0;
	for (int x = A; x <= B; x++) {
		cout << x << " " << endl;
		N++;
	}
	cout << " numbers = " << N << endl;
}

	int a; // for 5
	float b;
	cout << " a : " ;
  cin >> a;
	for (float i = 0.1; i <= 1.1; i = i + 0.1) {
		b = a * i;
		cout << b << " " << endl;
	}
}


	int a; // for 6
	float b;
  cout << " a : ";
	cin >> a;
	for (float i = 1.2; i <= 2.1; i = i + 0.1) {
		b = a * i;
		cout << b << " " << endl;
	}
}

  
	float a, out; // for 16
	int n;
	cout << " a : ";
  cin >> a;
  cout << " n : ";
  cin >> n;
	for (int i = 1; i <= n; i++) {
		out = pow(a, i);
		cout << out << " ";
	}
}



	float a, out, sum; // for 17
	int n;
	cout << " a : " ;
  cin >> a;
  cout << " n : " ;
  cin >> n;
	sum = 0;
	for (int i = 1; i <= n; i++) {
		out = pow(a, i);
		sum = sum + out;
	}
	cout << "s=" << sum;
}



	float a, An, sum; // for 18
	int n;
	cin >> a >> n;
	sum = 0;
	for (int i = 0; i <= n; i++) {
		An = pow(-1, i) * pow(a, i);
		sum = sum + An;
	}
	cout << "s=" << sum;
}





	float x, An, sum; // for 26
	int n;
	cin >> x >> n;
	sum = 0;
	for (int i = 1; i <= n; i++) {
		An = pow(-1, i) * pow(x, 2 * n + 1) / (2 * i) + 1;
		sum = sum + An;
	}
	cout << "s=" << sum;
}

*/

//FOR27//
/*
int main() {
	float x, A1, An, sum;
	int n;
	cin >> x >> n;
	sum = 0;
	A1 = 1;
	for (int i = 1; i <= n; i++) {
		A1 = A1 * (2 * i - 1)/(2 * i);
		An = A1 * pow(x, 2 * i + 1);
		sum = sum + An;
	}
	cout << "sum=0" << sum;
}
*/

//FOR34//
/*
int main() {
	int n;
	float a1, a2, a3, sum;
	cin >> n;
	a1 = 1;
	a2 = 2;
	cout << "1 2 ";
	for (int i = 0; i < n; i++) {
		a3 = (a1 + 2 * a2) / 3;
		sum = a1 + a2;
		a2 = a3;
		a1 = sum-a1;
		cout << a3 << " ";
	}
}
*/