#include <iostream>
using namespace std;

int main() {
    
  int nums[10],n;
  int result;
  scanf("%d",&n);
  for (int i = 0; i < n; i ++)
  scanf("%d",&nums[i]);
  for (int i = 0; i < n; i ++){
    result ^= nums[i];
  }
  cout << result << endl;
}