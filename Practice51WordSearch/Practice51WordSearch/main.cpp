//
//  main.cpp
//  Practice51WordSearch
//
//  Created by Gary Hicks on 2018-01-22.
//  Copyright © 2018 Gary Hicks. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string sorcerers_stone[20] = {"Mr.", "and", "Mrs.", "Dursley,", "of",
        "number", "four,", "Privet", "Drive,", "were", "proud", "to", "say", "that", "they", "were", "perfectly", "normal", "thank", "you"};
    
    
    int input;
    cin>>input;
    
    if (input>0 && input<21){
        cout<<sorcerers_stone[input-1]<<endl;
    }
    else if (input>21){
        cout<<"Location not found"<<endl;
    }
    else if (input==-1){
        return 0;
    }
    return 0;
}
