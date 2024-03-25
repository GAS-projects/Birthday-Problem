#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> birthday;
  int classmates = 0;
  cin >> classmates;
  int n = 0;
  double t = 0;

  srand((unsigned)time(NULL));
  for(int z = 0; z < 20000; z++){
    for(int i = 0; i < classmates; i++){
      birthday.push_back(rand() % 365 + 1);
    }
    int count = 0;
    for(int i = 0; i < 366; i++){
      for(int j = 0; j < birthday.size() - 1; j++) if(birthday[j] == i) count += 1;
      if(count > 1) n += 1;
      count = 0;
    }

    birthday.clear();
    if(n > 0) t += 1;
    n = 0;
  }
  cout << "グループの中で誕生日が同じペアが1つ以上できる確率は" << t / 200 << "%でした。" << endl;

  return 0;
}
