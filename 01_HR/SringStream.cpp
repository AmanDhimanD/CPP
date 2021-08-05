#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
  stringstream s(str);
  vector <int> v;
  char ch;
  int temp;
  while(s>>temp){
   v.push_back(temp);
   s>>ch;
  }
  return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
