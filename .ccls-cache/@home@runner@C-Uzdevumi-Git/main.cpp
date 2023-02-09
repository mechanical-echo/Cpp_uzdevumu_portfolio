#include <iostream>
#include <vector>
using namespace std;

int main() {
  string str;
  //pljavaa nekad neeed sveshas pukjiites
  int cik = 0;
  vector<string> vardi;
  
  getline(cin, str);
 
  string temp = "";
  for (int i = 0; i < str.length(); i++) {
    if (str.at(i) != ' ') {
      temp.push_back(str[i]);
      if(i==str.length()-1){
        vardi.push_back(temp);
        temp.clear();
      }
    } else if(str.at(i)==' ' && str.at(i-1)!=' '){
      vardi.push_back(temp);
      temp.clear();
    }
  }
  temp.clear();
  //izvade(vardi);
  
  for(int j=0; j<vardi.size(); j++){
    temp = vardi.at(j);
    for(int i=0; i<temp.length()-1; i++){
      char c1, c2;
      c1 = temp.at(i);   //l
      c2 = temp.at(i+1); //j
      string zimes = string(1, c1) + c2;
      string change;
      
      // garumzimes
      if (zimes == "aa") {
        change = "A";
        temp.replace(i, 2, change);

      } else 
      if (zimes == "ee") {
        change = "E";
        temp.replace(i, 2, change);

      } else 
      if (zimes == "ii") {
        change = "I";
        temp.replace(i, 2, change);

      } else 
      if (zimes == "uu") {
        change = "U";
        temp.replace(i, 2, change);

      } else
        
      // lidzskani ar mikstinajumu
      if (zimes == "gj") {
        change = "G";
        temp.replace(i, 2, change);

      } else 
      if (zimes == "lj") {
        change = "L";
        temp.replace(i, 2, change);

      } else 
      if (zimes == "kj") {
        change = "K";
        temp.replace(i, 2, change);

      } else 
      if (zimes == "nj") {
        change = "N";
        temp.replace(i, 2, change);

      } else
        
      // lidzskani ch,sh,zh
      if (zimes == "ch") {
        change = "C";
        temp.replace(i, 2, change);

      } else 
      if (zimes == "sh") {
        change = "S";
        temp.replace(i, 2, change);

      } else 
      if (zimes == "zh") {
        change = "Z";
        temp.replace(i, 2, change);
      }
    }
    //cout<<"new temp = "<<temp<<", length: "<<temp.length()<<"\n";
    cik+=temp.length();
    
  }
  cout << cik;
}
