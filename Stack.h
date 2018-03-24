#include <iostream>
#include <cassert>

using namespace std;

template <typename T>
class Stack
{
    private:
        T *sptr; //указатель
        int size;
        T cnt; //вершина
    public:
        Stack(int s);
        ~Stack();
        bool push(const T );
        bool pop();
        void printStack();
};


//конструктор
template <typename T>
Stack<T>::Stack(int s)
{
    size = s;
    sptr = new T;
    cnt = -1; // значит пуст

};

//деструктор
template <typename T>
Stack<T>::~Stack()
{
    delete sptr;
    //cnt = poison;
};


template <typename T>
bool Stack<T>::push(T value)
{
    assert((cnt != size -1)&& "stack is full" );
    cnt++;
    sptr[cnt] = value;
};


template <typename T>
bool Stack<T>::pop()
{
    assert((cnt != -1)&& "stack is empty");
    sptr[cnt]= 0;
    cnt--;
};

template <typename T>
void Stack<T>::printStack()
{
    for (int i= size -1; i>=0; i--)
        cout << sptr[i] << endl;
};

