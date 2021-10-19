# include <iostream>
using namespace std;

int main() {
    char fn;
    float num1, num2;
    int c;

    cout << "How many calculations do you want to do? " << "\n";
    cin >> c;
    for(int i = 0; i<c; i++)
    {
      cout << "Enter the operator: (+, -, *, /) " <<"\n";
      cin >> fn;
      cout << "Enter the two numbers: " <<"\n";
      cin >> num1 >> num2;
      switch(fn)
      {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 <<"\n";
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 <<"\n";
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 <<"\n";
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2 <<"\n";
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
        }
    }

    return 0;
}
