#include <iostream>
using namespace std;

int main() {
  int printCount;
  int i;
  
  cout<<"How many n would you like to print?"<<endl;
  cin>>printCount;

  int num[printCount];
  
  num[0] = 0;
  num[1] = 1; 
  for(i=0;i<=printCount;i++){
    num[i+2] = num[i] + num[i+1];
    cout<<num[i+2]<<endl;
  }
  return 0;
}

