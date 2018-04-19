//
//  main.cpp
//  Practice53MatrixMultiplication
//
//  Created by Gary Hicks on 2018-01-23.
//  Copyright © 2018 Gary Hicks. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int array1[2][2];
    for (int i=0; i<2;i++){
        for (int j=0; j<2;j++){
            cin>>array1[i][j];
        }
    }
    int array2[2][2];
    for (int i=0; i<2;i++){
        for (int j=0; j<2;j++){
            cin>>array2[i][j];
        }
    }

    int result[2][2];
    
    result[0][0]=array1[0][0]*array2[0][0]+array1[0][1]*array2[1][0];
    result[0][1]=array1[0][0]*array2[0][1]+array1[0][1]*array2[1][1];
    result[1][0]=array1[1][0]*array2[0][0]+array1[1][1]*array2[1][0];
    result[1][1]=array1[1][0]*array2[0][1]+array1[1][1]*array2[1][1];
    
    for (int i=0; i<2;i++){
        for (int j=0; j<2;j++){
            cout<<result[i][j]<<"     "<<flush;
        }
        cout<<endl;
    }
    
    return 0;
}
