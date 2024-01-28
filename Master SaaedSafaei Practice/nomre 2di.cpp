#include <iostream>
using namespace std;
int main()
{  
	int a[2][10],n,s;
	for (int i=0; i<10; i++)
	{  
		cout << "StdNo " << i+1 << ": ";
		cin >> a[0][i];
		cout << "Nomre " << i+1 << ": ";
		cin >> a[1][i];
	}
	cout << "Your STDNO= ";
	cin >> n;
	
	cout << "StdNo\tNomre"<<endl;
	for (int j=0; j<10; j++)
	{  
		cout << a[0][j] <<"\t"<< a[1][j]<<endl;
		if (a[0][j]==n) s=a[1][j];
	}
	cout <<endl<<"\t Youre Score = "<< s;	
}




