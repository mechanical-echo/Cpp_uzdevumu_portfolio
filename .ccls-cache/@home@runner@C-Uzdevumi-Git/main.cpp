#include <iostream>
using namespace std;

void check(int field[10][10], int n, int m);




/*
bool check_3(int x, int y){
   if(field[x][y+1]==9){
    variations++;
    return true;
  }

  if(field[x][y]==0){
    y++;
    if(!check_2(x,y)){
      return check_3(x,y);
    }else{
      variations++;
      return true;
    }
  }

  //next
  y++;
  if(field[x][y]==5 || field[x][y]==-1){
    return false;
  }else
  if(field[x][y]<5){
    switch(field[x][y]){
      case 1:
        return false;
      break;
      case 2:
        return check_2(x,y);
      break;
      case 3:
        return check_3(x,y);
      break;
      case 4:
        return false;
      break;
    }
  }
}

bool check_4(int x, int y){
  
}
*/
int main() {
  int n, m;
  int field[10][10];    
  int variations =0;
 
//  do{
    
//  }while(n>10);
 // do{
  cin>>m;  
  cin>>n;
  //}while (m>10);
  
  int counter_rows = 0;
  int counter_cols = 0;
  
  for(int i=0; i<n; i++){
    for(int j =0; j<m; j++){
      //if(counter_cols<m-1 && counter_rows<=n){
        cin>>field[i][j];
       // cout<<"input = "<<field[i][j]<<", on ["<<i<<"]["<<j<<"]\n";
        //counter_cols++;
      // }else if(i==n && j==m-1){
      //   field[i][j]==9;
      // }
      
      // else{
      //   field[i][j]=-1;
       // cout<<"other number on this row: "<<field[i][j]<<", on ["<<i<<"]["<<j<<"]\n";
      }
    }
    //cout<<"\n";
   // counter_cols=0;
   // counter_rows++;




 // }
  
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
 //int variations = 0;
  check(field,n,m);
  //check_2(0, 0);
  //cout<<"vars = "<<variations;



}

void check(int field[10][10], int n, int m){
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cout<<field[i][j]<<" ";
    }
    cout<<"\n";
  }
}

// void check(int start_tube, int x, int y){
//   int current = field[x][y];
//   switch(current){
//     case 0:
//     switch(start_tube){
//       case 1:
//         //using 2
//         if(field[x+1][y+1]==0){ //2
//           x++; y++;
//           if(field[x+1][y+1]==0){ //1
//             x++; y++;
//           }else if(field[x][y+2]==0){ //4
//             y+=2;
//           }
//         }else if(field[x][y+2]>=0){ //3
//           y+=2;
//           //
//         }
//       break;
//       case 4:
//       break;
//     }
//     break;
//     case 1:
//     break;
//     case 5 :
//       variations = 0;
//     break;
//   }
// }