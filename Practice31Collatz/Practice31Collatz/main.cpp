//
//  main.cpp
//  Practice31Collatz
//
//  Created by Gary Hicks on 2018-01-22.
//  Copyright © 2018 Gary Hicks. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int value;
    cin>>value;
    int i = 1;
    
    while(value!=1){
        if (((value/2)*2)==value){
            value=value/2;
            i++;
        }
        else{
            value=value*3+1;
            i++;
        }
    }
    
    cout<<i<<endl;
    return 0;
}
