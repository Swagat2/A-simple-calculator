#include<iostream>
using namespace std;
int main(){
    char oper;
    cout<<"Enter an operator (+, -, * , / , % ) : ";
    cin >> oper;
    char num1, num2;
    cout<<"Enter two number : "<<endl;
    cin >> num1 >> num2;

    switch (oper)
    {
    case '+':
        cout << num1 << " + " << num2 <<" = " <<num1+num2;
        break;
    case '-':
        cout << num1 << " - " << num2 <<" = " <<num1-num2;
        break;
    case '*':
        cout << num1 << " * " << num2 <<" = " <<num1*num2;
        break;
    case '/':
        cout << num1 << " / " << num2 <<" = " <<num1/num2;
        break;
    case '%':
        cout << num1 << " % " << num2 <<" = " <<num1%num2;
        break;
    default:
        cout << "Error! The operator is not correct";
        break;
    }
    return 0;
}