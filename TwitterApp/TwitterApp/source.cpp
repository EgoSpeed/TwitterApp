//
//  source.cpp
//  TwitterApp
//
//  Created by Max Korner on 31/01/2019.
//  Copyright © 2019 Max Korner. All rights reserved.
//

#include "source.hpp"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void intro(){
    
    string name;
    cout << "Please Enter Your First Name";
    cin >> name;
    
    string surName;
    cout << "Please Enter Your Last Name";
    cin >> surName;
    
    string fullName = name + " " + surName;
    
    cout << "Welcome" << fullName << " , to my tweet finder app\n"; // the \n is provide a break
    cout << "Please input the following word\n" << endl; cout << "a - Counts the total number of tweets in the data set\n" << endl; cout << "b - count the number of tweets that mention the word money\n" << endl; cout << "c - count the number of tweets that mention politics\n" << endl; cout << "d - print to the screen any tweets mentioning the word paris\n" << endl; cout << "e - print to the screen any tweets mentioning the word DreamWorks\n" << endl; cout << "f - print to the screen any tweets mentioning the word Uber/n" << endl; cout << "g - prints to the screen any tweets mentioning the word beyblade\n" << endl; cout << "h - print to the screen any tweets mention the word esports\n" << endl; cout << "i - print to the screen any tweets mention the word brexit\n" << endl; cout << "j - print to the screen any tweets mention the word apple/n" << endl;
    // Getting the name and the
    
    

}

int main() {
    
    int tweet;
    int a;
    a = 0;
    int b;
    b = 1;
    int c;
    c = 2;
    int d;
    d = 3;
    int e;
    e = 4;
    int f;
    f = 5;
    int g;
    g = 6;
    int h;
    h = 7;
    int i;
    i = 8;
    int j;
    j = 9;
    
    int findIng;
    int amountTweet =  0;
    string line;
    ifstream tweetFile;
    tweetFile.open("sampleTweets.csv");
                cin >> tweet;
    
    while (cin.fail()) {
        cin.clear();
        cout << "Please Input one of the specialized words before" << endl;
        cin >> tweet;
    }
 
    if (tweet == a ) { //amount of tweet
        if(tweetFile.good()){
            cout << "Opening file Log" <<endl;
            while (!tweetFile.eof()) {
                getline(tweetFile, line);
                amountTweet++;
            }
            cout <<"Number of tweets: " << endl;
        }
    }
    
    if (tweet == b) { //money tweet
        if(tweetFile.good()){
            cout << "Opening file Log" <<endl;
            while ( getline(tweetFile, line)){
                if((findIng = line.find("money", 0) != string::npos && (findIng = line.find("Money", 0) !string::npos)){
                   amountTweet++;
                   }
            cout <<"Number of tweets: " << endl;
        }
    }
                
                   if (tweet == c) { //politics tweet
                       if(tweetFile.good()){
                           cout << "Opening file Log" <<endl;
                           while (!tweetFile.eof()) {
                               if((findIng =line.find("politics", 0) != string::npos && ((findIng =line.find("government", 0) != string::npos && ((findIng =line.find("prime minister", 0) != string::npos)))))){
                                   amountTweet++;}
                               
                               cout <<"Number of tweets: " << endl;
                           }
                       }
                               
                               if (tweet == d) { //paris tweet
                                   if(tweetFile.good()){
                                       cout << "Opening file Log" <<endl;
                                       while ( getline(tweetFile, line)){
                                           if((findIng = line.find("paris", 0) != string::npos && (findIng = line.find("Paris", 0) !string::npos)){
                                               amountTweet++;
                                       }
                                       cout <<"Number of tweets: " << endl;
                                   }
                                   
                                              if (tweet == e) { //dreamworks tweet
                                                  if(tweetFile.good()){
                                                      cout << "Opening file Log" <<endl;
                                                      while ( getline(tweetFile, line)){
                                                          if((findIng = line.find("dreamworks", 0) != string::npos && (findIng = line.find("Dreamworks", 0) !string::npos)){
                                                              amountTweet++;
                                                          }
                                                             cout <<"Number of tweets: " << endl;
                                                             }
                                                             
                                                             if (tweet == e) { //uber tweet
                                                                 if(tweetFile.good()){
                                                                     cout << "Opening file Log" <<endl;
                                                                     while ( getline(tweetFile, line)){
                                                                         if((findIng = line.find("uber", 0) != string::npos && (findIng = line.find("Uber", 0) !string::npos)){
                                                                             amountTweet++;
                                                                         }
                                                                            cout <<"Number of tweets: " << endl;
                                                                            
                                                                            if (tweet == e) { //beyblade tweet
                                                                                if(tweetFile.good()){
                                                                                    cout << "Opening file Log" <<endl;
                                                                                    while ( getline(tweetFile, line)){
                                                                                        if((findIng = line.find("beyblade", 0) != string::npos && (findIng = line.find("Beyblade", 0) !string::npos)){
                                                                                            amountTweet++;
                                                                                        }
                                                                                           cout <<"Number of tweets: " << endl;
                                                                                           if (tweet == e) { //esports tweet
                                                                                               if(tweetFile.good()){
                                                                                                   cout << "Opening file Log" <<endl;
                                                                                                   while ( getline(tweetFile, line)){
                                                                                                       if((findIng = line.find("esports", 0) != string::npos && (findIng = line.find("Esports", 0) !string::npos)){
                                                                                                           amountTweet++;
                                                                                                       }
                                                                                                          cout <<"Number of tweets: " << endl;
                                                                                                          
                                                                                                          if (tweet == e) { //brexit tweet
                                                                                                              if(tweetFile.good()){
                                                                                                                  cout << "Opening file Log" <<endl;
                                                                                                                  while ( getline(tweetFile, line)){
                                                                                                                      if((findIng = line.find("brexit", 0) != string::npos && (findIng = line.find("Brexit", 0) !string::npos)){
                                                                                                                          amountTweet++;
                                                                                                                      }
                                                                                                                         cout <<"Number of tweets: " << endl;
                                                                                                                         if (tweet == e) { //apple tweet
                                                                                                                             if(tweetFile.good()){
                                                                                                                                 cout << "Opening file Log" <<endl;
                                                                                                                                 while ( getline(tweetFile, line)){
                                                                                                                                     if((findIng = line.find("apple", 0) != string::npos && (findIng = line.find("Apple", 0) !string::npos)){
                                                                                                                                         amountTweet++;
                                                                                                                                     }
                                                                                                                                        cout <<"Number of tweets: " << endl;
                                                                                                          
                                                                              return amountTweet;
                                                                            }
                                                                                           
                                                                                           
                                                                            
                                                                            
                                                                            
                                                             
                                                             
    
                    
                                   
    
                               
                                 
    
    
                                                                    
  

