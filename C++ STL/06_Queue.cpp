#include <iostream>
#include <queue>

using namespace std;
int main()
{
    queue<string> q;
    q.push("Rayne");
    q.push("Coder");
    q.push("Youtuber");

    cout << "Front element :- " << q.front() << endl;
    q.pop();
    cout << "Front element after pop :- " << q.front() << endl;

    cout << "Size of Stack :-" << q.size() << endl;

    cout << "Empty(1) or not(0) :- " << q.empty() << endl;

    return 0;
}