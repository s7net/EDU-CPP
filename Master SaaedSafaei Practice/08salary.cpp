#include <iostream>
using namespace std;

int main(){
 
 int hogough[30];
 double sum_h = 0, khales = 25200, tafazol, kosourat, ezafe;
 
 for (int i = 0; i < 30; i++){
  cout << "saat kari rooze " << i+1 <<" om: " ;
  cin >> hogough[i];
  sum_h += hogough[i];
 }
 
 cout << "mojmoua saat kari : " << sum_h << endl;

 if(sum_h == 210){
  tafazol = 0;
  kosourat = 0;
  ezafe = 0;
  cout << "tafazol saat kari : " << tafazol << endl;
  cout << "kosourat : " << kosourat << endl;
  cout << "mablagh ezafe : " << ezafe << endl;
  cout << "pardakhti khales : " << khales << endl;
 }else if(sum_h < 210){
  tafazol = 210 - sum_h;
  kosourat = tafazol * 150;
  khales -= kosourat;
  ezafe = 0;
  
  cout << "tafazol saat kari : " << tafazol << endl;
  cout << "kosourat : " << kosourat << endl;
  cout << "mablagh ezafe : " << ezafe << endl;
  cout << "pardakhti khales : " << khales << endl;
 }else{
  tafazol = sum_h - 210;
  kosourat = 0;
  ezafe = tafazol * 145;
  khales += ezafe;
  
  cout << "tafazol saat kari : " << tafazol << endl;
  cout << "kosourat : " << kosourat << endl;
  cout << "mablagh ezafe : " << ezafe << endl;
  cout << "pardakhti khales : " << khales << endl;
  
 }
 return 0;
}

