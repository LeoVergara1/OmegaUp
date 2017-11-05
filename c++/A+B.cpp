#include<iostream>
using namespace std;

int main(){
  float num = 0;
  int aux = 0;
  int sum = 0;
  int i = 0;
  while(i < 4){
    cin>>num;
    aux = static_cast<int>(num);
    sum = sum + (((num-aux)+0.01)*10);
    i++;
  }
  cout<<sum<<endl;
  return 0;
}
