#pragma once
#include "StudentNode.h"

//Binary Search Tree
//root node sort of acting as center
//everything smaller then root, is stored on left branch somewhere
//everything else to the right
class BST
{
	public:
		StudentNode* root = NULL;
		virtual void insert(StudentNode* newStudent);
		StudentNode* search(int studentID, bool showSearchPath = false);

		//recursive traversal functions
		void inOrderTraversal(StudentNode* current);
		void preOrderTraversal(StudentNode* current);
		void postOrderTraversal(StudentNode* current);
};

