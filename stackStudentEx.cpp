#include <iostream>
#include <stack>
#include <string>

using namespace std;
typedef string String;

class Student{
    private :
        String name;
        
    public :
        Student(String n);
        String getName();
};

    //Student::Student(){}
    Student::Student(String n){
        this->name = n;
    }

    String Student::getName(){
        return this->name;
    }

stack<Student> myStack;
int main(){
    Student* a = new Student("park");
    myStack.push(*a);
    myStack.push(Student("chan"));
    myStack.pop();
    cout << myStack.empty() << endl;
    cout << myStack.top().getName() << endl;
    cout << myStack.size() << endl;
    return 0;
}
