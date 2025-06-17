#include<iostream>
using namespace std;

int  main(){
    double num1,num2;
    char operation;
    double result;
    cout<<"Enter two numbers : ";
    cin>>num1>>num2;
    cout<<"Enter operator to perform arithmetic operation(+,-,*,/) : ";
    cin>>operation;

    if(operation == '+'){
        result = num1 + num2;
        cout<<"num1 + num2 = "<<result<<endl;
    }else if(operation == '-'){
        result = num1 - num2;    
        cout<<"num1 - num2 = "<<result<<endl;
    }else if(operation == '*'){
        result = num1 * num2;
        cout<<"num1 *  num2 = "<<result<<endl;
    }else if(operation == '/'){
       if(num2 != 0){
            result = num1 / num2;
            cout<<"num1 / num2 = "<<result<<endl;
       }else{
        cout<<"Error : number can't be divided by zero";
       }
    }else{
        cout<<"Invalid operator"<<endl;
        return 0;
    }

    return 0;
}