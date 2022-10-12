

// Problem statement: We need to apply operator overloading in complex number applying various operation as addition , subtraction, multiplication and division using cpp classes 
#include<iostream> //decleration of preprocessor directive
#include<math.h>    
using namespace std;
class complex{       //creation of a class for storing complex numbers
	private:
	float real,img;
	public:
		void input()   //member function for input of complex function
		{ cout<<"Enter the real value:  "<<endl;
		cin>>real;
		cout<<"Enter the imaginary part"<<endl;
		cin>>img;
		}
		void display()  //member function to display complex number
		{ cout<<real<<" + "<<img<<"i"<<endl;
		}
		complex operator+(complex const &obj)  //operator overloading for complex number addition
		{ complex temp;
		temp.real=real+obj.real;
		temp.img=img+obj.img;
		return temp;
		}
		complex operator-(complex const &obj)    //operator overloadong for complex number subtraction
		{ complex temp;
		temp.real=real-obj.real;
		temp.img=img-obj.img;
		return temp;
		}
		complex operator*(complex const &obj)   //operator overloading for complex number multiplication
		{ complex mul;
        mul.real = real * obj.real - img * obj.img;
        mul.img = real * obj.img + img * obj.real;
        return mul;
		}
		complex operator/(complex const &obj)    //operator overloading for complex number division
		{ complex div;
        div.real = (real * obj.real + img * obj.img) / (pow(obj.real, 2) + pow(obj.img, 2));
        div.img = (img * obj.real - real * obj.img) / (pow(obj.real, 2) + pow(obj.img, 2));
        return div;
		}
		complex operator++(int) //operator overloading for increment operator
		{real++;
		img++;
		complex temp;
		temp.real=real;
		temp.img=img;
		return temp;
		}
		complex operator--(int)   //operator overloading for decrement operator
		{ real--;
		img--;
		complex temp;
		temp.real=real;
		temp.img=img;
		return temp;
		}
	
};
int main()
{
    char use = 'y';
    while (use == 'y')
    {
        complex op1, op2, op3,op4;  //creation of 3 objects
        op1.input();//taking input of first complex number
        op2.input();//taking input of second complex number
        cout << "The numbers are : " << endl;
        op1.display();  //used to display first complex number
        op2.display(); //used to display second complex number
        int choice;
        cout<<"What operations do you want to do: "<<endl;
        cout << "\n1)Add\n2)Subtract\n3)Divide\n4)Multiply\n5) Increment the complex numbers\n6) Decrement the complex numbers \nEnter your choice : ";
        cin >> choice;
        switch (choice)   //creation of switch function to display choice
        {
        case 1:
            op3 = op1 + op2;
            break;
        case 2:
            op3 = op1 - op2;
            break;
        case 3:
            op3 = op1 / op2;
            break;
        case 4:
            op3 = op1 * op2;
            break;
            case 5:
            	{ op1++;
            	op2++;
            	cout<<"The result is :"<<endl;
            	op1.display();
            	op2.display();
            	break;
            	return 0;
				}
				case 6:{
					op1--;
					op2--;
					cout<<"The result is :"<<endl;
					op1.display();
					op2.display();
					; break;
				}
        default:
            cout << "Invalid Input  Enter valid number!";
            break;
        }
     
		if(choice==1||choice==2||choice==3||choice==4)
       {
		 cout << "The answer is : ";
        op3.display();
        cout << "Want to do more operations (y/n): ";
        cin >> use;
    }
	else{
	
        cout << "Want to do more operations (y/n): ";
        cin >> use;
}
    }
    return 0;
}