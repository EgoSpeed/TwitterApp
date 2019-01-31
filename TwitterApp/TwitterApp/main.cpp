//
//  main.cpp
//  TwitterApp
//
//  Created by Max Korner on 24/01/2019.
//  Copyright © 2019 Max Korner. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>



//Allow file to be written
int main() {
    using namespace std;
    ifstream in("sampleTweets.csv");
    int readNumber;
    
    vector<int> numberVector;
    while(in >> readNumber)
    {
        numberVector.push_back(readNumber);
        
    }
    
    cout  << "The number of tweets in this file is " << numberVector.size() << endl; 
    
    while(true)//Run untill  it's forcefully closed
    {
     
    }
}
