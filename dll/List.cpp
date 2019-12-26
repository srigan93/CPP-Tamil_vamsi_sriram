#include<iostream>
#include"List.h"


/*------------LIST_RELATED_FUNCTIONS------------*/
List::List() {
	head = nullptr;
	tail = nullptr;
}//end of List cunstructor

List::~List() {
	node* temp = tail;
	while (tail != nullptr) {
		tail = tail->prev;
		if (tail != nullptr) tail->next = nullptr;
		delete temp;
		temp = tail;
	}//while tail != nullptr
}//end of List destructor

void List::push(uint8_t data, uint32_t frequency) {
	node* newNode = new node(data, frequency);
	if (head == nullptr) {
		head = newNode;
		tail = newNode;
	}//if head == nullptr
	else {
		newNode->prev = tail;
		tail->next = newNode;
		tail = newNode;
	}//else head != nullptr
}//end of push function

void List::pop() {
	if (tail != nullptr) {
		node* temp = tail;
		tail = tail->prev;
		if (tail != nullptr) tail->next = nullptr;
		delete temp;
	}//if head != nullptr
}//end of pop function
/*------------TEST_FUNCTIONS------------*/
void List::print() {
	node* temp = tail;
	while (temp != nullptr) {
		std::cout << "Data: " << temp->m_data << " Frequency: " << temp->m_frequency << '\n';	//only for test porpuse 
		temp = temp->prev;
	}//while temp != nullptr
}//end of print function

void List::checkLinkage() {
	node* temp = head;																				/*these will be removed when the program is finished*/
	while (temp != nullptr) {
		std::cout << "Data: " << temp->m_data << " Frequency: " << temp->m_frequency << '\n';	//only for test porpuse 
		temp = temp->next;
	}//while temp != nullptr
	temp = tail;
	while (temp != nullptr) {
		std::cout << "Data: " << temp->m_data << " Frequency: " << temp->m_frequency << '\n';	//only for test porpuse 
		temp = temp->prev;
	}//while temp != nullptr
}
/*------------TEST_FUNCTIONS------------*/

const node* List::top() {
	return tail;
}
/*------------LIST_RELATED_FUNCTIONS------------*/

/*------------NODE_RELATED_FUNCTIONS------------*/
uint8_t node::getData() const {
	return m_data;
}

uint32_t node::getFrequency() const {
	return m_frequency;
}
/*------------NODE_RELATED_FUNCTIONS------------*/
