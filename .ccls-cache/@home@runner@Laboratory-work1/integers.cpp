/*#include <iostream>
#include <string>
#include <cmath>
using namespace std ;
int main () {
float Lcm, Lm;
cin >> Lcm;
Lm = Lcm / 100;
cout << " Lm = " << Lm << endl; 
}


float Mkg, Ttonna ;
cin >> Mkg ;
Ttonna = Mkg / 1000 ;
cout << " T = " << Ttonna << endl;
}


float Kilobyte , Byte ;
cin >> Byte ;
Kilobyte = Byte / 1024 ;
cout << " Kilobyte = " << Kilobyte << endl;
}


float A, B, C;
cin >> A >> B;
C = A / B ;
cout << " C = " << C << endl;
}


int A, B, C; 
cin >> A >> B;
C = A % B  ;
cout << "C = " << C << endl;
  }


int a, b, десятка, единица;
  cin >> a >> b;
  десятка = a / b;
  единица = a % b;
  cout << " десятка = " << десятка << endl;
  cout << " единица =" << единица << endl;
  }


int a, b, c, d;
  cin >> a >> b;
c = a + b;
d = a * b;
  cout << " c = " << c << endl;
  cout << " d = " << d << endl;
  }


int ab, ba;
  cin >> ab;
  ba = ab;
  cout << "ba = " << ba << endl;
  }*/




/*int main()
{
	int m, t;
	cin >> m;
	t = m / 1024;
	cout << t << "tonna";

}


int main() {
	int A, B, D;
	cin >> A >> B;
	D = A / B;
	cout << "OTREZKOV=" << D;
}
*/


/*
int main() {
	int a, a1, a2, a3, OUT;
	cin >> a;
	a3 = a % 10;
	a2 = (a % 100 - a3) / 10;
	a1 = a / 100;
	OUT = a3 * 100 + a2 * 10 + a1;
	cout << OUT << endl;
}
*/


/*
int main() {
	int a, a1, a2, a3, OUT;
	cin >> a;
	a3 = a % 10;
	a2 = (a % 100 - a3) / 10;
	a1 = a / 100;
	OUT = a2*100+a3*10+a1;
	cout << OUT << endl;
}
*/


/*
int main() {
	int a, a1, a2, a3, OUT;
	cin >> a;
	a3 = a % 10;
	a2 = (a % 100 - a3) / 10;
	a1 = a / 100;
	OUT = a2*100+a1*10+a3;
	cout << OUT << endl;
}
*/


/*
int main() {
	int N, h;
	cin >> N;
	h = N / 3600;
	cout << h <<" full hour";
}
*/

/*
int main() {
	int N, m, h;
	cin >> N;
	h = N % 3600;
	m = h / 60;
	cout << m <<" full minute";
}
*/


/*
int main() {
	int K;
	float n;
	cin >> K;
	n = (K % 7) + 1;
    if (n == 1) { cout << "2"; }
	else if (n == 2) { cout << "3"; }
	else if (n == 3) { cout << "4"; }
	else if (n == 4) { cout << "5"; }
	else if (n == 5) { cout << "6"; }
	else if (n == 6) { cout << "7"; }
	else if (n == 7) { cout << "1"; }
}
*/


/*
int main() {
	int K, N;
	float n;
	cin >> K >> N;
	n = (K % 7) + 1;
	if (n == 1) { cout << N % 7; }
	else if (n == 2) { cout << (N + 1) % 7; }
	else if (n == 3) { cout << (N + 2) % 7; }
	else if (n == 4) { cout << (N + 3) % 7; }
	else if (n == 5) { cout << (N + 4) % 7; }
	else if (n == 6) { cout << (N + 5) % 7; }
	else if (n == 0) { cout << (N + 6) % 7; }
}
*/


/*
int main() {
	int a, b, c, n1, n2, o1, o2;
	cin >> a >> b >> c;
	n1 = a / c;
	n2 = b / c;
	o1 = n1 * n2;
	o2 = a * b - (o1 * c * c);
	cout << "Kvatrat " << o1 << endl;
	cout << "Kalgan plozod " << o2 << endl;
}



int main() {
	int n, s;
	cin >> n;
	s = (n + 100) / 100;
	cout << s << "vek";
}
*/
