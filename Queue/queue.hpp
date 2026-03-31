#include <iostream>

class Queue
{
    public:
        Queue();
        ~Queue();
        void Deque();
        void Enque(int e);
        bool isEmpty() const;
        bool isFull() const;
        int Count() const;
        void Display() const;
    private:
        int arr[5];
        int rear;  // store the rear element index position
        int front;  // store the array first element front index position
};