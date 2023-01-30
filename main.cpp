#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int N;
  do{
    cin>>N;
  }while(N<1 || N>pow(10,9));

  int counter =0;
  for(int i=N-1; i>=1; i--){
    counter++;
    if(N % i==0)
    break;
  }
  cout<<counter;  
}