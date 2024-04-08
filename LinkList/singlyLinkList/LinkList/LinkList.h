#pragma once

/// This class contains the declaration of the singlyNode linkList
/// data structure. This is a generic class to create list of different 
/// data types.
template <class T>

class LinkList
{
private:
	/// singlyNode data struct defined the data structure
	/// for the LinkList. This singlyNode only points to the next
	/// memory block in the memory.
	struct singlyNode
	{
		T data;
		singlyNode* pointerToNext;
		singlyNode(T value) : data(value), pointerToNext(nullptr) {}
	};

	// pointer to the first node of the list.
	singlyNode* head;

public:
	/// Inserts the element at the begining of the list.
	void insertAtBegin(T value);
	/// Insert the element at the end of the list.
	void insertAtLast(T value);
	/// Insert element of the posititon of the given value.
	void insertAtPosition(T position,T value);
	/// Returns boolean based on wheather list empty or not.
	bool isEmpty();
	/// deletes the first element in the list.
	void deleteFirst();
	/// deletes the last element in the list.
	void deleteLast();
	/// deletes the node with given value.
	void deleteElement(T value);
	/// Prints the elements of the list.
	void traverseList();
	/// search for given element in the list. Returns true if found else false.
	bool searchElement(T value);
	/// returns the size of the list.
	unsigned size();

};

