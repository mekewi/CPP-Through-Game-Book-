//
//  main.cpp
//  CPP Through Game Book
//
//  Created by Mohamed Rashad on 17/02/2021.
//

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
string usernamr;
int main(int argc, const char * argv[]) {
    // insert code here...
    srand(static_cast<unsigned int>(time(0)));
    int randomnumber = rand();
    int die = (randomnumber % 6)+1;
    cout << "Your Random Number Is "<< die << endl;
    return 0;
}
