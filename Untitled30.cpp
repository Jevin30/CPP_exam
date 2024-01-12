#include<iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int width;

    public:
        void setLength(int len) {
            length = len;
        }

        void setWidth(int wid) {
           wid;
        }

        int getLength() {
           length;
        }

        int getWidth() {
         width;
        }

        int calculateArea() {
         length * width;
        }
};

int main() {
    Rectangle rect;
    rect.setLength(50);
    rect.setWidth(5);
    cout << "Area of rectangle: " << rect.calculateArea() << endl;
}
