//
//  main.cpp
//  Practice73HowFast
//
//  Created by Gary Hicks on 2018-01-24.
//  Copyright © 2018 Gary Hicks. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

double a(double mass, double force){
    double acceleration = force/mass;
    return acceleration;
}

double v(double acceleration, double time){
    double speed = acceleration*time;
    return speed;
}

int main() {
    
    double mass,force,time;
    cin>>mass>>force>>time;
    
    double acceleration = a(mass,force);
    double speed = v(acceleration, time);
    
    cout<<speed<<endl;
    return 0;
}
