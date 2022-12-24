#include<iostream>
using namespace std;
template<class T>
class Student{
    private:
    int std_rollno;
    string std_name;
    T std_marks;
    public:
    void set_data(int x, string y, T z)
    {
        std_rollno=x;
        std_name=y;
        std_marks=z;
    }
    void display()
    {
        cout<<"Student Roll Number:"<<std_rollno<<endl;
        cout<<"Name of Student:"<<std_name<<endl;
        cout<<"Student Marks:"<<std_marks<<endl;
    }

};

int main()
{
    Student<int> s1; 
    Student<float> s2;
    cout<<"College 1:"<<endl;
    s1.set_data(101, "Sriyanshu", 99);
    s1.display();
    cout<<"College 2:"<<endl;
    s2.set_data(101, "Shivanshu", 96.5);
    s2.display();
    return 0;   
}