using System;

#define ASCENDING  0
#define DESCENDING 1

public class node {
    int value;
    node* above;
    node* below;
    node* greater;
    node* less;
    node(int _value){ value = _value; above = NULL; below = NULL; greater = NULL; less = NULL; }

};

class SmartStack {
public:
    SmartStack() { _size = 0; _top = NULL; _greatest = NULL; }

    int size() { return _size; }
    void push(int value);
    int pop();
    void removeGreater(int value);
    void displayStack();
    void displayOrdered(int order);

private:
    node* _top;
    node* _greatest;
    node* _least;
    int _size;
    void _insert(node *newNode);
};

int SmartStack::pop() {
    if (_size > 0) {
        int ret = _top->value;
        if (_top->less != NULL) {
            _top->less->greater = _top->greater;
        }
        if (_top->greater != NULL) {
            _top->greater->less = _top->less;
        }
        if (_size > 1) {
            _top->below->above = NULL;
        }
        node* newTop = _top->below;
        delete _top;
        _top = newTop;
        _size--;
        return ret;
    }
    else {
        return -1001;
    }
}

void SmartStack::_insert(node *newNode) {
    node* current = _greatest->less;
    node* previous = _greatest;

    while (current != NULL ) {
        if (newNode->value > current->value) {
            break;
        }
        else {
            previous = current;
            current = current->less;
        }
    }
    if (current != NULL) {
        newNode->less = current;
        current->greater = newNode;
    }
    else {
        _least = newNode;
    }
    previous->less = newNode;
    newNode->greater = previous;


}

void SmartStack::push(int value) {
    node* newNode = new node(value);
    newNode->below = _top;

    if (_size == 0) {
        _greatest = newNode;
        _least = newNode;
    }
    else if (value >= _greatest->value) {
        newNode->less = _greatest;
        _greatest->greater = newNode;
        _greatest = newNode;
    }
    else if (value <= _least->value) {
        newNode->greater = _least;
        _least->less = newNode;
        _least = newNode;
    }
    else {
        _insert(newNode);
    }
    if (_size != 0) {
        _top->above = newNode;
    }
    _top = newNode;
    _size++;
}
void SmartStack::displayStack() {
    node* current = _top;
    while (current != NULL) {
        std::cout << current->value << std::endl;
        current = current->below;
    }
}
void SmartStack::displayOrdered(int order) {

    node* current;
    if (order == DESCENDING) {
        current = _greatest;
        while (current != NULL) {
            std::cout << current->value << std::endl;
            current = current->less;
        }
    }
    else {
        current = _least;
        while (current != NULL) {
            std::cout << current->value << std::endl;
            current = current->greater;
        }
    }
}

void SmartStack::removeGreater(int value) {
    if (_size > 0) {
        node* current = _greatest;
        while (current != NULL) {
            if (value >= current->value) {
                break;
            }
            if (current->above == NULL) {
                _top = current->below;
            }
            else {
                current->above->below = current->below;
            }
            if (current->below != NULL) {
                current->below->above = current->above;
            }
            node* newCurrent = current->less;
            delete current;
            current = newCurrent;
            _size--;
        }
        _greatest = current;

        if (_size == 0) {
            _least = NULL;
            _top = NULL;
        }
        else {
            current->greater = NULL;
        }
    }
}

int main(int argc, char* argv[])
{
    srand((unsigned)time(0));
    int n = (rand() % 40) + 1;

    SmartStack ss;

    for (int i = 0; i < n; i++) {
        int x = (rand() % 2001) - 1000;
        ss.push(x);
    }
    std::cout << "Size: " << ss.size() << std::endl;
    std::cout << "Stack:" << std::endl;
    ss.displayStack();
    std::cout << "Ordered:" << std::endl;
    ss.displayOrdered(ASCENDING);
    int x = (rand() % 2001) - 1000;
    std::cout << "Removing all numbers greater than " << x << std::endl;
    ss.removeGreater(x);
    std::cout << "Size: " << ss.size() << std::endl;
    std::cout << "Stack:" << std::endl;
    ss.displayStack();
    std::cout << "Ordered:" << std::endl;
    ss.displayOrdered(ASCENDING);
    std::cout << "Popping half the stack." << std::endl;
    int currentSize = ss.size();
    for (int i = 0; i < currentSize / 2; i++) {
        std::cout << "Popped: " << ss.pop() << std::endl;
    }
    std::cout << "Size: " << ss.size() << std::endl;
    std::cout << "Stack:" << std::endl;
    ss.displayStack();
    std::cout << "Ordered:" << std::endl;
    ss.displayOrdered(ASCENDING);

    system("echo pause");
    return 0;
}
