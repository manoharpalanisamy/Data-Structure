#include <iostream>
#include <sstream>  // stringstream  //https://stackoverflow.com/questions/13428164/c-compile-error-has-initializer-but-incomplete-type
using namespace std;
// using namespace boost;

int tableSize = 5;
void addItemsInHashTable(struct Item **HashTable, string subject, string topic);
int hashFunction(string str);
void printItemsInHashTable(struct Item **HashTable);
int numberofItemsInBucket(struct Item **HashTable, int Bucket);


struct Item
{
	string subject;  // 4 bytes
    string topic; // 4 bytes
    struct Item* next;
};

int main()
{
	struct Item *HashTable[tableSize]; 
	string subject, topic, line;
	int howManyItems ;

	for (int i = 0; i < tableSize; ++i)
	{
		HashTable[i] = (struct Item*) malloc (sizeof(struct Item));
		HashTable[i] -> subject = "empty";
		HashTable[i] -> topic = "empty";
		HashTable[i] -> next = NULL;
	}

	cout << "Enter the Number of Items\n";

	// https://stackoverflow.com/questions/7786994/c-getline-isnt-waiting-for-input-from-console-when-called-multiple-times?answertab=votes#tab-top
	// https://stackoverflow.com/questions/13428164/c-compile-error-has-initializer-but-incomplete-type
	getline(cin, line);
	stringstream  linestream(line);
	linestream >> howManyItems;

	cout << "howManyItems = " << howManyItems << endl;

	for (int i = 0; i < howManyItems; ++i)
	{
		cout <<"Enter the Name of your subject\n";
	    getline(cin, subject);  // read string

	    cout <<"Enter your topic\n";
	    getline(cin, topic);  // read string
	    
	    // cout << subject << " " << topic << endl;

	    addItemsInHashTable(HashTable, subject, topic); // pass address of initial address


	}

	cout << HashTable << endl;
	printItemsInHashTable(HashTable);


	return 0;
}


void addItemsInHashTable(struct Item **HashTable, string subject, string topic)
{
    int Bucket = hashFunction(subject);

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
int hashFunction(string str)
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


void printItemsInHashTable(struct Item **HashTable)
{
    int numberofItems = 0;
    // struct Item *tempPtr = HashTable[Bucket];
    // // Printing current elements in each Item
    // while(tempPtr != NULL)
    // {
    //  printf("%s\t%s\n", tempPtr->subject, tempPtr->topic);
    //  tempPtr = tempPtr->next; // Traversing 
    // }    


    cout << HashTable << endl; // address of HashTable location
    

    for (int Bucket = 0; Bucket < tableSize; Bucket++)
    {
        numberofItems = numberofItemsInBucket(HashTable, Bucket);
        cout << "------------------------------------";
        cout << endl << "Number of Items in Bucket" << "["<< Bucket << "]" << " is " << numberofItems << endl;
      	cout << "------------------------------------" << endl;
        struct Item *tempPtr = HashTable[Bucket];
        // Printing current elements in each Ite m

        int count = 0;
        cout << "subject\t\ttopic\n";
        cout << "-------\t\t-----\n";
        while(tempPtr != NULL)
        {
            count++;
            cout << count<<")" << tempPtr->subject << "\t\t"<< tempPtr->topic << endl;
            tempPtr = tempPtr->next; // Traversing 
        }
        cout << endl;
    }

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