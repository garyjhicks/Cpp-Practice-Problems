//
//  main.cpp
//  Practice70Multiply
//
//  Created by Gary Hicks on 2018-01-24.
//  Copyright © 2018 Gary Hicks. All rights reserved.
//

#include <iostream>
using namespace std;

void multiply_it(double &a, double &b){
    a=a*b;
}

int main() {
    
    double a = 0.0, b = 0.0;
    cin >> a >> b;
    
    multiply_it(a, b);
    cout << a << endl;
    
    return 0;
    
}
