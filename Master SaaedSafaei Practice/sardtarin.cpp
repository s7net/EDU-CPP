#include <iostream>
using namespace std;
int main()
{  
    int a[40],min=1000,cindex;
	for (int i=0;i<40;i++){
		cout << "Degree City " << i+1 <<": ";
		cin >> a[i];
		if(a[i]<min) {
			min=a[i];
			cindex=i;
		}
	}
    cout << "1- Index of Coldest= " << cindex << endl;
    cout << "2- Degree of Coldest= "<<min<<endl;
    for (int j=39;j>=0;j--){
		cout << "City["<<j+1<<"]="<<a[j]<<"\t";
	}

	return 0;
}



