#include <iostream>
#include "queue.h"

int main()
{
    std::cout << "Hello world\n";
    Queue* s = new Queue();
    s->enqueue(1);
    s->enqueue(2);
    s->enqueue(3);
    s->enqueue(4);
    s->print();
    std::cout << s->dequeue() << std::endl;
    s->print();

    std::cout << s->dequeue() << std::endl;
    std::cout << s->dequeue() << std::endl;
    std::cout << s->dequeue() << std::endl;
    std::cout << s->dequeue() << std::endl;
    std::cout << s->dequeue() << std::endl;
    s->print();
    
    return 0;

}
