#include <iostream>
#include <list>
using namespace std;

class Student{
    private:
        string name;
    
    public:
        Student(const string& n){
            this->name = n;
        }
        const string& getName(){
            return this->name;
        }        
};

void vectorSum2(list<Student> V){
    for(list<Student>::iterator p = V.begin(); p != V.end(); ++p){
        (Student)*p; 
        cout << " + ";
    }

}
int main(){
    list<Student> myList;
    myList.push_front(Student("park"));
    myList.push_front(Student("park"));
    myList.push_front(Student("park"));
   
  
    cout << myList.size() << endl;
    cout << myList.front().getName() << endl;
    cout << myList.back().getName();

    return 0;
}