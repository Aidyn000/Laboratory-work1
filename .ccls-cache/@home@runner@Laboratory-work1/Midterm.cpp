/*#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#include <iostream>
using namespace std;
int main() {
int massiv[100], n, sum = 0, count = 0, min, p=0;
cout << "Enter N and array[i] elements = ";
cin >> n;
for (int k = 0; k < n; k++) 
    {
  cin >> massiv[k];
    }
    min = massiv[0];
    p = 0;
for (int e = 1; e < n; e++)
    {
    if (min > massiv[e]) min = massiv[e];
    if (min == massiv[e]) p = e;
    }
    sum = p + min;
    cout << "Summa = " << sum << endl;
    return 0;
    }

/*
double a, b, c, x1, x2, x0, D;
    cout << "Enter a = ";
    cin >> a ;
    cout << "Enter b = ";
    cin >> b;
    cout << "Enter c = ";
    cin >> c;
    D = pow(b, 2) - (4 * a * c); 
if ( 0 < D )
    {
x1 = (-b - sqrt(D)) / (2 * a);
x2 = (-b + sqrt(D)) / (2 * a);
   
cout << " x1 = " << x1 << endl;
cout << " x2 = " << x2 << endl;
    }
else if ( D == 0 )
    {
x0 = (-b + sqrt(D)) / (2 * a);
    
cout << "x0 = " << x0 << endl;
    }
    else 
    {
    cout << "D табу мүмкін емес";
    }
    }
*/
/*
float a1, a2, a3 ,a4, a5, a6, a7, a8 , a9 , a10, sum = 0;
  cout << "a1: ";
  cin >> a1;
  cout << "a2: ";
  cin >> a2;
  cout << "a3: ";
  cin >> a3;
  cout << "a4: ";
  cin >> a4;
  cout << "a5: ";
  cin >> a5;
  cout << "a6: ";
  cin >> a6;
  cout << "a7: ";
  cin >> a7;
  cout << "a8: ";
  cin >> a8;
  cout << "a9: ";
  cin >> a9;
  cout << "a10: ";
  cin >> a10;
  sum = pow(a1, 1) + pow(a2, 2) + pow(a3, 3) +
        pow(a4, 4) + pow (a5, 5) + pow (a6, 6) + 
        pow (a7, 7) + pow(a8,8) + pow (a9, 9) + 
        pow(a10, 10);
cout << " sum = " << sum << endl;
  }
*/