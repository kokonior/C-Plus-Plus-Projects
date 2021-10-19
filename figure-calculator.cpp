#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio();
  cin.tie(NULL);

  int opt;

  cout << "Figure Option : \n 1) Circle \n 2) Square \n 3) Triangle \n 4) Rectangle \n";
  cout << "Insert your choice below : ";
  cin >> opt;

  if(opt == 1){
    float r,pi = 3.14;

    cout << "\n=== CIRCLE ===\n radius : ";
    cin >> r;

    float area = pi*r*r;
    float circumference = 2*pi*r;

    cout << "\n=== Result ===\n area : " << area << "\n circumference : " << circumference << endl;

  } else if(opt == 2){
    float s;

    cout << "\n=== SQUARE ===\n side : ";
    cin >> s;

    float area = s*s;
    float circumference = 4*s;

    cout << "\n=== Result ===\n area : " << area << "\n circumference : " << circumference << endl;

  } else if(opt == 3){
    float b,h;

    cout << "\n=== TRIANGLE ===\n base : ";
    cin >> b;
    cout << " height : ";
    cin >> h;

    float area = (b*h)/2;

    cout << "\n=== Result ===\n area : " << area << endl;
  }

  return 0;
}
