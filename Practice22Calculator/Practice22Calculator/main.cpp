//
//  main.cpp
//  Practice22Calculator
//
//  Created by Gary Hicks on 2018-01-19.
//  Copyright © 2018 Gary Hicks. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    double number1;
    cin>>number1;
    string op;
    cin>>op;
    double number2;
    cin>>number2;
    
    if (op=="+"){
        cout<<number1+number2<<endl;
    }
    else if (op=="-"){
        cout<<number1-number2<<endl;
    }
    else if (op=="*"){
        cout<<number1*number2<<endl;
    }
    else{
        cout<<number1/number2<<endl;
    }
    
    return 0;
}
