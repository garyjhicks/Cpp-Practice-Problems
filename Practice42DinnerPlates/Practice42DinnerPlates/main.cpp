//
//  main.cpp
//  Practice42DinnerPlates
//
//  Created by Gary Hicks on 2018-01-23.
//  Copyright © 2018 Gary Hicks. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int choice=3;
    int que=0;
    string array[10] = {"Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty"};
    
    while(choice!=2){
        
        cout<<"Add: 0"<<endl<<"Remove: 1"<<endl<<"End Program: 2"<<endl;
        cin>>choice;
        
        if (choice == 0){
            cout<<"How many?"<<endl;
            int many;
            cin>>many;
            
            if (que+many>10){
                cout<<"Please select valid choice!"<<endl;
            }
            else{
                cout<<"What colour?"<<endl;
                string colour;
                cin>>colour;
                
                for (int i=0;i<many;i++){
                    array[que+i]=colour;
                }
                que=que+many;
                
                cout<<array[0]<<" "<<array[1]<<" "<<array[2]<<" "<<array[3]<<" "<<array[4]<<" "<<array[5]<<" "<<array[6]<<" "<<array[7]<<" "<<array[8]<<" "<<array[9]<<endl;
            }
        }
        
        else if (choice == 1){
            
            if (que==0){
                cout<<"Must add plates."<<endl;
            }
            else{
                cout<<array[que-1]<<endl;
                array[que-1]="Empty";
                que=que-1;
            }
            
        }
    }
    return 0;
}
