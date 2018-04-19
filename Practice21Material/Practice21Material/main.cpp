//
//  main.cpp
//  Practice21Material
//
//  Created by Gary Hicks on 2018-01-19.
//  Copyright © 2018 Gary Hicks. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    cout<<"1. Polyethylene"<<endl<<"2. Pure aluminum"<<endl<<"3. AL2O3"<<endl<<"4. Epoxy"<<endl<<"5. Heat treated aluminum steel"<<endl<<"Heat treated aluminum alloy"<<endl<<"6. Carbon Composite"<<endl<<"7. Titanium"<<endl<<"8. Kevlar"<<endl<<"9. Carbon epoxy"<<endl;
    int choice;
    cin>>choice;
    
    if (choice == 1){
        cout<<"a"<<endl;
    }
    else if (choice ==2){
        cout<<"b"<<endl;
    }
    else if (choice ==3){
        cout<<"c"<<endl;
    }
    else{
        cout<<"This is boring, no more."<<endl;
    }
        
    return 0;
}
