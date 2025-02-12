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
int countoccurences(struct node* list, int n) {
	struct node* curr = list;
	int count = 0;
	while (curr != NULL) {

		if (curr->val == n) {

			count++;
		}

		curr = curr->next;
	
	}
	return count;
}





int main() {

	struct node *head = (struct node*)malloc(sizeof(struct node));
	head->next = createnode(1);
	head->next->next = createnode(2);
	head->next->next->next = createnode(3);
	head->next->next->next->next = createnode(2);
	head->next->next->next->next->next = createnode(5);

	int n = countoccurences( head, 5);
	printf("%d", n);



	

}
