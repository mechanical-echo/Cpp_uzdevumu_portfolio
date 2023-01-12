#include <iostream>
#include <stdio.h>
int main() {
  int n, m ,k;
  //collumns, lines, mine count
  
  std::cout<<"Ievadi n";
  std::cin>>n; //lines
  
  std::cout<<"Ievadi m";
  std::cin>>m; //collumns
  
  std::cout<<"Ievadi k";
  std::cin>>k; //mine count
  
  char laukums[n][m]; //game field
  
  srand(NULL); //this line makes random numbers to not repeat after previous run

  //spreading mines randomly
  for(int i=0; i<k; i++){
    int t = 1+(rand()%9);
    
  }
}