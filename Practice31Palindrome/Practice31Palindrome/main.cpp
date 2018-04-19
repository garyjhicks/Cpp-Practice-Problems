//
//  main.cpp
//  Practice31Palindrome
//
//  Created by Gary Hicks on 2018-01-22.
//  Copyright © 2018 Gary Hicks. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int num;
    cin>>num;
    int original = num;
    int i =0;
    int temp;
    int holder = num;
    int newnum =0;
    
    while (num>=1){
        num=num/(10);
        i++;
    }
    //cout<<i<<endl;
    
    for (int a=i;a>0;a--){
        temp = holder/(pow(10,a-1));
        //cout<<temp<<endl;
        holder = holder-(temp*(pow(10,a-1)));
        newnum=newnum+temp*(pow(10,(i-(a))));
        //cout<<newnum<<endl;
    }
    if (newnum==original){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    //cout<<newnum<<endl;
    return 0;
}
