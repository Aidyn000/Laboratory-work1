#include <iostream>
#include <math.h>
#include <random>
#include <time.h>
using namespace std;
int main() {
 /*int n,i,ni,max; ///  MinMax  30
  cout << "N : ";
  cin >> n;
  int min=n,num=0;
    for (i=1; i<=n; ++i)
        {
        cout << i << ") ";
        cin >> ni;
        if(( i==1 ) || (ni > max))
           {
            max = ni;
            num = 0;
            min = n;
           }
        if (ni==max) ++num;
        else
            {
            if (num<min) min=num;
            num=0;
            }
    }
    if ((num<min)&&(ni==max)) min=num;

    cout << "Minimal number of maximal elements equals to = " << min;

}*/

/*
int i , n , m; // MinMax 25
  float n1 = 0 , n2 = 0 , minm = 0;
  cout << " N : ";
  cin >> n;
  for (i = 1 ; i <= n; i++)
    {
      n2 = n1;
      cout << i << ") ";
      cin >> n1;
      if (i == 2 || n1 * n2 < minm)
         {
           minm = n2 * n1;
           m = i;
         }
    }
  cout << "index = " << (m-1) << "\n";
  cout << "index = " << m << "\n";

  }


int n,maxi,mini,i,r,min,max;
  cout << "N : ";
  cin >> n;
    for (i=1; i<=n; ++i){
        cout << i << ") ";
        cin >> r;
        if ((r<min)||(i==1))
        {
            min=r;
            mini=0;
        }

        if ((r>max)||(i==1))
        {
            max=r;
            maxi=0;
        }

        if (r==min) ++mini;
        else if (r==max) ++maxi;

    }
    cout << "i = " << mini + maxi << endl;
  }


void swap(int &x, int &y) {
  if (x != y) {
    x += y;
    y = x - y;
    x -= y;
  }
}

int main(void) {
  int a[10][10];
  int m, n;

  cout << " N : ";
  cin >> n;
  cout << " M : ";
  cin >> m;

  int i, j;
  for (i = 0; i < m; ++i) {
    cout << i + 1 << "\n";
    for (j = 0; j < n; ++j) {
      cout << j + 1 << ": ";
      cin >> a[i][j];
    }
  }

  for (i = 0; i < m / 2; ++i) {
    for (j = 0; j < n / 2; ++j)
      swap(a[i][j], a[m / 2 + i][n / 2 + j]);
  }

  for (i = 0; i < m; ++i) {
    for (j = 0; j < n; ++j)
      cout << a[i][j] << " : ";
    cout << " : "
         << "\n";
  }
  return 0;
  }*/

int a[10][10];
int m,n;
    cout << "M : ";
    cin >> m;
    cout << "N : ";
    cin >> n;
int i,j;
    for (i=0; i<m; ++i)
    {
        cout << i+1 << ") " << "\n";
        for (j=0; j<n; ++j)
        {
            cout << j+1 << " : ";
            cin >> a[i][j];
        }
    }
 
    int max,min;
 
    for (j=0; j<n; ++j)
    {
        max=min=0;
        for (i=1; i<m; ++i)
        {
            if (a[i][j]>a[max][j]) max=i;
            if (a[i][j]<a[min][j]) min=i;
        }
       a[min][j] = a[max][j]+a[min][j];
       a[max][j] = a[min][j]-a[max][j];
       a[min][j] = a[min][j]-a[max][j];
    }
 
    for (i=0; i<m; ++i){
        for (j=0; j<n; ++j) 
          cout << a[i][j] << " : ";
          cout << "\n";
           }
    return 0;
}