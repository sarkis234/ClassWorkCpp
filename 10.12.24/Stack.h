#pragma once
#include "List.h"
using namespace std;

template <typename T>
class Stack
{
private:
	 List<T> arr;
public:
	Stack(T* arr, int size) : arr(arr, size) {
		
	}
	Stack(Stack<T>& stack) {
		this->arr = stack.arr;
	}
	void pushBack(T value) { arr.pushBack(value); }
	void popBack() { arr.popBack(); }
	T top() {
		Node<T>* p = this->arr.getFirst();
		while (p->next != nullptr) {
			/*cout << p->value << " ";*/
			p = p->next;
		}
		return p->value;
	}
	~Stack() {
	}
};