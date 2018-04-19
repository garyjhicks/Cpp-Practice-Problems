//
//  main.cpp
//  Practice52NumberSearch
//
//  Created by Gary Hicks on 2018-01-22.
//  Copyright © 2018 Gary Hicks. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int numArray[10] = {1, 5, 6, 2, 10, 11, 15,67,100,20};
    
    int input;
    cin>>input;
    bool search = false;
    
    for (int i=0; i<10; i++){
        if (input==numArray[i]){
            search = true;
        }
    }
    
    if (search == true){
        cout<<"Found it"<<endl;
    }
    else{
        cout<<"Didn't find it"<<endl;
    }
    
    return 0;
}
