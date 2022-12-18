#include <iostream>
#include <string>

const int MAX = 20;     // ?????? ??? ?????? 20 ????
using namespace std;
typedef string String;

// ???? ????? ????
class Stack {
    private :
        int index;      // ?????? ?ュ???(???)
        int data[MAX];      // ?????? 20 ?? ?鵄 ????;
        
    public :
        Stack() {index = -1;}    // constructor ??????
        bool empty();       // ?? ????? ?????? ????
        void push(int num);     // ??‘? ????? ???
        void pop();     // top?? ??? ???? ????
        int size();        //  ???? ?????? ????
        int top();      // top ???? ????

        
};

      /*  Stack::Stack(){
            index = -1;     // ???? ?ュ??? -1???? ????. ?????? ????? ?ュ??? 0???? ???????? ????
        }
*/
        bool Stack::empty(){
            return index == -1;     // ?ュ????? -1 ??? true ????( ?? ???? )
        }

        void Stack::push(int num){
            data[++index] = num;        // ?ュ??? ???? ?? ?????? ????
        } 

        void Stack::pop(){
            if(empty() == true){
                cout << "list is empty!! \n";       
                exit(-1);
            }
            data[index--];       // ?????? ???? ?? ?ュ??? ????
        }

        int Stack::size(){
            return index+1;     // index + 1???? ???? ?????? ??????
        }

        int Stack::top(){
            return data[index];     // index?? ??????? ????
        }

int main(){
    Stack myStack;
    cout << "is empty? " << myStack.empty() << "\n";
    myStack.push(4);
    myStack.push(5);
    myStack.push(6);
    cout << "top is " << myStack.top() << "\n";
    cout << "size is " << myStack.size() << "\n";
    myStack.pop();
    cout << "top is " << myStack.top() << "\n";
    cout << "size is " << myStack.size() << "\n";
    cout << "is empty? " << myStack.empty() << "\n";
    return 0;
}   // ???? ??? ?????????.