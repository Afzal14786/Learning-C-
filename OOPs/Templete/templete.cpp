#include <iostream>
using namespace std;

template <class T>
class Stack {
    private:
        T *stack;
        int top = -1;
        int size;

    public:
        Stack(int size) {
            this->size = size;
            top = -1;
            stack = new T[size];
        }

        void push(T x);
        T pop();
};
template <class T>
void Stack<T> :: push(T x) {
    if (top == size-1) {
        cout << "Stack Is Full." << endl;
    } else {
        top++;
        stack[top] = x;
    }
}

template <class T>
T Stack<T> :: pop() {
    T val = 0;
    if (top == -1) {
        cout << "Stack Is Empty" << endl;
    } else {
        val = stack[top];
        top--;
    }

    return val;
}

int main() {

    Stack<int> s(10);
    s.push(10);
    s.push(20);

    Stack<float> s2(5);
    s2.push(10.6);
    s2.push(12.9);

    cout << s.pop() << endl;
    cout << s2.pop() << endl;
    

    return 0;
}