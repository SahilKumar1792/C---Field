// Iterative C++ program to search
// an element in linked list
#include <bits/stdc++.h>
using namespace std;
/* Link list node */
class Node {
public:
	int data;
	Node* next;
};
void push(Node** head_ref, int new_data)
{
 
    // 1. allocate node
    Node* new_node = new Node();
 
    // 2. put in the data
    new_node->data = new_data;
 
    // 3. Make next of new node as head
    new_node->next = (*head_ref);
 
    // 4. Move the head to point to
    // the new node
    (*head_ref) = new_node;
}
int main()
{
	/* Start with the empty list */
	Node* head = NULL;
	int x = 21;
	/* Use push() to constru0ct below list
	14->21->11->30->10 */
	push(&head, 10);
	push(&head, 30);
	push(&head, 11);
	push(&head, 21);
	push(&head, 14);

	// Function call
	// search(head, x) ? cout << "Yes" : cout << "No";
	return 0;
}