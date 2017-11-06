#include<iostream>
#include<string>

using namespace std;

int main(){
  int a;
  int b;
  string name;
  int c;
  cin>>a;
  cin>>b;
  cin>>name;
  c = a*b;
  if(name=="Fonsi" || "fonsi"){
    for(int i=0; i<c;i++){
      cout<<"Es gay"<<endl;
    }
  }
  else{
    cout<<"No es gay"<<endl;
  }
  return 0;
}
