#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;

int main(){
  vector<int> birthday;
  int classmates = 0;
  cin >> classmates;
  int p = 0;
  double n = 0;

  srand((unsigned)time(NULL));
  for(int z = 0; z < 20000; z++){
    for(int i = 0; i < classmates; i++) birthday.push_back(rand() % 365 + 1);
    for(int i = 1; i < 366; i++){
      for(int j = 0; j < birthday.size(); j++) if(birthday[j] == i) p += 1;
      if(p > 1) break;
      else p = 0;
    }
    if(p > 1) n += 1;
    p = 0;
    birthday.clear();
  }
  cout << n / 200.0 << "%" << endl;
  n = 0;

  return 0;
}
