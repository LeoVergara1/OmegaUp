#include<iostream>

using namespace std;

int main(){
  int a;
  int b;
  cin>>a;
  cin>>b;

  if(a>b){
    cout<<"mayor"<<endl;
  }
  else if(b>a){
    cout<<"menor"<<endl;
  }
  else{
    cout<<"igual"<<endl;
  }

  return 0;

}
