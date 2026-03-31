#include "queue.hpp"

int main()
{
    Queue q;
    q.Enque(5);
    q.Enque(10);
    q.Deque();
    q.Enque(20);
    q.Enque(34);
    q.Enque(56);

    q.Deque();
    q.Deque();
    q.Display();

    return 0;
}