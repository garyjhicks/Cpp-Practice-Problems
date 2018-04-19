//
//  main.cpp
//  Practice21Tolerance
//
//  Created by Gary Hicks on 2018-01-19.
//  Copyright © 2018 Gary Hicks. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    double A;
    cin>>A;
    double B;
    cin>>B;
    double C;
    cin>>C;
    double D;
    cin>>D;
    double E;
    cin>>E;
    
    if ((((A/B)-(C/D))<=E) && (((C/D)-(A/B))<=E)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    
    return 0;
}
