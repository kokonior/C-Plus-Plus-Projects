#include <iostream>
#include <string.h>
using namespace std;
class stack
{
    int size;
    int top;
    char *s;

public:
    void push(char x)
    {
        cout << "Pushing " << x << endl;
        if (top == size - 1)
        {
            cout << "Overflow" << endl;
        }
        else
        {
            top++;
            s[top] = x;
        }
    }

    int pop()
    {

        int x = -1;
        if (top == -1)
        {
            cout << "Underflow" << endl;
        }
        else
        {
            x = s[top];
            top--;
        }
        cout << "Poping " << x << endl;
        return x;
    }

    int isEmpty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void display()
    {
        int i = 0;
        while (s[i] != '\0')
        {
            cout << s[i];
            i++;
        }
        cout << endl;
    }
    int isBalanced(const char *exp)
    {
        int i;
        for (i = 0; exp[i] != '\0'; i++)
        {
            if (exp[i] == '(')
                push(exp[i]);
            else if (exp[i] == ')')
            {
                if (top == size - 1)
                    return 0;
                else
                    pop();
            }
        }
        if (top == size - 1)
            return 1;
        else
            return 0;
    }
};

int main()
{
    stack st;
    const char *ch = "((a+b)+(c+d)))";
    cout << st.isBalanced(ch);
    return 0;
}
