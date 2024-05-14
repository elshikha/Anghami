#pragma once

ref class N {
public:
	System::String^ trackname;
    System::String^ mp3file;
	System::String^ duration;
	N^ next;

	N() {
		trackname = "";
        mp3file = "";
		duration = "";
		next = nullptr;
	}

	N(System::String^ valu,System::String^ mp3,System::String^ val) {
		trackname = valu;
		duration = val;
        mp3file = mp3;
		next = nullptr;
	}
};
ref class notLL
{
public:
    N^ head;
    N^ tail;
    notLL() {
        head = nullptr;
    }
    void insert(System::String^ valu,System::String^ mp3, System::String^ val) {
        N^ newnode = gcnew N();
        newnode->mp3file = mp3;
        newnode->trackname = valu;
        newnode->duration = val;
        if (head == nullptr) {
            head = newnode;
            tail = newnode;
        }
        else {
            tail->next = newnode;
            tail = newnode;
        }
    }
    void display() {
        N^ temp = gcnew N();
        temp = head;
        while (temp != nullptr)
        {
            temp = temp->next;
        }
    }
};

