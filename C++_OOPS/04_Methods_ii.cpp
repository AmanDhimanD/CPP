//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class fruit{
    public:
        string juicyFruit(string name);
};
string fruit::juicyFruit(string name){
    return name;
}
int main()
{
    fruit obj;
    cout << obj.juicyFruit("Apple") << endl;//Call the method with an argument
    cout<<obj.juicyFruit("Mango")<<endl;
    return 0;
}