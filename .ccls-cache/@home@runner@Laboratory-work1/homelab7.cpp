/*#include <iostream>
#include <cmath>
using namespace std;
/*int main() {
int a[10];
int n, i;
cout << " N : ";
cin >> n;
for (i=0; i<n; ++i)
      {
    cout << "a[" << i+1 << "] = ";
    cin >> a[i];
      }
for ( i=0 ; i<n/2; i++)
      {
    cout << a[n-i-1] << " " ;
    cout << a[i] << " ";
      }
      }




/*
int a[50], n, min, index;
cin >> n;
for (int i = 0; i < n; i++) {
cin >> a[i];
}
for (int i = 0; i < n; i++) {
min = a[i];
index = i;

for (int j = i + 1; j < n; j++) {
if (a[j] < min) {
min = a[j];
index = j;
}
}
int temp = a[i];
a[i] = a[index];
a[index] = temp;
}
for (int i = 0; i < n; i++) {
cout << a[i] << " ";
}

}
*/

/*void insert(int arr[], int n) {
    int value, index;

 

    for (int i = 1; i < n; i++)
    {
        value = arr[i];
        index = i;
        
        while (index > 0 && arr[index - 1] > value)
        {
            arr[index] = arr[index - 1];
            index--;
        }
        arr[index] = value;
    }
}
int main()
{
    int a[50], n, index;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    insert(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }  
}*/
/*

int main() {

    int n;
    cout << "N: ";
    cin >> n;
   vector<int>arr(n);
   for (int i = 0; i < n; i++) 
    {
    cout << "arr[" << i+1 << "]= ";
    cin >> arr[i];
    }

    int a;

    for (int i = 0; i < n - 1; i++) {

    for (int j = 0; j < n - i - 1; j++) {

    if (arr[j] > arr[j + 1]) {

    a = arr[j];

    arr[j] = arr[j + 1];

    arr[j + 1] = a;

    }

    }

    }
    
    int q = 3, e = 3;

    for (int i = n - 1; i > 0; i--) {

    if (arr[i] == arr[i - 1] and e > 0) { 
    q++; }

    else { e--; }

    }

    cout << " places : " << q;

}
*/


/*int aaaa(int x, int y) {
    if (x < y)
    { 
      return y;
    }
    else 
    {
      return x;
    }
}


int main() {
    int p;
  cout << " P : " ;
    cin >> p;
    int n = 2 * p;
    vector<int>arr(n + 5);
    for (int i = 1; i <= n; i++)
    {
     cout << i << ")";
      cin >> arr[i];
    }


    vector<int>out(n + 5, -1);
    for (int i = 1; i <= n; i = i + 2) {
        out[i] = aaaa(arr[i], arr[i + 1]);
    }

    for (int i = n; i >= 1; i--) {
        if (out[i] > 0) { cout << out[i] << " "; }
    }
}*/










/*void Swap( float x, float y ) {
    float tmp;
    tmp = x;
   x = y;
   y = tmp;
    return;
}
 
int main(void)// 10
{
    float a,b,c,d;
  cout << "A : " ;
  cin >> a;
  cout << "B : " ;
  cin >> b;
  cout << "C : " ;
  cin >> c;
  cout << "D : " ;
  cin >> d;
 
  swap ( a , b );
  swap ( c , d );
  swap ( b , c );
  cout << "A = " << a << endl;
  cout << "B = " << b << endl;
  cout << "C = " << c << endl;
  cout << "D = " << d << endl;
    return 0;
}
*/


/* float TriangleP(float a , float h ) // 20
{ float b;
 return b = 2* sqrt ( pow ( (a/2) , 2 ) + pow ( h , 2 ) ) + a;
  float p;
  return p = 2*b + a;
  }
int main (void) 
{
 float a = 15 , h = 10;
  cout << "P : "<< TriangleP (a,h); 
 }
*/


/*int digitn(int k, int n)
{
  for ( int i = 1; i<=n-1 ; i++)
  k = k / 10;
  if (k != 0) 
    return k%10;
  else
    return -1;
}
int main (void) 
{
  int k;int digitn(int k, int n)
{
 for ( int i = 1; i<=n-1 ; i++)
  k = k / 10;
  if (k != 0) 
    return k%10;
  else
    return -1;
}
int main (void) 
{
  int k;
  for (int i=1 ; i<=5; i++)
    {
      cout << " K : " ;
      cin >> k ;
      for (int j=1 ; j<=5 ; j++)
        cout << "DigitN = " << digitn(k,j) << endl; 
    }
  for (int i=1 ; i<=5; i++)
    {
      cout << " K : " ;
      cin >> k ;
      for (int j=1 ; j<=5 ; j++)
        cout << "DigitN = " << digitn(k,j) << endl; 
    }
}*/
/*
float power1(float a, float b){ //37
    return a=exp(b*log(a));
}
 
int main(void)
{
    float p,a,b,c;
    cout << " P : " ;
    cin >> p;
    cout << " A : " ;
    cin >> a;
    cout << " B : " ;
    cin >> b;
    cout << " C : " ;
    cin >> c;
cout << "pow A = " << power1(a,p) << endl;
cout << "pow B = " << power1(b,p) << endl;
cout << "pow C = " << power1(c,p) << endl;
  
}


int IsLeapYear(int y)
{  int result;
if (y%4 == 0 && y%100 == 0 && y%400 != 0)
    result = false;
  else
    result = true;
  return result;
  }
int main (void)
{
 int a[5] { 2016,300, 1300, 1900, 2000};
  int result;
  for (int i =0 ; i<5; i++)
    {
      cout << result << " ";
    }
}


#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp;
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n / 2; i++)
    {
        cout << arr[n - i - 1] << " " << arr[i] << " ";
    }
}*/