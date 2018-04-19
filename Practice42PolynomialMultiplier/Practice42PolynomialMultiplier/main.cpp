//
//  main.cpp
//  Practice42PolynomialMultiplier
//
//  Created by Gary Hicks on 2018-01-23.
//  Copyright © 2018 Gary Hicks. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    double poly1[5];
    for (int i = 0; i<5; i++){
        cin>>poly1[i];
    }
    double poly2[5];
    for (int i = 0; i<5; i++){
        cin>>poly2[i];
    }
    cout<<poly1[0]<<poly1[1]<<poly1[2]<<poly1[3]<<poly1[4]<<endl;
    cout<<poly2[0]<<poly2[1]<<poly2[2]<<poly2[3]<<poly2[4]<<endl;
    
    double result[9]={0,0,0,0,0,0,0,0,0};
    double temp[5];
    
    for (int i=0; i<5; i++){
        
        double primary = poly1[i];
        
        for(int i=0; i<5; i++){
            double secondary = poly2[i];
            temp[i]=primary*secondary;
        }
        //cout<<temp[0]<<temp[1]<<temp[2]<<temp[3]<<temp[4]<<endl;
        
        for (int a=0; a<5; a++){
            result[i+a]=result[i+a]+temp[a];
        }
        
    }
    
    for (int i = 0; i<9; i++){
        if (result[i]!=0){
          cout<<result[i]<<"  "<<flush;
        }
    }
    cout<<endl;
    //cout<<result[0]<<"  "<<result[1]<<"  "<<result[2]<<"  "<<result[3]<<"  "<<result[4]<<"  "<<result[5]<<"  "<<result[6]<<"  "<<result[7]<<"  "<<result[8]<<endl;
    
    return 0;
}
