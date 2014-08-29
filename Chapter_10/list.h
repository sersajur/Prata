#ifndef LIST_H_
#define LIST_H_
typedef int Item;
class List
{
private:
	enum{MAX = 10};
	struct Node{
		Item item;
		Node * next;
	} * m_head;
	int m_counter;
public:
	List();
	~List();
	bool Add(const Item & item);
	bool IsEmpty() const { return m_counter == 0; }
	bool IsFull() const { return m_counter == MAX; };
	void Visit(void (*f)(Item &));
	void Show() const; //not required by task 10.8, but 
};
#endif