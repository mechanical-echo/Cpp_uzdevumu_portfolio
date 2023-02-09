#include <iostream>
using namespace std;

int main() {
  int a, b, n;
  cin>>a;
  cin>>b;
  cin>>n;
  int c[n];
  c[0] = a;
  c[1] = b;
  //cout<<c[0]<<" "<<c[1]<<" ";
  for(int i=2; i<n; i++){
    c[i] = c[i-2]+c[i-1];
    c[i] = c[i]%10;
    //out<<c[i]<<" ";
  }
  cout<<c[n-1];
}
//1 2 3 5 8 3 1 4 5 9 4 3 7 
