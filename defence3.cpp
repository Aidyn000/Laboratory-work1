/*#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
int massiv[100], n, sum = 0, min, p=0;
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
    cout << "Summa = " << sum <<  endl;
    cout << "Index = " << min << endl;
    return 0;
    }
  

int a[100];
  int n , min = 10000 ;
  cout << "N : " ;
  cin >> n;
  for (int i = 1 ; i <= n ; i++)
    {
      cin >> a[i];
      }
  for (int i = 1 ; i <= n; i++ )
    {
      if (a[i] < min and a[i] % 2 == 0)
      {
        min = a[i];

      }
  
  }
  cout << min;
  }*/