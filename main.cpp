//
//  main.cpp
//  Friend
//
//  Created by Sarahi Cardenas Trejo on 10/29/18.
//  Copyright © 2018 Sarahi Cardenas Trejo. All rights reserved.
//

#include <iostream>
using namespace std;

class Bob{
public:
    Bob(){
        bobVar = 0;
    }
private:
    int bobVar;
    
    friend void bobFriend(Bob &bfo); //creating Bob's object as a parameter, while adding 'friend' keyword to make this function a friend of Bob's class. Now this function will have access to everything inside the class
};

void bobFriend(Bob &bfo){
    bfo.bobVar=90; //using the bfo object, now we can change the value of bobVar
    cout << bfo.bobVar << endl;
}

int main() {
    Bob obj;
    bobFriend(obj);//of course, this function takes a Bob object to its parameter, so we write obj
    
    return 0;
}
