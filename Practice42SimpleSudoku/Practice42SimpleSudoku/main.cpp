//
//  main.cpp
//  Practice42SimpleSudoku
//
//  Created by Gary Hicks on 2018-01-23.
//  Copyright © 2018 Gary Hicks. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int array[4][4];
    string valid = "Sudoku";
    
    for (int i=0; i<4;i++){
        for (int j=0;j<4;j++){
            cin>>array[i][j];
        }
    }
    
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            //int temp = array[i][j];
            
            for (int a=0;a<4;a++){
                for(int b=0;b<4;b++){
                    if (array[i][j]==array[a][b] && (i==a || j==b)){
                        if (a==i && b==j){
                            valid=valid;
                        }
                        else{
                            valid = "Not Sudoku";
                        }
                    }
                }

            }
            
        }
    }
    
    cout<<valid<<endl;
    
    for (int i=0; i<4;i++){
        for (int j=0;j<4;j++){
            cout<<array[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}
