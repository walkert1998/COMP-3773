///////////////////////////////////////////////////////////////////////////////
//
//	File: TreeSet.cpp
//	Author: Thomas Walker 100139103
//	Assignment #2
//	Feb 7, 2019
//
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include "TreeSet.h"
using namespace std;

// defined Node class to be used in implementing the binary search tree
class Node
{
	friend class TreeSet;
	public:
		string value_;
		Node* left;
		Node* right;
};

// Creates a new node
Node * new_node(string key)
{
	Node * node = new Node;
	node->value_ = key;
	node->left = node->right = NULL;
	return node;
}

// Traverses the BST inorder
void in_order(Node * root)
{
	if (root != NULL)
	{
		in_order(root->left);
		cout << root->value_ << endl;
		in_order(root->right);
	}
}

// Searches BST for a specified value, returns true if it is found, false if not
bool find(Node * node, const string& key)
{
	if (node == NULL)
		return false;

	else if (key == node->value_)
		return true;

	else if (node->value_ > key)
		return find(node->left, key);

	else 
		return  find(node->right, key);

	return false;
}

// Returns the minimum value in the BST
Node * get_min_value(Node * node)
{
	Node * current_node = node;

	while (current_node->left != NULL)
		current_node = current_node->left;

	return current_node;
}

// Inserts a new node into the BST
Node * insert(Node * n, string value)
{
	if (n == NULL)
		return new_node(value);

	if (value < n->value_)
		n->left = insert(n->left, value);

	else if (value >= n->value_)
		n->right = insert(n->right, value);

	return n;
}

// Removes a node from the BST
Node * remove_node(Node * node, string key)
{
	if (node == NULL)
		return NULL;

	if (key < node->value_)
		node->left = remove_node(node->left, key);

	else if (key > node->value_)
		node->right = remove_node(node->right, key);

	else
	{
		if (node->left == NULL)
		{
			Node * temp = node->right;
			//free(node);
			return temp;
		}

		else if (node->right == NULL)
		{
			Node * temp = node->left;
			//free(node);
			return temp;
		}

		Node * temp = get_min_value(node->right);

		node->value_ = temp->value_;

		node->right = remove_node(node->right, temp->value_);
	}

	return node;
}

// Converts BST to array values, this function does not work,
// anytume I attempted to run it I received read access violation
// exceptions.
void convert_tree(Node * node, string arr[], int i)
{
	if (node == NULL)
		return;

	arr[i] = node->value_;
	i++;

	if (node->left != NULL)
		convert_tree(node->left, arr, i);


	if (node->right != NULL)
		convert_tree(node->right, arr, i);
}


// Empty constructor for TreeSet
TreeSet::TreeSet()
{
	head_ = NULL;
	set_size_ = 0;
}

// Copy constructor for TreeSet
TreeSet::TreeSet(const TreeSet & tree)
{
	head_ = tree.head_;
	set_size_ = tree.set_size_;
}

// Constructor for TreeSet
TreeSet::TreeSet(string array[], int array_size)
{
	for (int i = 0; i < array_size; i++)
	{
		head_ = insert(head_, array[i]);
	}
	set_size_ = array_size;
}

// Destructor for TreeSet
TreeSet::~TreeSet()
{
	set_size_ = 0;
	head_ = NULL;
	delete head_;
}

// Adds a string to the set
bool TreeSet::add(const string& s)
{
	if (contains(s))
		return false;
	head_ = insert(head_, s);
	set_size_++;
	return true;
}

// Removes everything from the set
void TreeSet::clear()
{
	set_size_ = 0;
	head_ = NULL;
}

// Checks if the set contains a string
bool TreeSet::contains(const string& s)
{
	return find(head_, s);
}

// Checks if set is empty
bool TreeSet::isEmpty()
{
	return set_size_ == 0;
}

// Removes item from set
bool TreeSet::remove(const string& s)
{
	if (!contains(s))
		return false;
	head_ = remove_node(head_, s);
	set_size_--;
	return true;
}

// Returns the size of the set
int TreeSet::size()
{
	return set_size_;
}

// Places all items in the set into an array
int TreeSet::toArray(string sa[]) const
{
	convert_tree(head_, sa, set_size_);
	return 0;
}

// Overrides assignmetn operator for TreeSets
TreeSet & TreeSet::operator=(const TreeSet & set)
{
	TreeSet temp;
	for (int i = 0; i < set.set_size_; i++)
		temp.head_ = insert(set.head_, head_->value_);
	temp.set_size_ = set.set_size_;
	return temp;
}