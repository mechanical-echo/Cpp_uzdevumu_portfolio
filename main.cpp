#include <iostream>
using namespace std;
int main() {
  int n, m, k;
  // collumns, lines, mine count
  
  do{
    cin >> n; // lines
  }while(n<1);

  do{
    cin >> m; // collumns
  }while(m>1000);

  do{
    cin >> k; // mine count
  }while(k>100000 || k>(n*m));  

  char laukums[n][m]; // game field

  srand(time(NULL));

  // spreading mines randomly
  int counter = k;
  do {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        int test = rand() % 2;
        if (laukums[i][j] != '*' && counter != 0 && test == 1) {
          laukums[i][j] = '*';
          counter--;
        }
      }
    }
  } while (counter > 0);

  int nearest_count = 0;

  for (int a = 0; a < n; a++) { // a b coordinates of place that isnt a mine
    for (int b = 0; b < m; b++) {
      nearest_count = 0;
      if (laukums[a][b] != '*') {
        /* Next code checks every nearest tile and adds 1 every time if it finds
           mine
           TODO :optimize code and make it shorter
        */

        if ((b - 1) >= 0) {
          if (a - 1 >= 0) {
            if (laukums[a - 1][b - 1] == '*') {
              nearest_count++;
            }
          }
          if (laukums[a][b - 1] == '*') {
            nearest_count++;
          }
          if (a + 1 < n) {
            if (laukums[a + 1][b - 1] == '*') {
              nearest_count++;
            }
          }
        } /////////

        if (a - 1 >= 0) {
          if (laukums[a - 1][b] == '*') {
            nearest_count++;
          }
          if ((b + 1) < m) {
            if (laukums[a - 1][b + 1] == '*') {
              nearest_count++;
            }
          }
        } /////

        if (b + 1 < m) {
          if (laukums[a][b + 1] == '*') {
            nearest_count++;
          }
        }

        if (a + 1 < n) {
          if (laukums[a + 1][b] == '*') {
            nearest_count++;
          }
        }

        if (a + 1 < n && b + 1 < m) {
          if (laukums[a + 1][b + 1] == '*') {
            nearest_count++;
          }
        }

        // After all the checking - programm gives ab tile a number of nearest
        // mine count
       // cout << nearest_count << "\n\n";
        std::string s = std::to_string(nearest_count);
        char const *pchar = s.c_str();
        laukums[a][b] = *pchar;
        //laukums[a][b] = nearest_count;
      } // if
    }   // int b
  }     // int a

  // TODO : delete next later
  // just to check array
  /*
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << laukums[i][j] << "\t";
      // cout<<"\t";
    }
    cout << "\n";
  }
  */
  char minesweeper[n][m];
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      minesweeper[i][j] = '*';
    }
  }
  
  
  
}