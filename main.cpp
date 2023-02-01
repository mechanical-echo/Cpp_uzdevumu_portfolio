#include <iostream>
using namespace std;

int main() {
  int n, m;
  do{
    cin>>n;
  }while(n>10);
  do{
    cin>>m;  
  }while (m>10);
  
  int field[10][10];
  int counter_rows = 0;
  int counter_cols = 0;
  
  for(int i=0; i<10; i++){
    for(int j =0; j<10; j++){
      if(counter_cols<m-1 && counter_rows<=n){
        cin>>field[i][j];
       // cout<<"input = "<<field[i][j]<<", on ["<<i<<"]["<<j<<"]\n";
        counter_cols++;
      }else{
        field[i][j]=-1;
       // cout<<"other number on this row: "<<field[i][j]<<", on ["<<i<<"]["<<j<<"]\n";
      }
    }
    cout<<"\n";
    counter_cols=0;
    counter_rows++;
  }
  
  /*
  for(int i=0; i<10; i++){  //rows
    for(int j=0; j<10; j++){//columns
      while(counter_rows>0 && counter_cols>0){//inside n*m field
        cin>>field[i][j];   //user input
        counter_cols--;
      }
      if(counter_rows<=0){
        field[i][j]=-1;   //unused space
      }
    }
    counter_cols = m;
    counter_rows--;
  }

  //check
  for(auto& x : field){
    for(auto& y : x){
      cout<<y<<" ";
    }
    cout<<"\n";
  }
  */
 int variations = 0;
 if(field[0][0]==0){
  //possible tubes are 1 and 4
  if(check_tube(1, 0, 0)){

  }
  
 }
}

bool check_tube(int tube_type, int x, int y){
  /*
    |_  7   -   |
    1   2   3   4
  */
 switch(tube_type){
  case 1: //psbl 2 & 3
    if(check_tube(2, x, y+1)){

    }
  break;
 }
  return false;
}