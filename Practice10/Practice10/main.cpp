//
//  main.cpp
//  Practice10
//
//  Created by Gary Hicks on 2018-01-19.
//  Copyright © 2018 Gary Hicks. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    cout<<"Enter the first number: "<<endl;
    int number1;
    cin>>number1;
    double decimal1 = number1;
    
    cout<<"Enter the second number: "<<endl;
    int number2;
    cin>>number2;
    double decimal2 = number2;
    
    cout<<"The sum is "<<number1+number2<<endl;
    
    cout<<"2) "<<3*number1-5*number2<<endl;
    
    cout<<"3) "<<number1*number2<<endl;
    
    cout<<"4) "<<decimal1/decimal2<<endl;
    
    cout<<"5) "<<(number1*number2/10)+16<<endl;

    return 0;
}
