#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() 
{   //variables
    double cookie, chocolate, white;
    int jar, jar1;                  //define as integer so you can use below 
    int jar_i = jar % jar1;      //define as integer not a double 

    //starting entering of cookies
    cout << "Enter # of cookies: ";
    cin >> cookie;

    //chocolate
    chocolate = cookie * 2;
    cout << "chocolate " << chocolate << '\n';  //Display chocolate right after the code for chocolate 
    
    //white and extra cookies 
    white = cookie - chocolate;
    jar = cookie / chocolate;    
    jar1 = cookie / white;
        

    cout << "white: " << jar1 << endl;

    cout << "Extra: " << jar_i << endl;  //jar_i = remainder of jar and jar1
    
    return 0;
}
