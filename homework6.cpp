/*#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
 /* int N, D, A; // array 4
  int arr[] {N};
  cout << "N : ";
  cin >> N;
  cout << "A : ";
  cin >> A;
  cout << "D : ";
  cin >> D;
  for (int i = 0; i< N; i++)
    { arr[i] = A * pow ( D, i );
      cout << "A = " << arr[i] << endl;
      }
  }
int arr[10] {1,2,3,4,5,6,7,8,9,10};
int a, n, i;
cout << "N : ";
cin >> n;
for (i=0; i<n; i+=2){
    cout << " " << arr[i];
  }
  cout << endl;
for (i=1; i<n; i+=2)
    cout << " " << arr[i];
}

/*int a[10]; // array 16
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
    cout << a[i] << endl;
    cout << a[n-i-1] << endl;
      }
      }
/*
int a[11];
    int k;
    for (k=0; k<10; ++k)
      {         
      cout << "a[" << k+1 << "]";
        cin >> a[k];    
      }       
    for (k=0; a[k]>=a[9]; ++k);
 
    if (k==10)
      cout << 0 ;
    else 
      cout << a[k];
    return 0;
}


int a[11];
    int k;
    for (k=0; k<10; ++k)
      {         
       cout << "a[" << k << "]=";
       cin >> a[k]; 
      }       
     k = 9;
    while ((a[0]>=a[k]||a[k]>=a[9]) && (k>0))
    {
        --k;
    }
    if (k==0) cout << k;
      else cout << a[k];
    return 0;
}
int a[10];
int N , K , L, sum = 0;
cout << " N : ";
  cin >> N;
  cout << " K : ";
  cin >> K;
  cout << " L : ";
  cin >> L;
    int i;
    for (i=0; i<N; ++i){
     cout << "a[" << i+1 << "]";
        cin >> a[i];
    }
    for (int i=K-1; i<=L-1; ++i) sum+=a[i];
    cout << sum;
}

int a[10];  
int N , K , L, sum = 0;
cout << " N : ";
  cin >> N;
  cout << " K : ";
  cin >> K;
  cout << " L : ";
  cin >> L;
    int i;
    for (i=0; i<N; ++i){
     cout << "a[" << i+1 << "]";
    cin >> a[i];
    }
    for (int i=K-1; i<=L-1; ++i) sum+=a[i];
    cout << sum / (L-K+1);
  }

int a[10];
    int N , K , L, i;
  cout << " N : ";
  cin >> N;
  cout << " K : ";
  cin >> K;
  cout << " L : ";
  cin >> L;
    for (i=0; i<N; ++i){
     cout << "a[" << i << "]";
    cin >> a[i];
    }
 
    int sum=0;
    for (i=0; i<K-1; ++i) sum+=a[i];
    for (i=L; i<N; ++i) sum+=a[i];
    cout << sum;
    return 0;
}

int a[10];
    int N , K , L, i;
  cout << " N : ";
  cin >> N;
  cout << " K : ";
  cin >> K;
  cout << " L : ";
  cin >> L;
    for (i=0; i<N; ++i){
     cout << "a[" << i << "]";
    cin >> a[i];
    }
 
    int sum=0;
    for (i=0; i<K-1; ++i) sum+=a[i];
    for (i=L; i<N; ++i) sum+=a[i];
    cout << sum / (L-K+1);
  }

int a[10];
int n, i;
  cout << " N : ";
  cin >> N;
    for (i=0; i<n; ++i)
    {
    cout << "a[" << i+1 << "]";
    cin >> a[i];
    }

  int d=a[1]-a[0];
  for (i=1; i<n; ++i) {
  if (d != a[i]-a[i-1]) {
  d = 0;
  }
  }
  cout << " d = " << d << endl ;
  }
    


int a[10];
int n, i;
  cout << " N : ";
  cin >> n;
    for (int k=0; k<n; k++){
       cout << "a[" << k << "]=";
       cin >> a[k];}
    }

  int q=[1]/k[0];
  for (i=1; i<n; ++i) {
  if (q != a[i]/a[i-1] ) {
  q = 0;
  }
  }
  cout << " q = " << q << endl ;
  }
    
  
int a[10];
int n, i;
  cout << " N : ";
  cin >> n;
    for (i=0; i<n; ++i)
    {
    cout << "a[" << i+1 << "]";
    cin >> a[i];
    }
  
int k = a[0]%2;
 
    for (i=1; ((i<n) && (k != a[i]%2)); ++i) {
        k = a[i]%2;
    }
 
    if (i==n) {
        cout << 0;
    } else {
        cout << i+1;
    }
    return 0;
}



int a[10];
int n, i;
  cout << " N : ";
  cin >> n;
    for (i=0; i<n; ++i)
    {
    cout << "a[" << i+1 << "]";
    cin >> a[i];
    }

    int k = a[0]%2;
    for (i=1; ((i<n) && (k != a[i]%2)); ++i)    {
      k = a[i]%2;
    }
 
    if (i==n) {
        cout << 0;
    } else {
        cout << i + 1;
    }
    return 0;
  

  }

int a[100];
int n, i;
  cout << " N : ";
  cin >> n;
    for (i=0; i<n; ++i)
    {
    cout << "a[" << i+1 << "]";
    cin >> a[i];
    }
    int min = a[1];
 
    for (i=0; i<n; i+=2) {
        if (a[i]>min) min=a[i];
    }
 
    cout << min;
 
    return 0;
}

int a [100];
int n, i;
  cout << " N : ";
  cin >> n;
    for (i=0; i<n; ++i)
    {
    cout << " a[" << i+1 << "] = ";
    cin >> a[i];
    }

  int el = 0;
 
    for ( i=n-1 ; i>=1; --i) {
        if (a[i]>a[i-1]) {
        cout << i + 1;
        ++el;
        }
      }
    cout << el;
    return 0;
}*/
