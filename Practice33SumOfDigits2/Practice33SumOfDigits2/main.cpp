//
//  main.cpp
//  Practice33SumOfDigits2
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
    int highsum = 0;
    int highnum;
    
    for (int j=num;j>0;j--){
        int i =0;
        int temp;
        int holder = j;
        int replace = j;
        
        while (replace>=1){
            replace=replace/(10);
            i++;
        }
        //cout<<i<<endl;
        int sum = 0;
        
        for (int a=i;a>0;a--){
            temp = holder/(pow(10,a-1));
            //cout<<temp<<endl;
            holder = holder-(temp*(pow(10,a-1)));
            sum = sum + temp;
            //cout<<newnum<<endl;
        }
        
        if (sum>highsum){
            highsum=sum;
            highnum=j;
        }
    }
    cout<<highnum<<", "<<highsum<<endl;
}

