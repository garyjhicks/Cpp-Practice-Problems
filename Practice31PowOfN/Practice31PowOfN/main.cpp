//
//  main.cpp
//  Practice31PowOfN
//
//  Created by Gary Hicks on 2018-01-22.
//  Copyright © 2018 Gary Hicks. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int a;
    cin>>a;
    int b;
    cin>>b;
    
    if (b==1){
        if (b==a){
            cout<<"True"<<endl;
        }
        else{
            cout<<"False"<<endl;
        }
    }
    else if (b==0){
        cout<<"False"<<endl;
    }
    else{
        
        while(a>b){
            a=a/b;
        }
        
        if (b==a){
            cout<<"True"<<endl;
        }
        else if (a<b){
            cout<<"False"<<endl;
        }
    }
    
        return 0;
        
}
