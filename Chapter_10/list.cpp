#include "list.h"
#include <iostream>

List::List()
{
	m_counter = 0;
	m_head = NULL;
}
List::~List()
{
	Node * deletor = m_head;
	while (deletor)
	{
		m_head = m_head->next;
		delete deletor;
		deletor = m_head;
	}
}
bool List::Add(const Item & item)
{
	if (m_counter < MAX)
	{
		Node * new_node = new Node{item, m_head};
		m_head = new_node;
		m_counter++;
		return true;
	}
	else
		return false;
}
void List::Visit(void (*f)(Item &))
{
	Node * visiter = m_head;
	while (visiter)
	{
		f(visiter->item);
		visiter = visiter->next;
	}
}
void List::Show() const
{
	Node * viewer = m_head;
	while (viewer)
	{
		std::cout << viewer->item << ' ';
		viewer = viewer->next;
	}
	std::cout << std::endl;
}