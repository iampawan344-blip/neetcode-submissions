
class MyCircularQueue {
public:
    vector<int> q;
    int front, rear, count, K;

    MyCircularQueue(int k) {
        K = k;
        q.resize(K);
        front = 0;
        rear = -1;
        count = 0;
    }

    bool enQueue(int value) {
        if(isFull()) return false;

        rear = (rear + 1) % K;
        q[rear] = value;
        count++;

        return true;
    }

    bool deQueue() {
        if(isEmpty()) return false;

        front = (front + 1) % K;
        count--;

        return true;
    }

    int Front() {
        if(isEmpty()) return -1;
        return q[front];
    }

    int Rear() {
        if(isEmpty()) return -1;
        return q[rear];
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == K;
    }
};
