/* 
    public -> members are accessible from outside the class,
    private ->  members cannot be accessed (or viewed) from outside the class,
    protected -> members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
*/
//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class AccessSpecifier{
    /* By deafault members are private */
    string check;
public:
    string myName;

private:
    string loveName;
};
int main()
{
    AccessSpecifier obj;
    obj.myName = "Rayne";
    
    obj.loveName = "NoNe HAHA"; // there is not access
    obj.check = "Yes"; //also private by Deafault
    return 0;
}