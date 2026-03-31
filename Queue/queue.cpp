#include "queue.hpp"

Queue::Queue()
{
    this->rear = -1;
    this->front = -1;
    for (int i = 0; i < 5; i++)
    {
        arr[i] = 0;
    }
}

Queue::~Queue()
{

}

bool Queue::isFull() const
{
    if (this->rear == 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Queue::isEmpty() const
{
    if ((this->front)  == (this->rear))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Queue::Enque(int e)
{
    if (this->isFull())
    {
        std::cout << "Queue Is Full, Can Not Enque." << std::endl;
        return;
    }
    arr[++this->rear] = e;
}

void Queue::Deque()
{
    if (this->isEmpty())
    {
        std::cout << "Queue Is Empty, Can Not Deque." << std::endl;
        return;
    }
    arr[++this->front] = 0;
}

void Queue::Display() const
{
    if (this->isEmpty())
    {
        std::cout << "Queue Is Empty!!!" << std::endl; 
        return;
    }
    
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i] << " ";
    }
}

int Queue::Count() const
{
    return (this->rear - this->front + 1);
}