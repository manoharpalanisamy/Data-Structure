#include <stdio.h>
#include <string.h>
int tableSize = 4;

struct Item
{
	char *subject;  // 4 bytes
	char* topic; // 4 bytes
	struct Item* next;
};
// Create Array of objects to hold all items.

int main()
{	
	struct Item *HashTable[tableSize]; 
	int numberofItems = 0, howManyItems = 0;
	char subject[50], topic[50];
	// string subject, topic;
	for (int i = 0; i < tableSize; ++i)
	{
		HashTable[i] = (struct item*) malloc (sizeof(struct Item));
		HashTable[i] -> subject = "empty";
		HashTable[i] -> topic = "empty";
		HashTable[i] -> next = NULL;
	}

	printf("-------------------------\n");
	printf("Hash Table\n");
	printf("-------------------------\n");

	printf("How many items you want ?\n");
	scanf("%d", &howManyItems);

	//https://www.geeksforgeeks.org/problem-with-scanf-when-there-is-fgetsgetsscanf-after-it/


	for (int i = 0; i < howManyItems; ++i)
	{
		printf("Enter the Name of your subject\n");
		gets(subject);  // read newline
		gets(subject);  // read Actual String
		printf("Enter your topic\n");
		gets(topic);  // read string
		addItemsInHashTable(&HashTable, subject, topic);
	}
	
	printItemsInHashTable(&HashTable);

	// addItemsInHashTable(&HashTable, (char*)"Data Structure", (char*)"Array");
	// addItemsInHashTable(&HashTable, (char*)"Data Structure", (char*)"Linked List");
	// addItemsInHashTable(&HashTable, (char*)"Data Structure", (char*)"Stack");
	// addItemsInHashTable(&HashTable, (char*)"Data Structure", (char*)"Heap");
	// addItemsInHashTable(&HashTable, (char*)"Data Structure", (char*)"Queue");
	// addItemsInHashTable(&HashTable, (char*)"Data Structure", (char*)"Tree");
	// addItemsInHashTable(&HashTable, (char*)"Data Structure", (char*)"Graph");
	// addItemsInHashTable(&HashTable, (char*)"Data Structure", (char*)"Hash Table");
	// addItemsInHashTable(&HashTable, (char*)"Machine Learning", (char*)"Linear Regression");
	// addItemsInHashTable(&HashTable, (char*)"Machine Learning", (char*)"Logistic Regression");
	// addItemsInHashTable(&HashTable, (char*)"Machine Learning Algorithms", (char*)"Gradient Descent");
	// addItemsInHashTable(&HashTable, (char*)"Machine Learning Dimentionality Reductions", (char*)"PCA");
	// addItemsInHashTable(&HashTable, (char*)"Machine Learning", (char*)"Support Vector Machine's");
	// addItemsInHashTable(&HashTable, (char*)"Machine Learning", (char*)"Logistic Regression");


	// printItemsInHashTable(&HashTable);


	// for (int Bucket = 0; Bucket < tableSize; Bucket++)
	// {
	// 	numberofItems = numberofItemsInBucket(&HashTable, Bucket);
	// 	printf("Number of Items in Bucket[%d]= %d\n", Bucket, numberofItems);
	// 	printf("---------------------------------\n");

	// 	struct Item *tempPtr = HashTable[Bucket];
	// 	// Printing current elements in each Item

	// 	int count = 0;
	// 	printf("subject\t\ttopic\n");
	// 	printf("----\t\t-----\n");
	// 	while(tempPtr != NULL)
	// 	{
	// 		count++;
	// 		printf("%d) %s\t%s\n",count, tempPtr->subject, tempPtr->topic);
	// 		tempPtr = tempPtr->next; // Traversing 
	// 	}
	// 	printf("\n");
	// }

	// printf("%x\n", &HashTable);
	return 0;
}

int numberofItemsInBucket(struct Item **HashTable, int Bucket)
{
	int count = 0;
	if (HashTable[Bucket]->subject == "empty")
	{
		return count;
	}

	struct Item *tempPtr = HashTable[Bucket]; //tempPtr to hold previous address
	while(tempPtr != NULL)
	{
		count++;	
		tempPtr = tempPtr->next;
	}
	return count;
}

void printItemsInHashTable(struct Item **HashTable)
{
	int numberofItems = 0;
	// struct Item *tempPtr = HashTable[Bucket];
	// // Printing current elements in each Item
	// while(tempPtr != NULL)
	// {
	// 	printf("%s\t%s\n", tempPtr->subject, tempPtr->topic);
	// 	tempPtr = tempPtr->next; // Traversing 
	// }	


	// printf("%x\n", HashTable); // address of HashTable location
	

	// printf("%x\n", *HashTable); // return value at HashTable[0]
	// printf("%x\n", **HashTable); // value at *(*(HashTable[0]))
	// printf("%x\n", &HashTable);
	// printf("%x\n", *(&HashTable));
	// printf("%x\n", *(*(&HashTable)));
	// printf("%x\n", HashTable[1]);
	// printf("%x\n", *(HashTable[1]));

	for (int Bucket = 0; Bucket < tableSize; Bucket++)
	{
		numberofItems = numberofItemsInBucket(HashTable, Bucket);
		printf("Number of Items in Bucket[%d]= %d\n", Bucket, numberofItems);
		printf("---------------------------------\n");

		struct Item *tempPtr = HashTable[Bucket];
		// Printing current elements in each Item

		int count = 0;
		printf("subject\t\ttopic\n");
		printf("----\t\t-----\n");
		while(tempPtr != NULL)
		{
			count++;
			printf("%d) %s\t%s\n",count, tempPtr->subject, tempPtr->topic);
			tempPtr = tempPtr->next; // Traversing 
		}
		printf("\n");
	}

}

void addItemsInHashTable(struct Item **HashTable, char* subject, char* topic)
{
	int Bucket = hashFunction((char*)subject);

	if (HashTable[Bucket]->subject == "empty")
	{
		HashTable[Bucket]->subject = subject;
		HashTable[Bucket]->topic = topic;
	}
	else
	{
		struct Item *tempPtr = HashTable[Bucket]; //tempPtr to hold previous address
		
		// Allocate new address to hold Items in current racks (chaining) 

		struct Item *temp1 = (struct Item*) malloc (sizeof(struct Item));
		temp1->subject = subject ;
		temp1->topic = topic;
		temp1->next = NULL;

		// Traversing an element
		while(tempPtr->next != NULL)
		{
			tempPtr = tempPtr->next;
		}
		// Insert Item at End 
		tempPtr->next = temp1;
	}
}

// General Hash Function
int hashFunction(char* str)
{
	int hash = 0, i = 0, count = 0;
    
    while(str[count] != '\0')
    	count++;
    // printf("%d\n", count);

    for (i = 0; i < count; ++i)
    	hash = hash + (int)str[i];
    // printf("%d\n", hash);

    // index = hash % tableSize;
    // printf("index or Buckets = %d\n", index);

    return hash % tableSize;   // Bucket
}