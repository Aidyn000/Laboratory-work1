/*#include <iostream>
#include <math.h>
#include <time.h>
#include <random>
using namespace std;
/*Matrix27. Дана матрица размера M × N. Найти максимальный 
среди минимальных элементов ее строк.


int main() {
  
	/*int arr[100][100];
	int n, m;
	cin >> n >> m;
	srand(time(0));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			arr[i][j] = rand() % 10;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		int max = 0;
		for (int j = 0; j < m; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
			}
		}
			cout << max << "  ";	
	}
}*/

/*
int i,j,N,M,a[20][20];
cout<<"N="; 
cin>>N;
cout<<"M="; 
cin>>M;
cout<<"Input matrix A \n";
for (i=0; i<N; i++)
for (j=0; j<M; j++)
cin>>a[i][j];
cout<<"matrix A \n";
for (i=0; i<N; i++)
  {
for (j=0; j<M; j++)
cout<<a[i][j]<<"\v"; 
cout<<endl;
}
system("pause");
return 0;
}
*/
 
  
  /*int pr, i, j, N, a[20][20];
cout<<"N="; cin>>N;
cout<<"Введите матрицу А \n";
for (i=0; i<N; i++)
for (j=0; j<N; j++)
cin>>a[i][j];
//предположим, что матрица единичная, и присвоем переменной pr значение 1
//если значение этой переменной при выходе из цикла не измениться,
//это будет означать, что матрица действительно единичная
for (pr=1, i=0; i<N; i++)
for (j=0; j<N; j++)
if (((i==j) && (a[i][j]!=1)) || ((i!=j) && (a[i][j]!=0)))
//если элемент лежит на главной диагонали и не равен единице или
//элемент лежит вне главной диагонали и не равен нулю, то
{
//переменной pr присвоить значение 0, это будет означать, что
//матрица единичной не является, и выйти из цикла.
pr=0;
break;
}
//проверка значения переменной pr и вывод соответствующего сообщения
if (pr) cout<<"Single matrix"<<endl;
else cout<<"No single matrix"<<endl;
system("pause");
return 0;
}*/

/*srand(time(0));
    int H, W, max_index, min_index;
   cout << "Введите H: ";
   cin >> H;
   cout << "Введите W: ";
   cin >> W;
   cout << "\n";
    double max, min;
    double M = new double*[H];
    for(int i = 0; i < H; i++)
        M[i] = new double[W];
 
    for(int i = 0; i < H; i++)
    {
        for(int j = 0; j < W; j++)
        {
            M[i][j] = (double)(rand() % 5);
            std::cout << M[i][j];
        }
        std::cout << "\n\n";
    }
 
    max = min = M[0][0];
 
    for(int i = 0; i < H; i++)
    {
        for(int j = 0; j < W; j++)
        {
            if(max < M[i][j])
            {
                max = M[i][j];
                max_index = i;
            }
 
            if(min > M[i][j])
            {
                min = M[i][j];
                min_index = i;
            }
        }
    }
 
    if(max_index == min_index)
        std::cout << "\nMax and Min elements are on the same row\n\n";
    else
    {
        for(int i = 0; i < W; i++)
            std::swap(M[max_index][i], M[min_index][i]);
 
        std::cout << "\nПосле того как поменял\n\n";
 
        for(int i = 0; i < H; i++)
        {
            for(int j = 0; j < W; j++)
                std::cout << M[i][j];
            std::cout << "\n\n";
        }
    }
 
    for(int i = 0; i < H; i++)
        delete [] M[i];
    delete M;
 
    system("pause");
  }
*/
  /*int N , M;
  cin >> N >> M ;
int masiv[N][M],i,j,b=0,k=0;
for (i=0;i<N;i++)
{
  for(j=0;j<M;j++)
    {
      masiv[i][j]=rand()%11;
    cout<<masiv[i][j]<<"\t";
      }
     cout<<endl;
  }
    for (i=0;i<N;i++)
     for(j=1;j<M;j++)
    {
      if(masiv[i][j]!=masiv[i][j-1])
    {
      k++;
    if(k==M-1)
    {
        b++;
    k=0; 
    }
     }
    }
    cout  <<  "  b  =  "  <<  b  <<  endl;
  }*/


    
 /*
   int n, arr[50][50], min, max;
    cout << "Massiv: ";
    cin >> n;
  srand(time(0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           	arr[i][j] = rand() % 10;
        }
    }
    cout << "before massiv: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == min)
                arr[i][j] = max;
            else if (arr[i][j] == max)
                arr[i][j] = min;
        }
    }
    cout << "after massiv: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << "   ";
        }
        cout << '\n';
    }
    cout << "Min: " << min << endl;
    cout << "Max " << max << endl;
   
}
*/

/*int m;
    cin >> m;
    vector<vector<int> > a(m, vector<int> (m));
    for(int i = 0; i < m; ++i)
        for(int j = 0; j < m; ++j)
            cin >> a[i][j];
    for(int i = 0; i < a.size()/2; ++i){
        for(int j = 1 + i; j < a.at(i).size() - 1 - i; ++j){
            a[i][j] = 0;
        }
    }
    for(auto i: a){
        for(auto j: i){
            cout << j << ' ';
        }
        cout << endl;
    }
    return 0;
}



int M, N;
int arr[M][N];
 srand(time(0));
int i,j,max,k,s;
char flag;
  cin >> N;
  cin >> M;
for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			arr[i][j] = rand() % 10;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

meniaem 
for(j=0;j<M;j++)
{
int max=arr[j][0];
k=0;
for(i=0;i<N-1;i++)
{
if(max<arr[j][i+1])
{
k=i+1;//nomer stolbca s max elem
max=arr[j][k];//maksimal'nii element v stroke
}
}
max element v j-i stroke A[j][k]
 sravnivaem s drygimi elem stolbca
for(s=0;s<M;s++)
if(max>arr[s][k])
{
flag=0;
break;
}
else flag=1;
if(flag)
{
printf("\nA[%d][%d]=%d-tot samii elem",j,k,arr[j][k]);
break;
}
else flag=-1;
}
if(flag==-1) printf("\n\t0",j);
}*/

