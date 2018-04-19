//
//  main.cpp
//  Practice20Pythag
//
//  Created by Gary Hicks on 2018-01-19.
//  Copyright © 2018 Gary Hicks. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int number1;
    cin>>number1;
    int number2;
    cin>>number2;
    int number3;
    cin>>number3;
    
    int a=number1*number1+number2*number2;
    int b=number3*number3;
    
    if (a==b){
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
    return 0;
}
