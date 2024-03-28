#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;

int main(){
  vector<int> birthday;
  int classmates, p = 0;
  double n = 0;
  cout << "グループの人数を入力してください。" << endl;
  cin >> classmates;

  srand((unsigned)time(NULL));
  for(int z = 0; z < 200000; z++){
    for(int j = 0; j < classmates; j++) birthday.push_back(rand() % 365 + 1);
    for(int j = 1; j < 366; j++){
      for(int k = 0; k < birthday.size(); k++) if(birthday[k] == j) p += 1;
      if(p > 1) break;
      else p = 0;
    }
    if(p > 1) n += 1;
    p = 0;
    birthday.clear();
  }
  cout << "グループ内に誕生日が同じペアがある確率は" << n / 200000 << "です。" << endl;
  n = 0;

  return 0;
}
