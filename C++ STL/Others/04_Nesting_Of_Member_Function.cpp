//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class nesting
{
    private:
        string s;
        void check(void);

    public:
        void read(void);
        void complement1(void);
        void display(void);
};
void nesting :: read(void){
    cout << "Enter a Binary Number :-> " << endl;
    cin >> s;
}
void nesting :: check(void)
{
    for (int  i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout << "Incorrect " << endl;
            exit(0);
        }
    }
}
void nesting :: complement1(){
    check();
    for (int i = 0; i < s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}
void nesting ::  display(void){
    cout<<"Diplay():- "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    nesting n;
    n.read();
    // n.check();
    n.complement1();
    n.display();

    return 0;
}