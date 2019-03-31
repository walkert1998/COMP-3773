///////////////////////////////////////////////////////////////////////////////
//
//	File: TreeSet.cpp
//	Author: Thomas Walker 100139103
//	Assignment #2
//	Feb 7, 2019
//
///////////////////////////////////////////////////////////////////////////////
#ifndef TREESET_H
#define TREESET_H

#include <iostream>
#include <string>
using namespace std;

// Dr. Zhang said he didn't want the binary search tree code in the header,
// therefore the only code present is this forward declaration of the node.
class Node;

class TreeSet
{
	public:
		TreeSet();
		TreeSet(const TreeSet& tree);
		TreeSet(string array[], int arraySize);
		~TreeSet();
		bool add(const string& s);
		void clear();
		bool contains(const string& s);
		bool isEmpty();
		bool remove(const string& s);
		int size();
		int toArray(string sa[]) const;
		TreeSet& operator=(const TreeSet& set);

	private:
		int set_size_;
		Node * head_;
};

#endif