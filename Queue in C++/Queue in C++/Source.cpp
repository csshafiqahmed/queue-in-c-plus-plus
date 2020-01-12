#include<iostream>
#include<conio.h>
using namespace std;

class Queue{
public:
	Queue();
	Queue(int array_size);
	bool isEmpty();
	bool isFull();
	int QueueSize();
	int MaxSize();
	void Display();
	void AQueue(int num);
	void DQueue();
	int Frontvalue();
	int Rearvalue();
	void Reset();
private:
	int size, front, rear, count;
	int * arr;
};
Queue::Queue(){
	size = 10;
	arr = new int[size];
	Reset();
}
Queue::Queue(int array_size){
	size = array_size;
	arr = new int[size];
	Reset();
}
void Queue::Reset(){
	front = 0;
	rear = size - 1;
	count = 0;
}
bool Queue::isEmpty(){
	return count == 0;
}
bool Queue::isFull(){
	return count == size;
}
int Queue::QueueSize(){
	return count;
}
int Queue::MaxSize(){
	return size;
}

void Queue::Display(){
	if (isEmpty())
		cout << "Queue is Empty!\n";
	else {
		cout << "[QUEUE] <-FRONT ";
		int id = front;
		for (int i = 0; i<count; i++){
			cout << arr[id] << ", ";
			id = (id + 1) % size;
		}
		cout << "<-REAR" << endl;
	}
}
void Queue::AQueue(int num){
	if (isFull())
		cout << "Error! Over Flow!" << endl;
	else {
		rear = (rear + 1) % size;
		count++;
		arr[rear] = num;
	}
}
void Queue::DQueue()
{
	if (isEmpty())
		cout << "Error! UnderFlow!\n";
	else
	{
		cout << arr[front] << ": is deleted\n";
		count--;
		front = (front + 1) % size;
	}
}
int Queue::Frontvalue()
{
	if (!isEmpty())
		return arr[front];
	cout << "Queue is Empty!\n";
	return NULL;
}
int Queue::Rearvalue()
{
	if (!isEmpty())
		return arr[rear];
	cout << "Queue is Empty!\n";
	return NULL;
}
void main() {
	Queue q(5);
	q.Display();
	_getch();

	q.AQueue(4);
	q.Display();
	_getch();
	q.AQueue(3);
	q.Display();
	_getch();
	q.AQueue(2);
	q.Display();
	_getch();


	q.DQueue();
	q.Display();
	_getch();
	q.DQueue();
	q.Display();
	_getch();

	q.AQueue(9);
	q.Display();
	_getch();
	q.AQueue(1);
	q.Display();
	_getch();
	q.AQueue(6);
	q.Display();
	_getch();

	q.AQueue(7);
	q.Display();
	_getch();
	q.AQueue(8);
	q.Display();
	_getch();
	q.AQueue(11);
	q.Display();
	_getch();
	q.AQueue(12);
	q.Display();
	_getch();

	cout << "Front Value:" << q.Frontvalue();
	cout << ", Rear Value:" << q.Rearvalue() << endl;
	_getch();


	q.DQueue();
	q.Display();
	_getch();

	cout << "Front Value:" << q.Frontvalue();
	cout << ", Rear Value:" << q.Rearvalue() << endl;
	_getch();

	q.DQueue();
	q.Display();
	_getch();

	q.DQueue();
	q.Display();
	_getch();
	q.DQueue();
	q.Display();
	_getch();
	q.DQueue();
	q.Display();
	_getch();
	q.DQueue();
	q.Display();
	_getch();
}

