#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio();
  cin.tie(NULL);

  int opt;

  cout << "Figure Option : \n 1) Circle \n 2) Square \n 3) Triangle \n 4) Rectangle \n";
  cout << "Insert your choice below : ";
  cin >> opt;

  float area = 0, circumference = 0;

  if(opt == 1){
    float r,pi = 3.14;

    cout << "\n=== CIRCLE ===\n radius : ";
    cin >> r;

    area = pi*r*r;
    circumference = 2*pi*r;

  } else if(opt == 2){
    float s;

    cout << "\n=== SQUARE ===\n side : ";
    cin >> s;

    area = s*s;
    circumference = 4*s;

  } else if(opt == 3){
    float b,h,a,c;

    cout << "\n=== TRIANGLE ===\n base : ";
    cin >> b;
    cout << " height : ";
    cin >> h;
    cout << " side A : ";
    cin >> a;
    cout << " side C : ";
    cin >> c;

    area = (b*h)/2;
    circumference = a+b+c;

  } else if(opt == 4){
    float w,l;

    cout << "\n=== RECTANGLE ===\n width : ";
    cin >> w;
    cout << " length : ";
    cin >> l;

    area = w*l;
    circumference = 2*(w+l);

  } else {
    cout << "\nlooks like you choose the wrong option :((\n ";
  }

  cout << "\n=== Result ===\n area : " << area << "\n circumference : " << circumference << endl;

  return 0;
}
