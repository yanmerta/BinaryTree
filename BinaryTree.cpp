#include <iostream>
#include "BinaryTree.h"
using namespace std;

// INSERT
void BinaryTree::insertNode(Node *tmp){
	root = insertNode(root, tmp);
}

Node *BinaryTree::insertNode(Node *currentNode, Node *tmp){
	
	if (currentNode==NULL){
		currentNode = tmp;
	}
	
	else if (tmp->value<currentNode->value){
		currentNode->left = insertNode(currentNode->left, tmp);
	}
	
	else if (tmp->value>currentNode->value){
		currentNode->right = insertNode(currentNode->right, tmp);
	}
 	
	return currentNode;
}

// SEARCH
Node *BinaryTree::searchNode(int searchVal){
	return searchNode(root, searchVal);
}

Node *BinaryTree::searchNode(Node *currentNode, int searchVal){
	
	if (currentNode->value == searchVal){
		return currentNode;
	}
	
	else if (searchVal < currentNode->value){
		return searchNode(currentNode->left, searchVal);
	}
	
	else if (searchVal > currentNode->value){
		return searchNode(currentNode->right, searchVal);
	}
	
	else
		return NULL;
		
}

// TRAVERSAL
void BinaryTree::inOrder(){
	inOrder(root);
}

void BinaryTree::inOrder(Node *currentNode){
	
	if (currentNode!=NULL){
		inOrder(currentNode->left);
		cout << currentNode->value << ", ";
		inOrder(currentNode->right);
	}
	
}
