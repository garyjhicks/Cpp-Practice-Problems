//
//  main.cpp
//  Practice22Leap
//
//  Created by Gary Hicks on 2018-01-19.
//  Copyright © 2018 Gary Hicks. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int year;
    cin>>year;
    int a=year;
    
    if ((year>1582) && ((year/4)*4)==a){
        if (((year/400)*400)==a){
            cout<<"True"<<endl;
        }
        else if (((year/100)*100)==a){
            cout<<"False"<<endl;
        }
        else{
            cout<<"True"<<endl;
        }
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}
