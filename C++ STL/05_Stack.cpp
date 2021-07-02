#include <iostream>
#include <stack>

using namespace std;
int main()
{
    stack<string> s;
    s.push("Rayne");
    s.push("Coder");
    s.push("Youtuber");

    cout << "Top element :- " << s.top() << endl;
    s.pop();
    cout << "Top element after pop :- " << s.top() << endl;

    cout << "Size of Stack :-" << s.size() << endl;

    cout << "Empty(1) or not(0) :- " << s.empty() << endl;

    stack<int> n;
    n.push(1);
    n.push(2);
    n.push(3);

    cout << n.top() << " " << endl;

    return 0;
}