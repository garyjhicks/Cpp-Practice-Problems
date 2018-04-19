//
//  main.cpp
//  Practice70Age
//
//  Created by Gary Hicks on 2018-01-24.
//  Copyright © 2018 Gary Hicks. All rights reserved.
//

#include <iostream>
using namespace std;

int a;
int b;

int my_age(int birthyear, int currentyear){
    birthyear = a;
    currentyear = b;
    int age = currentyear-birthyear;
    return age;
}

int main() {
    
    int yr1 = 0, yr2 = 0, age = 0;
    cin >> a >> b;
    age = my_age(yr1, yr2);
    cout << age << endl;
    return 0;
    
}

