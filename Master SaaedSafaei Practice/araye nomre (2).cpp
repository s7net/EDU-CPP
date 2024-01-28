#include <iostream>
using namespace std;
int main()
{  
    float a[30],sum=0,avr=0,n,c=0;
	for (int i=0;i<30;i++){
		cout << "nomre " << i+1 <<" om: ";
		cin >> a[i];
		sum=sum+a[i];
	}
   	avr=sum/30;
    cout << "1- Avrage= " << avr << endl;
    cout << "2- enter Your Number: ";
    cin >> n;
    for (int j=0;j<30;j++){
		if(n<a[j]) ++c;
	}
	cout << "2- Score More Than "<<n<<" = "<<c;
	return 0;
}



