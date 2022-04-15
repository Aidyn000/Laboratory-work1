/*#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main () {
  /*int a, b, c, d = 0;// if 4
  cout << " a = " ;
  cin >> a;
  cout << " b = " ;
  cin >>  b;
  cout << " c = " ;
  cin >> c ;

  if ( a > 0 ) d++;
  
  if ( b > 0 ) d++;
 
  if ( c > 0 ) d++;

  cout << " d = " << d << endl;
}

int A, B , C;// if 10
cout << "A = " ;
cin >> A;
cout << "B = " ;
cin >> B;

if ( A != B ) {
C = A + B ;
cout << " A = " << A + C << endl;
cout << " B = " << B + C << endl;
}
else {
cout << " A = " << A << endl;
cout << " B = " << B << endl;
}
}

double A, B, C;// if 17
cout << " A = ";
cin >> A;
cout << " B = ";
cin >> B;
cout << " C = ";
cin >> C;

if ( A > B && B > C)

cout << "A = " << 2*A << " " 
<< "B = " << 2*B << " " 
<< "C = " << 2*C << endl;

else if ( B > A && A > C )

cout << "B = " << 2*B << " " 
<< "A = " << 2*A << " " 
<< "C = " << 2*C << endl;

else if ( C > B && B > A )

cout << "C = " << 2*C << " " 
<< "B = " << 2*B << " " 
<< "A = " << 2*A << endl;

else

cout << "A = " << -A << " " 
<< "B = " << -B << " " 
<< "C = " << -C << endl;
}


int a, b, c; //if 20
  cout << " a : ";
  cin >> a;

  cout << " b : ";
  cin >> b;
  
  cout << " c : ";
  cin >> c;

 if ( (a-b) > (a-c) ) {
   cout << " point b = " << b << endl;
   if ( a - b < 0 )
     cout << " ras b = " << (a-b) * -1 << endl;
   else if ( a - b > 0 )
     cout << " ras b = " << a-b << endl;
     }

   if ( (a-b) < (a-c) ) {
     cout << " point c = " << c << endl;
   if ( a - c > 0 )
     cout << " ras c = " << a-c << endl;
   else if ( a - c < 0 )
     cout << " ras c = " << (a-c) * -1 << endl;
     }
       }

       int x1, y1, x2, y2 , x3, y3; // if 23
   cout << " x1 = ";
   cin >> x1;
   cout << " y1 = ";
   cin >> y1;
   cout << " x2 = ";
   cin >> x2;
   cout << " y2 = ";
   cin >> y2;
   cout << " x3 = ";
   cin >> x3;
   cout << " y3 = ";
   cin >> y3;

   if ( x1 == x2 )
     cout << " x4 = " << x3 << endl;
   else if ( x1 == x3 )
     cout << " x4 = " << x2 << endl;
   else if ( x2 == x3 )
     cout << " x4 = " << x1 << endl;

   if ( y1 == y2 )
     cout << " y4 = " << y3 << endl;
   else if ( y1 == y3 )
     cout << " y4 = " << y2 << endl;
   else if ( y2 == y3 )
     cout << " y4 = " << y1 << endl;
   }


double f, x;// if 26
   cout << " x = " ;
   cin >> x;
   if ( x =< 0 ) f = -x;
   else if ( 0 < x < 2 ) f = pow ( x, 2 );
   else ( x >= 2) ; f = 4;
   cout << " f(x) = " << f << endl;
   }


 double x , f; // if 27
   cout << " x = " ;
   cin >> x
   if ( x < 0 ) f = 0;
   else if ( int(x) % 2 == 0) f = 1;
   else f = -1;
   cout << " f = " << f << endl;
   }


 int n , viskos , normal ;// if 28
 cout << " n = " ;
 cin >> n ;
   if ( n % 4 == 1) cout << " 365 " ;
   else cout << " 366 " << endl;
   }



 int a;// if 29
   cout << " a = " ;
   cin >> a ;
   if ( a > 0)
     cout << " positive " << endl;
   else cout << " negative " << endl;

   if ( a == 0)
     cout << "zero" << endl;

   if ( a % 2 == 0)
     cout << " even " << endl;
   else
     cout << " odd " << endl;
   }

int N; // case 5
double A, B;
cout << " N is lying in diapozone 1 - 4 : " ;
cin >> N;
cout << " A = " ;
cin >> A;
cout << " B = " ;
cin >> B;

switch (N) {
  case 1 :
  cout << " A + B = " << A + B << endl;
  break;
  case 2:
  cout << " A - B = " << A - B << endl;
  break;
  case 3:
  cout << " A * B = " << A * B << endl;
  break;
  case 4:
  cout << " A / B = " << A / B << endl;
  break;
}
}

int E;// case 7
double M;
cout << " E is lying in diapozone 1 - 5 : " ;
cin >> E ;
cout << " Mass = " ;
cin >> M ;

switch (E) {
  case 1 :
  cout << M << " to kilogram = " << M << " kg " << endl;
  break;
  case 2:
  cout << M << " milligram to kilogram = " << M / pow( 10 , 6) << " kg " << endl;
  break;
  case 3:
  cout << M << " gram to kilogram = " << M / 1000 << " kg " << endl;
  break;
  case 4:
  cout << M << " ton to kilogram = " << M * 1000 << " kg " << endl;
  break;
  case 5:
  cout << M << " hundredweight to kilogram = " << M * 100 << " kg " << endl;
  break;

}
}


int N , C;//case 10
cout << " C = " ;
cin >> C;
cout << " N = " ;
cin >> N;

switch (C) {
  case 'n' :
  switch (N) {
    case 1:
    C = 'w';
    break;
    case 0 :
    C = 'n';
    break;
    case -1:
    C = 'e';
    break;
  }
  case 'e':
  switch (N) {
    case 1:
    C = 'n';
    break;
    case 0 :
    C = 'e';
    break;
    case -1:
    C = 's';
    break;
    }
    case 's':
    switch (N) {
    case 1:
    C = 'e';
    break;
    case0:
    C = 's';
    break;
    case -1:
    C = 'w';
    break;
    }
    case 'w':
    switch (N) {
    case 1:
    C = 's';
    break;
    case 0:
    C = 'w';
    break;
    case -1:
    C = 'n';
    break;
    } 
    }
    cout << C << endl;
}

int a, R1, S, R2, n , z;// case 14
cout << " n = ";
cin >> n;
cout << " z = ";
cin >> z;

switch (n) {
  case 1:
  a = z;
  R1 = (a * sqrt(3)) / 6;
  R2 = 2 * R1;
  S = (pow(a,2) * sqrt(3)) / 4;
  cout << "R1 = " << R1 << endl;
  cout << "R2 = " << R2 << endl;
  cout << "S = " << S << endl;
  break;
  case 2:
  R1 = z;
  a = ( 6 * R1 ) / sqrt(3);
  R2 = 2 * R1;
  S = pow(a, 2) * sqrt(3) / 4;
  cout << " a = " << a << endl;
  cout << " R2 = " << R2 << endl;
  cout << " S = " << S << endl;
  break;
  case 3:
  R2 = z;
  a = (6 * R2) / 2 * sqrt(3);
  R1 = R2 / 2;
  S = (pow ((6 * R2) / 2 * sqrt(3) , 2) * sqrt(3) ) / 4;
  cout << " a = " << a << endl;
  cout << " R1 = " << R1 << endl;
  cout << " S = " << S << endl;
  break;
  case 4:
  S = z;
  a = sqrt ( ( 4 * S ) / sqrt ( 3 ) ) ;
  R1 = ((sqrt ( ( 4 * S ) / sqrt ( 3 ) )) * sqrt(3)) / 6;
  R2 = 2 * (((sqrt ( ( 4 * S ) / sqrt ( 3 ) )) * sqrt(3)) / 6);
  cout << " a = " << a << endl;
  cout << " R1 = " << R1 << endl;
  cout << " R2 = " << R2 << endl;
}
}
int n;// case 16 moi 
cout << "number is lying in diapozone 20 - 69 : ";
cin >> n;

switch (n) {
  case 20:
  cout << n;
  break;
  case 21:
  cout << n;
  break;
  case 22 :
  cout << n;
  break;
  case 23:
  cout << n;
  break;
  case 24:
  cout << n;
  break;
  case 25 :
  cout << n;
  break;
  case 26 :
  cout << n;
  break;
  case 27 :
  cout << n;
  break;
  case 28:
  cout << n;
  break;
  case 29 :
  cout << n;
  break;
  case 30 :
  cout << n;
  break;
  case 31 :
  cout << n;
  break;
  case 32 :
  cout << n;
  break;
  case 33 :
  cout << n;
  break;
  case 34 :
  cout << n;
  break;
  case 35 :
  cout << n;
  break;
  case 36 :
  cout << n;
  break;
  case 37 :
  cout << n;
  break;
  case 38 :
  cout << n;
  break;
  case 39 :
  cout << n;
  break;
  case 40 :
  cout << n;
  break;
  case 41 :
  cout << n;
  break;
  case 42 :
  cout << n;
  break;
  case 43 :
  cout << n;
  break;
  case 44 :
  cout << n;
  break;
  case 45 :
  cout << n;
  break;
  case 46 :
  cout << n;
  break;
  case 47 :
  cout << n;
  break;
  case 48 :
  cout << n;
  break;
  case 49 :
  cout << n;
  break;
  case 50 :
  cout << n;
  break;
  case 51 :
  cout << n;
  break;
  case 52 :
  cout << n;
  break;
  case 53 :
  cout << n;
  break;
  case 54 :
  cout << n;
  break;
  case 55 :
  cout << n ;
  break;
  case 56 :
  cout << n;
  break;
  case 57 :
  cout << n;
  break;
  case 58 :
  cout << n;
  break;
  case 59 :
  cout << n;
  break;
  case 60 :
  cout << n;
  break;
  case 61 :
  cout << n;
  break;
  case 62 :
  cout << n;
  break;
  case 63 :
  cout << n;
  break;
  case 64 :
  cout << n;
  break;
  case 65 :
  cout << n;
  break;
  case 66 :
  cout << n;
  break;
  case 67 :
  cout << n;
  break;
  case 68 :
  cout << n;
  break;
  case 69 :
  cout << n;
  break;
}
}

int n;// case 16 
cout << "number is lying in diapozone 20 - 69 : ";
cin >> n;

switch (n/10) {
case 2:
cout << " twenty";
break;
case 3:
cout << " thirty";
break;
case 4 :
cout << " fourty";
break;
case 5 :
cout << " fifty";
break;
case 6 :
cout << " sixty";
break;
}

switch (n % 10) {
  case 1:
  cout << " one ";
  break;
  case 2:
  cout << " two ";
  break;
  case 3:
  cout << " three ";
  break;
  case 4:
  cout << " four ";
  break;
  case 5:
  cout << " five ";
  break;
  case 6:
  cout << " six ";
  break;
  case 7:
  cout << " seven ";
  break;
  case 8:
  cout << " eight ";
  break;
  case 9: 
  cout << " nine ";
  break;
  
}
cout << " years old " << endl;
}

/*int n ;// case 19
cout << " n = ";
cin >> n;

switch (n % 10) {
  case 0 :
  case 1 :
  cout << " white ";
  break;
  case 2 :
  case 3 :
  cout << " black " ;
  break;
  case 4 :
  case 5 :
  cout << " green " ;
  break;
  case 6 :
  case 7 :
  cout << " yellow " ;
  break;
  case 8 :
  case 9 :
  cout << " red " ;
  break;
}
switch ((n+8) % 12) {
case 0:
cout << "rat " ;
break;
case 1:
cout << "cow ";
break;
case 2:
cout << "tiger ";
break;
case 3:
cout << "rabbit";
break;
case 4:
cout << "dragon " ;
break;
case 5:
cout << "snake " ;
break;
case 6:
cout << "horse ";
break;
case 7 :
cout << "sheep ";
break;
case 8 :
cout << "monkey ";
break;
case 9 :
cout << "chicken ";
break;
case 10 :
cout << "dog " ;
break;
case 11 :
cout << "pig " ;
break;
}
cout << "year" << endl;
}


int d, m;
cout << "day = ";
cin>>d;
cout << "month = ";
cin>>m;
switch (m) {
case 1:
if (d > 19)
cout << "Aquarius";
else 
cout << "Capricorn";
break;
case 2:
if (d > 18) 
cout << "Pisces";
else 
cout << "Aquarius";
break;
case 3:
if (d > 20) 
cout << "Aries";
else  
cout << "Pisces";
break;
case 4:
if (d > 19) 
cout << "Taurus";
else  
cout << "Aries";
break;
case 5:
if (d > 20) 
cout << "Gemini";
else  
cout << "Taurus";
break;
case 6:
if (d > 21)
cout << "Cancer";
else 
cout << "Gemini";
break;
case 7:
if (d > 22) 
cout << "Lion";
else 
cout << "Cancer";
break;
case 8:
if (d > 22) 
cout << "Virgin";
else 
cout << "Lion";
break;
case 9:
if (d > 22) 
cout << "Scales";
else 
cout << "Virgin";
break;
case 10:
if (d > 22) 
cout << "Scorpie";
else 
cout << "Scales";
break;
case 11:
if (d > 22)
cout << "Sagittarius";
else 
cout << "Scorpie";
break;
case 12:
if (d > 21)
cout << "Capricorn";
else 
cout << "Sagattarius";
break;
}
}*/