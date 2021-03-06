#include <bits/stdc++.h>
using namespace std;
class Node
{
	public:
	int key;
	Node* next;
};
void push(Node** head_ref, int new_key)
{
	Node* new_node = new Node();
	new_node->key = new_key;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}
bool search(Node* head, int x)
{
	Node* current = head; 
	while (current != NULL)
	{
		if (current->key == x)
			return true;
		current = current->next;
	}
	return false;
}
int main()
{
	Node* head = NULL;
	int src = 21;
	int n,x;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>x;
		push(&head, x);
	}
	cout<<"Search: ";
	cin>>src;
	search(head, src)? cout<<"Yes"<<endl : cout<<"No"<<endl;
	return 0;
}
