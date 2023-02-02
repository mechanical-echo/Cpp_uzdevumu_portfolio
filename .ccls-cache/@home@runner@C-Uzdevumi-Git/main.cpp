#include <iostream>
using namespace std;

void check(int field[10][10], int n, int m);

bool check_1(int field[10][10], int x, int y, int n, int m);

bool check_2(int field[10][10], int x, int y, int n, int m);

static int variations = 0;
int main() {
  int n, m;
  int field[10][10];
  cin >> m;
  cin >> n;

  int counter_rows = 0;
  int counter_cols = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> field[i][j];
    }
  }

  check_1(field, 0, 0, n, m);
  check_2(field, 0, 0, n, m);
  // check_2(0, 0);
  cout << "vars = " << variations;
}

static int previous=0;
static int variant[10][10];
bool check_1(int field[10][10], int x, int y, int n, int m) {
  if (y + 1 < m) {
    // goes right because 1 and 3 are: L and -
    y++;
  }
  // did it reached the end ?
  if (x == m - 1 && y == n) { // example n=5 m=4
    // tube reached the end
    variations++;
    return true;
    // otherwise, if next square is empty
  } else if (field[x][y] < 5) {
    // check what could be plased;
    return (check_2(field, x, y, n, m));
  }  
  return false;
}

bool check_2(int field[10][10], int x, int y, int n, int m) {
  // checks 2 or 4
  cout << "ch2 - x=" << x << ", y=" << y << "\n";

  // check if there is preset tube nearby
  if (!(field[x + 1][y] < 5 && field[x + 1][y] > 0)) {
    if (x + 1 < n) {
      // goes down because 2 and 4 are: ^| and ||
      x++;
    }
  }

  /*
  // did it reached the end ?
  if (x==m-1 && y==n) {          // example n=5 m=4
  //tube reached the end
  variations++;
  return true;
  //otherwise, if next square is empty
  } else
  //commented out, beacuse 2 and 4 cannot reach the end, since their ends are
  vertical
  //while end is horizontal
  //they simply won't reach it
  */
  if (field[x][y] < 5) {
    // check what could be plased;
    previous = 2;
    return (check_1(field, x, y, n, m));
    // otherwise, if next square is preset tube
  } 
  return false;
}