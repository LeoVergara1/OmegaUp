#include<iostream>
#include<string>

using namespace std;

int main(){
  char sum[3];
  int a;
  int b;
  int c;

  cin.getline(sum,4);
  a = (int)sum[0] - 48;
  b = (int)sum[2] - 48;
  c = a + b;
  cout<<c<<endl;

  return 0;
}
