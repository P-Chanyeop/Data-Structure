#include <iostream>
#include <queue>
#include <string>


using namespace std;
typedef string String;


class Queue{
    private:
        String* S;
        int capacity;
        int r;
        int f;
        int n;

    public:
        Queue(int cap);        // constructor
        ~Queue();
        int size();     
        bool empty();
        const String& front();
        void push(const String& s);
        void pop();
};

Queue::Queue(int cap){
    S = new String[cap];
    capacity = cap;
    r=0;
    f=0;
    n=0;
}

Queue::~Queue(){
    delete [] S;
}
int Queue::size(){
    return n;
}

bool Queue::empty(){
    return (n==0);
}

const String& Queue::front(){
    return S[f];
}

void Queue::push(const String& s){
    S[r] = s;
    r = (r+1) % capacity;
    n++;
}

void Queue::pop(){
    f = (f+1) % capacity;
    n--;
}

int main(){
    Queue Q(20);
    cout << Q.size() << endl;
    cout << Q.empty() << endl;
    Q.push("Aaa");
    Q.push("Bbb");
    Q.push("Ccc");
    cout << Q.front() << endl;
    cout << Q.size() << endl;
    Q.pop();
    Q.pop();
    Q.pop();
    cout << Q.size() << endl;
    return 0;
}