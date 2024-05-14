#pragma once
ref class notqueue
{
	ref class N {
	public:
		System::String^ data;
		N^ next;

		N() {
			data = "0";
			next = nullptr;
		}

		N(System::String^ valu) {
			data = valu;
			next = nullptr;
		}
	};
private:
	N^ top;
	N^ tail;
	int size;

public:
	notqueue() {
		size = 0;
		top = nullptr;
		tail = nullptr;
	}
	bool IsEmpty() {
		return size == 0;
	}
	void Enqueue(System::String^ val) {
		N^ node = gcnew N(val);
		if (top == nullptr) {
			top = tail = node;
		}
		else {
			tail->next = node;
			tail = node;
		}
		size++;
	}
	System::String^ Dequeue() {
		if (IsEmpty()) {
			return nullptr;
		}

		System::String^ val = top->data;
		N^ temp = top;
		top = top->next;
		delete temp;
		size--;
		return val;
	}
	void Clear() {
		while (!IsEmpty()) {
			Dequeue();
		}
	}
	System::String^ Peek() {
		if (top != nullptr) {
			return top->data;
		}
		return nullptr;
	}
	int get_size() {
		return size;
	}
};

