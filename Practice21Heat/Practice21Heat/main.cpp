//
//  main.cpp
//  Practice21Heat
//
//  Created by Gary Hicks on 2018-01-19.
//  Copyright © 2018 Gary Hicks. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    double m = 100;
    double T = 30;
    double C = 0.902;
    
    double Q = m*T*C;
    
    cout<<Q/50<<endl;
    return 0;
}
