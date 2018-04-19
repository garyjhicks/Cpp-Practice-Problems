//
//  main.cpp
//  Practice23CourseGrade
//
//  Created by Gary Hicks on 2018-01-19.
//  Copyright © 2018 Gary Hicks. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    double a;
    cin>>a;
    double p;
    cin>>p;
    double m;
    cin>>m;
    double f;
    cin>>f;
    
    if (f<40){
        cout<<f<<endl;
    }
    else if (m>f){
        cout<<0.1*a+0.15*p+0.25*m+0.5*f<<endl;
    }
    else{
        cout<<0.1*a+0.15*p+0.05*m+0.7*f<<endl;
    }
    return 0;
}
