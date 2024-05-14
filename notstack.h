#pragma once
ref class notstack
{
	ref class N {
	public:
		int data;
		N^ next;

		N() {
			data = 0;
			next = nullptr;
		}

		N(int valu) {
			data = valu;
			next = nullptr;
		}
	};
private:
    N^ top;
public:
    notstack() {
        top = nullptr;
    }
    void push(int val) {
        if (top == nullptr) top = gcnew N(val);
        else {
            N^ temp = gcnew N(val);
            temp->next = top;
            top = temp;
        }
    }
    int pop() {
        if (isEmpty()) {
            return 0;
        }
        else {
            int copy_of_url = top->data;
            N^ temp = top;
            top = top->next;
            delete temp;
            return copy_of_url;
        }
    }
    int peek() {
        if (isEmpty()) {
            return 0;
        }
        return top->data;
    }
    bool isEmpty() {
        if (top == nullptr) return true;
        else return false;
    }
};

