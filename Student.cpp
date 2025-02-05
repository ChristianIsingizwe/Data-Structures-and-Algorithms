#include <iostream>
using namespace std;


struct Student {
    int code;
    string name;
    string school;
    string level;
    int age;

    student *next;

    Student(int code, string name, string school, string level, int age){
        code = code;
        name = name;
        school = school;
        level = level;
        age = age;
    }
};

void display(Student *head){
    while(head){
        cout << head->code<<" " << head -> name <<" " << head-> school << " "<< head -> level << head->age <<endl;
    }
}

int main()
{
    Student *s1 = new Student();
    s1 -> code = 101;
    s1 -> name = "Mary";
    s1 -> school = "RCA";
    s1 -> level = "Y2";
    s1 -> age = 15;

    Student *s2 = new Student(102, "Peter", "RCA", "Y3", 17);
    Student *s2 = new Student(102, "Peter", "RCA", "Y3", 17);
    Student *s2 = new Student(102, "Peter", "RCA", "Y3", 17);
}
