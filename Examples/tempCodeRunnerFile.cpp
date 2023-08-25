#include <iostream>
#include <string>


using namespace std;

namespace First{
    typedef string New_T;
    const New_T FirstName = "Zach";
    
}
    int main ()
    {
        First::New_T LastName = "Burns";
        cout << First::FirstName << " " << LastName << '\n';

return 0;
    }   