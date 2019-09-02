#include<iostream>
using namespace std;
class BaseArray {
	int capacity; // 배열의 크기
	int* mem; // 동적할당 받을 정수형 배열을 가리키는 포인터
protected:
	BaseArray(int capacity = 10) {
		this->capacity = capacity;
		mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }
	void put(int index, int val) {
		mem[index] = val;
	}
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};
class MyQueue : public BaseArray {
	int front;
	int rear;
public:
	MyQueue() : BaseArray() { front = rear = 0; }
	MyQueue(int n) : BaseArray(n) { front = rear = 0; }
	void enqueue(int n) {
		put(rear++, n);
	}
	int capacity() {
		return getCapacity();
	}
	int length() {
		return rear - front;
	}
	int dequeue() {
		return get(front++);
	}
};
int main() {
	MyQueue mq(10);
	int n;
	cout << "input five integers >> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mq.enqueue(n); // 큐 객체에 정수 값을 1개 삽입(insert)
	}
	cout << "Queue capacity : " << mq.capacity();
	cout << ", Queue length : " << mq.length() << endl;
	while (mq.length() != 0) {
		cout << mq.dequeue() << " "; // 큐에서 제거하여 출력
	}
	cout << endl << "Queue length : " << mq.length() << endl;
}