#include<iostream>

using namespace std;

int main(){
  int n;
  int b;
  cin>>n;
  b = n%2;

  if(b==0){
    cout<<"par"<<endl;
  }
  else{
    cout<<"impar"<<endl;
  }
  return 0;
}
