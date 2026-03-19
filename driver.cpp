#include <iostream>
#include <string>
#include "LinkedQueue.hpp"

using namespace std;

int main() {
    LinkedQueue<int> q;

    cout << "Expected 1, got " << q.isEmpty() << endl;
    cout << "Expected 0, got " << q.getLength() << endl;

    try {
        q.front();
    }
    catch (string e) {
        cout << "Expected Queue is empty, got " << e << endl;
    }

    try {
        q.back();
    }
    catch (string e) {
        cout << "Expected Queue is empty, got " << e << endl;
    }

    try {
        q.dequeue();
    }
    catch (string e) {
        cout << "Expected Queue is empty, got " << e << endl;
    }

    q.enqueue(10);
    cout << "Expected 0, got " << q.isEmpty() << endl;
    cout << "Expected 1, got " << q.getLength() << endl;
    cout << "Expected 10, got " << q.front() << endl;
    cout << "Expected 10, got " << q.back() << endl;

    q.enqueue(20);
    q.enqueue(30);
    cout << "Expected 3, got " << q.getLength() << endl;
    cout << "Expected 10, got " << q.front() << endl;
    cout << "Expected 30, got " << q.back() << endl;

    q.dequeue();
    cout << "Expected 2, got " << q.getLength() << endl;
    cout << "Expected 20, got " << q.front() << endl;
    cout << "Expected 30, got " << q.back() << endl;

    q.dequeue();
    cout << "Expected 1, got " << q.getLength() << endl;
    cout << "Expected 30, got " << q.front() << endl;
    cout << "Expected 30, got " << q.back() << endl;

    q.dequeue();
    cout << "Expected 1, got " << q.isEmpty() << endl;
    cout << "Expected 0, got " << q.getLength() << endl;

    try {
        q.front();
    }
    catch (string e) {
        cout << "Expected Queue is empty, got " << e << endl;
    }

    try {
        q.back();
    }
    catch (string e) {
        cout << "Expected Queue is empty, got " << e << endl;
    }

    try {
        q.dequeue();
    }
    catch (string e) {
        cout << "Expected Queue is empty, got " << e << endl;
    }

    q.enqueue(5);
    q.enqueue(15);
    q.enqueue(25);

    LinkedQueue<int> copyQ(q);
    cout << "Expected 3, got " << copyQ.getLength() << endl;
    cout << "Expected 5, got " << copyQ.front() << endl;
    cout << "Expected 25, got " << copyQ.back() << endl;

    q.dequeue();
    cout << "Expected 15, got " << q.front() << endl;
    cout << "Expected 5, got " << copyQ.front() << endl;

    LinkedQueue<int> assignQ;
    assignQ.enqueue(100);
    assignQ.enqueue(200);
    assignQ = q;
    cout << "Expected " << q.getLength() << ", got " << assignQ.getLength() << endl;
    cout << "Expected " << q.front() << ", got " << assignQ.front() << endl;
    cout << "Expected " << q.back() << ", got " << assignQ.back() << endl;

    q.clear();
    cout << "Expected 1, got " << q.isEmpty() << endl;
    cout << "Expected 0, got " << q.getLength() << endl;

    try {
        q.front();
    }
    catch (string e) {
        cout << "Expected Queue is empty, got " << e << endl;
    }

    try {
        q.back();
    }
    catch (string e) {
        cout << "Expected Queue is empty, got " << e << endl;
    }

    LinkedQueue<int> selfQ;
    selfQ.enqueue(7);
    selfQ.enqueue(8);
    selfQ = selfQ;
    cout << "Expected 2, got " << selfQ.getLength() << endl;
    cout << "Expected 7, got " << selfQ.front() << endl;
    cout << "Expected 8, got " << selfQ.back() << endl;

    return 0;
}