//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Student{
    protected:
        int roll_N;
    public:
        void set_roll_N(int);
        void get_roll_N(void);
};
void Student ::set_roll_N(int r){
    roll_N = r;
}

void Student :: get_roll_N(){
    cout<<"Get Roll number "<<roll_N<<endl;
}

class Exam : public Student{
    protected:
        float maths;
        float phy;
    public:
        void set_marks(float, float);
        void get_marks(void);
};
void Exam :: set_marks(float m,float p){
    maths = m;
    phy = p;
}
void Exam :: get_marks(){
    cout << "Maths marks :- " << maths<<endl;
    cout << "Physics marks :- " << phy<<endl;
}

class Result : public Exam {
    float perc;
    public:
        void display(){
            get_roll_N();
            get_marks();
            cout << "Percentage :- " << (maths + phy) / 2 << endl;
        }
};
int main()
{
    Result r;
    r.set_roll_N(101);
    r.set_marks(99, 97);
    r.display();
    return 0;
}