/*
	using the Floyd's approach slow pointer and fast pointer 
	
		1) Detect a loop and remove that loop.
		2) Detect a loop and return the length of the loop.
		3) Check linked list with a loop is palindrome or not.
		4) print the circular linked list.

*/

#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

struct Node* head = NULL;

void insert(int new_data) {
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = NULL;
	if (head == NULL) {
		head = new_node;
		return;
	}
	struct Node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = new_node;
}

void createLoop() {
	struct Node* temp = head;
	if (head == NULL) {
		cout << "Loop can't be created" << endl;
		return;
	}
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = head;
}

void detectLoop() {
	struct Node* fast = head, * slow = head;
	while (fast != NULL && fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow) {
			cout << "Loop detected" << endl;
			return;
		}
	}
	cout << "Loop not detected" << endl;
}

int lengthOfLoop() {
	struct Node* fast = head, * slow = head;
	int length = 1;
	while (fast != NULL && fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow) {
			while (slow->next != fast) {
				slow = slow->next;
				length++;
			}
			return length;
		}
	}
}

void removeLoop() {
	struct Node* fast = head, * slow = head, * temp = head, * prev = head;
	while (fast != NULL && fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow) {
			if (temp == slow) {
				while (temp->next != slow) {
					temp = temp->next;
				}
				temp->next = NULL;
				return;
			}
			while (temp != slow) {
				prev = slow;
				temp = temp->next;
				slow = slow->next;
			}
			prev->next = NULL;
			return;
		}
	}
}

int lengthOfLinkedListWithLoop() {
	struct Node* temp = head, * slow = head, * fast = head;
	int length = lengthOfLoop(), count = 0, n = 0;
	while (true) {
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow) {
			if (temp == slow) {
				count = 0;
				break;
			}
			while (temp != slow) {
				temp = temp->next;
				slow = slow->next;
				count++;
			}
			break;
		}
	}
	n = count + length;
	return n;
}

void checkPalindrome() {
	int n = lengthOfLinkedListWithLoop();
	int arr[n], i = 0;
	struct Node* temp = head;
	while (i < n) {
		arr[i++] = temp->data;
		temp = temp->next;
	}
	i--;
	temp = head;
	while (i >= 0) {
		if (temp->data != arr[i--]) {
			cout << "Not a palindrome" << endl;
			return;
		}
		temp = temp->next;
	}
	cout << "Palindrome" << endl;
}

void printCircularList() {
	int n = lengthOfLinkedListWithLoop(), count = 0;
	struct Node* temp = head;
	cout << "The Circular Linked List is ";
	while (count < n) {
		cout << temp->data << " ";
		temp = temp->next;
		count++;
	}
	cout << endl;
}

void printList() {
	struct Node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main() {
	insert(30);
	insert(20);
	insert(10);


	printList();

	cout << "Before creating loop" << endl;
	detectLoop();
	printList();

	cout << "After creating loop" << endl;
	createLoop();
	//Print the Circular Linked List
	printCircularList();

	detectLoop();

	cout << "The length of the loop is " << lengthOfLoop() << endl;

	//Check if linked list is palindrome
	checkPalindrome();

	removeLoop();

	cout << "After removing loop" << endl;
	detectLoop();
	printList();

	return 0;
}