#include <iostream>
#include <queue>
using namespace std;
typedef double elem;

class Point2D{
    private:
        elem _x;
        elem _y;

    public:
        Point2D(elem x, elem y) : _x(x), _y(y) {}
        elem getX() const { return _x; }
        elem getY() const { return _y; }
        friend ostream& operator<<(ostream& os, const Point2D& obj);
};

ostream& operator<<(ostream& os, const Point2D& obj){
    os << obj.getX() << " , " << obj.getY();
    return os;
}

class LeftRight{
    public:
        bool operator()(const Point2D& p, const Point2D& q) const{
            return p.getX() < q.getX();
        }
};

class RightLeft{
    public:
        bool operator()(const Point2D& p, const Point2D& q) const{
            return !(p.getX() < q.getX());
        }
};

int main(){
    priority_queue<Point2D, vector<Point2D>, RightLeft> p2;
    p2.push(Point2D(8.5, 4.6));
    p2.push(Point2D(1.3, 5.7));
    p2.push(Point2D(2.5, 0.6));

    cout << p2.top() << endl; p2.pop();
    cout << p2.top() << endl; p2.pop();
    cout << p2.top() << endl; p2.pop();
    cout << p2.empty() << endl;
    return EXIT_SUCCESS;
}