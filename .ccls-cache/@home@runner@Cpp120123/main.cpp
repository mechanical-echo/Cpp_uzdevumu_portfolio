#include <iostream>
#include <stdio.h>
int main() {
  int n, m ,k;
  //collumns, lines, mine count
  
  std::cout<<"Ievadi n";
  std::cin>>n; //lines
  
  std::cout<<"Ievadi m";
  std::cin>>m; //collumns
  do{
    std::cout<<"Ievadi k";
    std::cin>>k; //mine count
    if(k>=(n*m)){
      std::cout<<"Mīnu ir padaudz!";
    }
  }while(k>=(n*m));
  
  char laukums[n][m]; //game field
  
  srand(NULL); //this line makes random numbers to not repeat after previous run

  //spreading mines randomly
  int t1, t2;
  bool check = false;
  for(int i=0; i<k; i++){
    do{
      t1 = rand()%(n-1);  //random coordinates of mine
      t2 = rand()%(m-1);
      
      if(laukums[t1][t2]!='*'){ //checks if this place already has the mine
        check = false; //if there is no mine, then programm places it and it does not search for a new place for this exact mine
        laukums[n][m] = '*';
        }else{
        check = true; //if there is mine already, check becomes true and do-while cycle begins again to find another place for this mine 
      }
    }while(check);
    
  }
}