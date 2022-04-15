/*#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
  int a , P;
  cin >> a;
  P = 4 * a;
  cout << "P =" << P << endl;
}

int a , S;
cin >> a;
S = pow(a,2);
cout << "S=" << S << endl;
}


int a, b, P, S;
cin >> a >> b;
S = a * b;
P = 2 * (a+b);
cout << "S =" << S << endl;
cout << "P =" << P << endl;
}



int d;
cin >> d;
cout << "L =" << 3.14 * d << endl;
}


int a, V, S;
cin >> a;
V = pow(a,3);
S = 6 * pow(a,2 );
cout << "V=" << V << endl;
cout << "S=" << S << endl;
}


int a, b ,c ,V , S;
cin >> a >> b >> c;
V = a * b *c;
S = 2 * (a * b + b * c + a * c);
cout << "V =" << V << endl;
cout << "S =" << S << endl;
}


double R, L, S;
cin >> R;
L = 2 * 3.14 * R;
S = 3.14 * pow(R,2);
cout << "L=" << L << endl;
cout << "S=" << S << endl;
}


int a, b, A;
cin >> a >> b;
A = (a + b)/2;
cout << "A=" << A << endl;
}


int a, b;
cin >> a >> b;
cout << "L=" << sqrt(a*b) <<endl;
}

double a, b, A, B, C, D;
cin >> a >> b;
A = a + b;
B = a - b;
C = a * b;
D = pow(a,2) / pow(b,2);
cout << "A =" << A << endl;
cout << "B =" << B << endl;
cout << "C =" << C << endl;
cout << "D =" << D << endl;
}


double a, b, A, B, C, D;
cin >> a >> b;
A = a + b;
B = a - b;
C = a * b;
D = a / b;
cout << "A = " << A << endl;
cout << "B = " << B << endl;
cout << "C = " << C << endl;
cout << "D = " << D << endl;
}


double a, b, c, P;
cin >> a >> b;
c = sqrt(pow(a,2) + pow(b,2));
cout << " c = " << c << endl;
P = a + b + c;
cout << " P = " << P << endl;
}


double R1, R2, S1, S2, S3, pi;
cin >> R1 >> R2;
pi = 3.14;
S1 = pi * pow(R1 , 2);
S2 = pi * pow(R2 , 2);
S3 = S1 - S2;
cout << "S1 = " << S1 << endl;
cout << "S2 = " << S2 << endl;
cout << "S3 = " << S3 << endl;
}


float L, R, S, pi;
cin >> L;
pi = 3.14;
R = L / 2 * pi;
cout << " R = " << R << endl;
S = pi * pow(R , 2);
cout << " S = " << S << endl;
}


double S, D, L, pi;
cin >> S;
pi = 3.14;
L = pi * sqrt(4 * S / pi);
D = sqrt(4 * S / pi);
cout << " L = " << L << endl;
cout << " D = " << D << endl;
}


int x1, x2, x;
cin >> x1 >> x2;
x = abs(x2 - x1);
cout << " x = " << x << endl;
}


int A, B, C, AC , BC, dlina, summa;
cin >> A >> B >> C;
BC = C - B ;
AC = C - A ;
dlina = AC - BC;
summa = AC + BC;
cout << "dlina = " << dlina << endl;
cout << "summa = " << summa << endl;
}


int A, B ,C , AC , BC, D;
cin >> A >> B; 
C = A - B;
AC = C - A;
BC = C - B;
D = AC * BC;
cout << "D = " << D << endl;
}


double x1, y1, x2, y2, diagonal, a, P, S;
cin >> x1 >> y1 >> x2 >> y2 ;
diagonal = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
a = diagonal / sqrt(2);
P = 4 * a;
S = pow(a , 2);
cout << "P = " << P << endl;
cout << "S = " << S << endl;
}

  
float x1, y1, x2, y2, d;
cin >> x1 >> y1 >> x2 >> y2;
  d = sqrt(pow((x2 - x1 ), 2) + pow((y2 - y1), 2));
  cout << "d = " << d << endl;
  }


int x1, y1, x2, y2, x3, y3;
float A , B , C, P, S;
cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
A = sqrt (pow(x2-x1,2))+ (pow(y2-y1,2));
B = sqrt (pow(x2-x3,2))+ (pow(y2-y3,2));
C = sqrt (pow(x1-x3,2))+ (pow(y1-y3,2));
P = (A+B+C)/2;
S = sqrt(P*(P-A)*(P-B)*(P-C));
cout << "S=" << S << endl;
}


 int A , B;
  cin >> A >> B ;
  cout << "B = " << A << endl;
  cout << "A = " << B << endl;
  }


int A, B, C;
cin >> A >> B >> C;
cout << "A = " << B << endl;
cout << "B = " << C << endl;
cout << "C = " << A << endl;
  }


int A, B, C;
  cin >> A >> B >> C;
  cout << "A = " << C << endl;
  cout << "B = " << A << endl;
  cout << "C = " << B << endl;
  }


int x, y;
  cin >> x;
  y = 3 * pow(x , 6) - 6 * pow(x , 2) - 7;
  cout << "y = " << y << endl;
  }


int x, y;
  cin >> x;
  y = 4 * pow ( ( x - 3 ), 6 ) - 7 * pow ( ( x - 3 ) , 3 ) + 2;
  cout << "y = " << y << endl;
  }


int A;
  cin >> A;
  pow ( A , 2 );
  pow ( A , 4 );
  pow ( A , 8 );
  cout << " A^2 : " << pow ( A , 2 ) << endl;
  cout << " A^4 : " << pow ( A , 4 ) << endl;
  cout << " A^8 : " << pow ( A , 8 ) << endl;
  }


int A;
cin >> A;
  pow ( A , 2);
  pow ( A , 3);
  pow ( A , 5);
  pow ( A , 10);
  pow ( A , 15);
cout << " A^2 = " << pow ( A , 2) << endl;
cout << " A^3 = " << pow ( A , 3) << endl;
cout << " A^5 = " << pow ( A , 5) << endl;
cout << " A^10 = " << pow ( A , 10) << endl;
cout << " A^15 = " << pow ( A , 15) << endl;
}


float a , pi, grad, radian;
cin >> a;
pi = 3.14;
grad = 180;
radian = (a * pi) / grad;
cout << " radian = " << radian << endl;
}


float aradian, pi, grad, grad1;
cin >> aradian ;
if( 0 < aradian < 2 * pi);
pi = 3.14;
grad = 180;
grad1 = (aradian * grad) / pi;
cout << " grad1 = " << grad1 << endl;
}


double TF, TC;
cin >> TF;
TC = (( TF - 32 ) * 5) / 9;
cout << " TC = " << TC << endl;
}


double TF , TC ;
cin >> TC;
TF =( ( 9 * TC ) / 5 ) + 32;
cout << "TF = " << TF << endl;
}


float X, A, Y, PK , PYK;
cin >> X >> A >> Y;
PK = A / X;
PYK = Y * PK;
cout << " Per to Y kilogram = " << PYK << endl;
cout << " Per to 1 kilogram = " << PK << endl;
}


float X, Y, A, B, PCSto1kg, PTto1kg , HMTME;
cin >> X >> A >> Y >> B;
PCSto1kg = A / X;
PTto1kg = B / Y;
HMTME = PCSto1kg / PTto1kg;

cout << "Price chocolate sweet for one kilogram = " << PCSto1kg << endl;

cout << "Price toffee for one kilogram = " << PTto1kg << endl;

cout << "How many times chocolate sweet is more expensive than toffee = " << HMTME << endl;
}


float V, U, T1, T2, S, Vcons;
cin >> V >> U >> T1 >> T2;
Vcons = V - U;
S = Vcons * T2 + V * T1;
cout << "S = " << S << endl;
}


float V1, V2, S, T, Safter, S1, S2;
cin >> V1 >> V2 >> S >> T;
S1 = V1 * T;
S2 = V2 * T;
Safter = S + S1 + S2;
cout << " S after T time equals to " << Safter << " kilometers " << endl;
}


float V1, V2, S, T, Safter, S1, S2;
cin >> V1 >> V2 >> S >> T;
S1 = V1 * T;
S2 = V2 * T;
Safter = S - ( S1 + S2 );
cout << " S after T time equals to " << Safter << " kilometers" << endl;
}


float A , x , B;
cin >> A >> B;
if ( A > 0) ;
x = -B / A;
cout << " x = " << x << endl ;
}

float A, B, C, D, x1, x2;
cin >> A >> B >> C;
D = pow ( B , 2 ) - 4 * A * C;
x1 = ( -B - sqrt ( D ) ) / ( 2 * A );
x2 = ( -B + sqrt ( D ) ) / ( 2 * A );
cout << " x1 = " << x1 << endl;
cout << " x2 = " << x2 << endl;
}


float A1, B1, C1, A2, B2, C2, D, x, y;
cin >> A2 >> B2 >> C2 >> A1 >> B1 >> C1 ;
D = ( A1 * B2 ) - ( A2 * B1 ) ;
x = ( ( C1 * B2 ) - ( C2 * B1 ) ) / D ;
y = ( ( A1 * C2 ) - ( A2 * C1 ) ) / D ;
cout << " x = " << x << endl;
cout << " y = " << y << endl;
}*/


 
