//
//  main.cpp
//  Practice20
//
//  Created by Gary Hicks on 2018-01-19.
//  Copyright © 2018 Gary Hicks. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int number;
    cin>>number;
    
    int final = (number/2)*2;
    if (final == number) {
        cout<<"Even"<<endl;
    }
    else {
        cout<<"False"<<endl;
    }
    return 0;
}
