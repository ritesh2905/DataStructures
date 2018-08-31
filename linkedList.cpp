#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node * next;
};
node *start = NULL;
node *temp, *p;

int takeValue()
{
	int value;
    cout<<"Enter the value to be inserted: ";
    cin>>value;
	return value;	
}

void dis()
{	
    if (start == NULL)
    {
        cout<<"The List is Empty"<<endl;
        return;
    }
    temp = start;
    cout<<"Elements of list are: "<<endl;
    while (temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void insertionAtBegning()
{	
	int value = takeValue(); 
	temp = new node;
    temp->data = value;
    if (start == NULL)
    {
        start = temp;
        start->next = NULL;          
    } 
    else
    {
        p = start;
        start = temp;
        start->next = p;
    }
    cout<<"Element Inserted!!!"<<endl;
}

void insertionAtEnd()
{
	if(start == NULL)
	{
		cout<<"\nUnderflow!!!";
		return;
	}	
	else
	{	
		int value = takeValue(); 
		temp = new node;
		p = new node;
		temp->data = value;
		temp->next = NULL;
		p = start;
		while(p->next != NULL)
		{
			p = p->next;
		}
		p->next = temp;	
		cout<<"Element inserted at last"<<endl;
		
	}
}

void insertionAtMiddle()
{
}

void deletionAtBegning()
{
}

void deletionAtMiddle()
{
}

void deletionAtEnd()
{
}

int main()
{
	int n,k=1;
	do
	{
		cout<<"choice:\n1.Insertion at begning\n2.Insertion at middle\n3.Insertion at end\n4.deletion at begning\n5.deletion at middle\n6.Deletion at end\n7.print\ninput:";
		cin>>n;
		switch(n)
		{
			case 1: insertionAtBegning();
					break;
			case 2: insertionAtMiddle();
					break;
			case 3: insertionAtEnd();
					break;
			case 4: deletionAtBegning();
					break;
			case 5: deletionAtMiddle();
					break;
			case 6: deletionAtEnd();
					break;
			case 7: dis();
					break;
			default: cout<<"\nWrong choice!!!";
		}
		cout<<"Enter 1 to continue: ";
		cin>>k;
	}while(k==1);
	return 0;
}
