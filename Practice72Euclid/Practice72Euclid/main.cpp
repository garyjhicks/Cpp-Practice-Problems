//
//  main.cpp
//  Practice72Euclid
//
//  Created by Gary Hicks on 2018-01-24.
//  Copyright © 2018 Gary Hicks. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int gcf(int &a,int &b){
    if (b == 0){
        return 0;
    }
    else{
        while (a>0 && b>0){
            if (a>b){
                a=a-b;
                //cout<<a<<setw(5)<<b<<endl;
            }
            else{
                b=b-a;
                //cout<<a<<setw(2)<<b<<endl;
            }
        }
        if (a>b){
            return a;
        }
        else{
            return b;
        }
    }
}

int main() {
    
    int a,b;
    cin>>a>>b;
    
    a=gcf(a,b);
    cout<<a<<endl;
    
    return 0;
}
