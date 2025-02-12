#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct node {

	int val;
	struct node* next;
};
struct node*  createnode(int val) {
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	if (newnode == NULL) {
		printf("Memory allocation failed");
	}
	newnode->val = val;
	newnode->next = NULL;
	return newnode;

}
struct node* find_last(struct node* head, int n) {
	struct node* curr = head;
	struct node* last = NULL;
	int count = 0;
	while (curr->val != NULL) {
		if (curr == n) {
			last = curr;
		}
		curr  = curr->next;

	}
	return last;

}





int main() {

	struct node *head = (struct node*)malloc(sizeof(struct node));
	head->next = createnode(1);
	head->next->next = createnode(2);
	head->next->next->next = createnode(3);
	head->next->next->next->next = createnode(2);
	head->next->next->next->next->next = createnode(5);
}
