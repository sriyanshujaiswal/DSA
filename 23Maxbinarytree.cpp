#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// A tree node
class Node {
public:
	int data;
	Node *left, *right;

	Node(int data)
	{
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

int findMax(Node* root)
{
	// Base case
	if (root == NULL)
		return INT_MIN;

	int res = root->data;
	int lres = findMax(root->left);
	int rres = findMax(root->right);
	if (lres > res)
		res = lres;
	if (rres > res)
		res = rres;
	return res;
}
int findMin(Node *root)
	{
		//code
		if(root==NULL)
	{
		return INT_MAX;
	}
	int res=root->data;
	int left=findMin(root->left);
	int right=findMin(root->right);
	if(left<res)
	{
		res=left;
	}
	if(right<res)
	{
		res=right;
	}
	return res;
	}

// Driver Code
int main()
{
	Node* NewRoot = NULL;
	Node* root = new Node(2);
	root->left = new Node(7);
	root->right = new Node(5);
	root->left->right = new Node(6);
	root->left->right->left = new Node(1);
	root->left->right->right = new Node(11);
	root->right->right = new Node(9);
	root->right->right->left = new Node(4);

	// Function call
	cout << "Maximum element is " << findMax(root) << endl;
	cout << "Minimum element is " << findMin(root) << endl;

	return 0;
}
