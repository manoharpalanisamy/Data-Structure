#include <stdio.h>
struct Node
{
	int data;
	struct Node* next;
};

struct Node* head = NULL;
// Insert at Begining of the list
void push(int x)
{
	struct Node *temp = (struct Node*)malloc(sizeof(struct Node));

	temp->data = x;
	temp->next = NULL;

	if (head == NULL)
	{
		head = temp;
		return;
	}
	struct Node* temp1 = head;
	temp->next = temp1;
	head = temp; 
}

void Pop()
{
	struct Node* temp = head;
	head = temp->next;
	if (head == NULL)
	{
		printf("Error Underflow & No Elements to Pop\n");
		return;
	}
	free(temp);
}
void Print()
{
	struct Node* temp = head;
	while(temp != NULL)
	{
		printf("%d\t", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
int main(void)
{
	push(2); // 2
	Print();
	push(4); // 4, 2
	Print();
	push(6); // 6, 4, 2
	Print();
	Pop(); // 4, 2
	Print();
	Pop(); // 2
	Print();
	Pop(); // No elements to pop
	Print();
	
	
	return 0;
}