#include <iostream>
using namespace std;

int main() {
  int n; //veidi
  int m; //konfeksu skaits no katra veida glitos iepakojumos
  do{
    cin>>n;
  }while(n<1);
  do{
    cin>>m;
  }while(m>250000);
  int a; //sarazotajs daudzums
  int konfektes[n]; // katraa lodzinaa buus katrs veids
  int iepakojumu_skaits[n];
  int palikusi=0;
  bool sanak= true;
  for(int i=0; i<n; i++){
    cin>>konfektes[i];
    palikusi += konfektes[i]%m;
    iepakojumu_skaits[i] = konfektes[i]/m;
    if(i!=0){
      if(iepakojumu_skaits[i]==iepakojumu_skaits[i-1] && sanak==true){
        a = min(iepakojumu_skaits[i], iepakojumu_skaits[i-1]);
        sanak=true;
      }
      else
        sanak=false;
    }
  }

  
  cout<<a<<" "<<palikusi;
  
  
}