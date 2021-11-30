#include<iostream>

using namespace std;
int adiff(int A,int B){
  int C;
  if(A < 0){
    A = 360 + A;
  }
  if(B < 0){
    B = 360 + B;
  }
  C = B-A;
  if(C < 0){
    C = -C;
  }
  if(C >= 360){
    C = C%360;
    }
  if(C > 180){
    C = 360 - C;
  }
  return C;
}


int main(){
  cout << adiff(180,270);
  cout << endl;
  cout << adiff(210,45);
  cout << endl;
  cout << adiff(0,360);
  cout << endl;
  cout << adiff(10,350);
  cout << endl;
  cout << adiff(95,260);
  cout << endl;
  cout << adiff(90,-90);
  cout << endl;
  cout << adiff(1000,280);
  cout << endl;
  cout << adiff(60,244);
}
