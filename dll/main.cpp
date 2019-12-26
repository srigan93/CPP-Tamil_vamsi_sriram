#include<iostream>
#include"List.h"

int main() {
	List list;
	list.push('a', 1);
	list.push('b', 2);
	list.push('c', 3);
	list.push('d', 4);

	
	const node* topval;
	topval = list.top();																					//or use this to access the data
	std::cout << "Top data: " << topval->m_data << " Top frequency: " << topval->m_frequency << std::endl;
	list.pop();
	topval = list.top();
	std::cout << "Top data: " << topval->m_data << " Top frequency: " << topval->m_frequency << std::endl;

	list.push('d', 4);
	list.checkLinkage();
	std::cout << '\n';

	for (int i{}; i < 3; i++) {
		list.pop();
		list.print();
		std::cout << '\n';
	}

	return 0;
}
