#include <iostream>
#include "stack.h"

int main()
{
    std::cout << "Hello world\n";
    Stack* s = new Stack(10);
    s->getTop();
    s->getHeight();
    s->print();

    s->push(1);
    s->push(2);
    s->push(3);
    s->print();
    s->getHeight();

    std::cout << s->pop() << std::endl;
    s->print();
    
    return 0;

}
