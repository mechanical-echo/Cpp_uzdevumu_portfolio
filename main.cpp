#include <iostream>
using namespace std;
int main() {
  int n, m, c;
  cin>>n;
  cin>>m;
  cin>>c;
  int field[n][m+1];
  int counter = 1;
  /*
0%2=0| 00  01  02 |03|
1%2=1| 10  11  12  13
2%2=0| 20  21  22 |23|
    */
  for(int i=0; i<n; i++){
    for(int j=0; j<m+1; j++){
      if(i%2==0 && j==m){
        field[i][j]=0;
      }else{
        field[i][j] = counter; 
        counter++;
      }
    }
  }

  for(auto& x : field){
    for(auto& y : x){
      cout<<y<<" ";
    }
    cout<<"\n";
  }
  
}