#include <iostream>//header
using namespace std;//standard

int main()//execution of program begins from here
{
    float a, b;//declaring numbers as floating point
    cout << "please enter the 1st number" << endl;//printing line
    cin >> a;//taking input from user
    cout << "please enter the 2nd number" << endl;
    cin >> b;
    char operation;//declaring an operation as character
    cout << "Please enter the operator like +,-,/,*" << endl;
    cin >> operation;//taking input as characte
    switch (operation)//using switch statement
    {
    case '+'://case for summition
        cout << "the sum is :" << a + b << endl;//printing sum
        break;//beaking the loop 
    case '-'://case for substraction
        cout << "the substraction is :" << a - b << endl;//printing substraction
        break;
    case '*'://case for multiplication
        cout << "the multiplication is :" << a * b << endl;//printing multiplication
        break;
    case '/'://case for devision
    if(b==0)//conditon if the denominator is zero then
    {
    cout<<"it cannot be divisible by zero"<<endl;//printing line
    }
    else//if not then good,we will print the devision
    {
        cout << "the devision is :" << a / b << endl;//pinting
    }
        break;
    default://if any of the case does not match,then it will print the default statement
        cout << "Please enter a proper operation!!" << endl;
        break;
    }

    return 0;
}
