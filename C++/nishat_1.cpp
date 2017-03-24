 #include<bits/stdc++.h>

using namespace std;

struct node{
	int data ;
	struct node *next;
};

typedef node lit;

void seshe_jora(lit **head,int n){
	lit *temp = (lit *)malloc(sizeof(lit));
	temp->data=n;
	temp->next=NULL;
	if(*head==NULL) *head=temp;//mathay jora dilam
	else{
		lit *temp1;
		temp1=*head;
		while(temp1->next!=NULL) // lej khuje ber korchi
			temp1=temp1->next;
		temp1->next=temp; // lej e jora dilam
	}
}


int  show(lit *head){
	lit *temp;
	temp=head;
	if(temp==NULL){
		cout<<"\nempty list :(\n";
	}
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
	return 0;
}



void deleteNode(struct node **head_ref, int key)
{
    // Store head node
    struct node* temp = *head_ref, *prev;

    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;   // Changed head
        free(temp);               // free old head
        return;
    }

    // Search for the key to be deleted, keep track of the
    // previous node as we need to change 'prev->next'
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in linked list
    if (temp == NULL) return;

    // Unlink the node from linked list
    prev->next = temp->next;

    free(temp);  // Free memory
}



int main(){
	lit *head = NULL;
	lit *nd  =(lit *) malloc(sizeof(lit));
	nd->data = 3;
	nd->next = NULL;
	int n;
	cin>>n;
	while(n--){
		int i;
		cin>>i;
		seshe_jora(&head,i);

	}

	deleteNode(&head,3);

	show(head);



	return 0;
}

