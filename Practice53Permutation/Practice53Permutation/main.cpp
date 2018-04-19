//
//  main.cpp
//  Practice53Permutation
//
//  Created by Gary Hicks on 2018-01-22.
//  Copyright © 2018 Gary Hicks. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int counter=0;
    
    int number[5];
    cin>>number[0]>>number[1]>>number[2]>>number[3]>>number[4];
    int original[5];
    for (int i=0;i<5;i++){
        original[i]=number[i];
    }
    //cout<<number[0]<<number[1]<<number[2]<<number[3]<<number[4]<<endl;
    
    for (int i=0;i<5;i++){
        
        int temp = number[0];
        number[0]=number[i];
        number[i]=temp;
        
        for (int i=1;i<5;i++){
            
            int temp = number[1];
            number[1]=number[i];
            number[i]=temp;
            int a[5];
            for (int i=0;i<5;i++){
                a[i]=number[i];
            }
            
            for(int i=2;i<5;i++){
                
                int temp = number[2];
                number[2]=number[i];
                number[i]=temp;
                
                for(int i=3;i<5;i++){
                    
                    int temp = number[3];
                    number[3]=number[i];
                    number[i]=temp;
                    cout<<number[0]<<number[1]<<number[2]<<number[3]<<number[4]<<endl;
                    counter++;
                    
                }
                for (int i=0;i<5;i++){
                    number[i]=a[i];
                }
            }
        }
        for (int i=0;i<5;i++){
            number[i]=original[i];
        }
    }
    cout<<counter<<endl;
    return 0;
}
