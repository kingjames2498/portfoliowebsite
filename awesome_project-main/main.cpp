//
//  main.cpp
//  homework2.cpp
//
//  Created by James Exantus on 9/1/21.
//  Copyright © 2021 James Exantus. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string firstname, lastname, month;
    int day, year;
    
    
    // first name
    cout << "enter your first name ";
    cin >> firstname;
    
    //last name
    cout << "enter your last name ";
    cin >> lastname;
    
    //date of birth,
    cout << "enter your date of birth" << endl;
    cout << " month ";
    cin >> month;
    cout << " day ";
    cin >> day;
    cout<< " year ";
    cin>> year;
    
    cout << firstname << " " << lastname << " was born on " << month <<  " " << day << " " <<  year << endl;
    
    
    
    return 0;
}
