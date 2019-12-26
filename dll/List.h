#ifndef LIST_H
#define LIST_H

#include<iostream>

struct node {
	uint8_t m_data;
	uint32_t m_frequency;
	node* next{ nullptr };
	node* prev{ nullptr };

	node(uint8_t data, uint32_t frequency) : m_data{ data }, m_frequency{ frequency } {};

	uint8_t getData() const;
	uint32_t getFrequency() const;
};

class List {
private:
	node* head;
	node* tail;
public:
	List();
	~List();
	void push(uint8_t data, uint32_t frequency);
	void pop();
	void print(); //test func
	void checkLinkage(); //test func
	const node* top();
};

#endif 
