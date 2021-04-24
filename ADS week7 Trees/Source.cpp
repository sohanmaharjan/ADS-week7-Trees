#include <iostream>
#include <string>
#include "BST.h"

using namespace std;

void main() {
	BST bst1;
	//StudentNode* sNodePtr = new StudentNode(123, "asasd");
	bst1.insert(new StudentNode(3433, "Jeff"));
	bst1.insert(new StudentNode(2222, "Bill"));
	bst1.insert(new StudentNode(1221, "Trevor"));
	bst1.insert(new StudentNode(4533, "Uncle"));
	bst1.insert(new StudentNode(3333, "Adam"));
	bst1.insert(new StudentNode(6666, "Bridge"));
	bst1.insert(new StudentNode(7777, "Bam"));
	bst1.insert(new StudentNode(4343, "Bucket"));

	cout << "try find student matching id 1221..." << endl;
	StudentNode* sPtr = bst1.search(1221, true);

	if (sPtr == NULL)
		cout << "Cannot find a student matching id 1221" << endl;
	else
		cout << "Found " << sPtr->name << " with id 1221" << endl;


	cout << "Students inorder traversal" << endl;
	cout << "==========================" << endl;
	bst1.inOrderTraversal(bst1.root);

	cout << "Students preorder traversal" << endl;
	cout << "===========================" << endl;
	bst1.preOrderTraversal(bst1.root);

	cout << "Students postorder traversal" << endl;
	cout << "===========================" << endl;
	bst1.postOrderTraversal(bst1.root);


	system("pause");
}