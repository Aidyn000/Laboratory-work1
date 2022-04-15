/*#include <cmath>
#include <iostream>
#include <string>
using namespace std;
int main() {

  
/* int a, b ,c , max , min ; // if 14
   cout << " a : " ;
   cin >> a;
   cout << " b : " ;
   cin >> b;
   cout << " c : " ;
   cin >> c;
   if ( a > b && a > c) max = a;
   else if ( b > a && b > c) max = b;
   else max = c;

   if ( a < b && a < c) min = a;
   else if ( b < a && b < c) min = b;
   else min = c;
   cout << "max = " << max << endl ;
   cout << "min = " << min << endl ;
   }*/

/* int a , b ,c, sum, max , maxmin;//if 15
 cout << " a : " ;
 cin >> a;
 cout << " b : " ;
 cin >> b;
 cout << " c : " ;
 cin >> c;

 if ( a > b && a > c) max = a;
 else if ( b > a && b > c) max = b;
 else max = c;
   if ( a > b && b < c) maxmin = c;
   else if ( b > c && b < a) maxmin = a;
   else maxmin = b;

   sum = max + maxmin;
   cout << " sum = " << sum << endl ;
   }*/

/* int a, b, c, d, m;//if 19
   cout << " a :" ;
   cin >> a ;
   cout << " b :" ;
   cin >> b;
   cout << " c :" ;
   cin >> c;
   cout << " d :" ;
   cin >> d;

   if ( a == b && b == c) m = 4;
   else if ( a == b && a == d) m = 3;
   else if ( a == c && a == d) m = 2;
   else if ( b == c && b == d) m = 1;
   cout << " m = " << m << endl;
   }*/

  /*int a, b, c; //if 20
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


 int x, y;// if 21
   cout << "x = " ;
   cin >> x;
   cout << "y = " ;
   cin >> y;

   if ( x == 0 && y == 0)
     cout << " 0 " ;
   else if ( y == 0)
     cout << " 2 " ;
   else if ( x == 0 )
     cout << " 1 " ;
   else cout << " 3 " << endl;
   }

 int x, y;// if 22
   cout << " x = ";
   cin >> x;
   cout << " y = ";
   cin >> y;

   if ( x > 0 && y > 0 )
     cout << " quarter 1 " ;
   else if ( x > 0 && y < 0 )
     cout << " quarter 3 ";
   else if ( x < 0 && y > 0 )
     cout << " quarter 2 ";
   else cout << " quarter 4 " << endl;
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



   double x; // if 24
   double f ;
   cout << " x = " ;
   cin >> x;
   if ( x > 0) f = 2 * sin(x) ;
   else f = 6 - x;
     cout << " f = " << f << endl;
   }


 int f, x; // if 25
   cout << " x = " ;
   cin >> x ;
   if ( x < -2 ) f = 2 * x;
   else if  ( x > 2 ) f = 2 * x;
   else f = -3 * x;
   cout << " f = " << f << endl;
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



 /*int a;// if 29
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
   }*/


 /*int n ; // if 30
   cout << " the number lying in the range 1-999 = " ;
   cin >> n;
   if ( n % 2 == 0 )
     cout << " even number " << endl;
   else
     cout << " odd number " << endl;

   if ( n >= 100 && 999 > n )
     cout << " three digit " << endl;
   else if ( 10 <= n && n < 100 )
     cout << " two digit " << endl;
   else if ( n > 0 && n < 10)
     cout << " one digit " << endl;
   }*/

 /* int N1, N2;//case 11
  char C;
  cout << " C = ";
  cin >> C;
  cout << " N1 = ";
  cin >> N1;
  cout << " N2 = ";
  cin >> N2;
  switch (C)
    {
      case 'c':
        switch (N1+N2) {    
          case -1 :
          case 3:
             C = 'e' ;
    break;
  case 1:
     C = 'w';
    break;
  case 2 :
    case -2 :
    C = 's';
    break;
  }
    break;
    case 'e':
  switch (N1+N2) {
  case 1:
    C = 'n';
    break;
  case -1: 
    case 3 :
    C = 's';
    break;
  case 2:
    case -2 :
    C = 'w';
    break;
  }
    break;
    case 's' :
    switch (N1 + N2) {
      case 1 :
      C = 'e' ;
      break;
      case -1:
      case 3:
      C = 'w' ;
      break;
      case 2:
      case -2:
      C = 'n' ;
      break;
    }
    break;
    case 'w' :
    switch (N1+N2) {
      case 1:
      C = 's';
      break;
      case -1:
      case 3:
      C = 'n' ;
      break;
      case 2:
      case -2 :
      C = 'e' ;
      break;
    }
      }
  cout << "C = " << C << endl;
  
  }

int N, M;
  cout << " number = ";
  cin >> N;
  cout << " mast = ";
  cin >> M;
  switch (M) {
  case 6:cout << " 6 ";
			break;
		case 7:cout << " 7 ";
			break;
		case 8:cout << " 8 ";
			break;
		case 9:cout << " 9 ";
			break;
		case 10:cout << " 10 ";
			break;
		case 11:cout << " jack ";
			break;
		case 12:cout << " lady ";
			break;
		case 13:cout << " king ";
			break;
		case 14:cout << " ace ";
			break;
    }
      switch (N) {
    case 1 :
    cout << "peak" ;
    break;
    case 2:
    cout << "club" ;
    break;
    case 3:
    cout << "diamond";
    break;
    case 4:
    cout << "heart";
    break;
    
      }
  }
*/