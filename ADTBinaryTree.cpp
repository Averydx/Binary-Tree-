// ADTBinaryTree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"binaryTreeType.cpp"
#include"binaryTreeNode.h"


int main()
{
	binaryTreeNode<int>* node = new binaryTreeNode<int>(); 
	node->info = 15; 
	node->llink = new binaryTreeNode<int>();
	node->llink->info = 20; 
	node->rlink = new binaryTreeNode<int>(); 
	node->rlink->info = 35; 

	binaryTreeType<int>* tree = new binaryTreeType<int>(node);
	tree->inorderTraversal(); 
	
}

