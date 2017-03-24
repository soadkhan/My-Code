#include<bits/stdc++.h>
using namespace std;
struct node {
    long int  data;
    node* left;
    node* right;
};

node* get_node(long int  data) {
    node* new_node = (node*)malloc(sizeof(node));
    new_node->data=data;
    new_node->left=NULL;
    new_node->right=NULL;
    return new_node;
}

void insert_tree(node** root,long int data) {
    if((*root) == NULL)
        (*root)=get_node(data);
    else if(data<(*root)->data)
        insert_tree(&((*root)->left),data);
    else
        insert_tree(&((*root)->right),data);
}

bool search_tree(node* root,long int data) {
    if(root == NULL) return false;
    else if(root->data==data) return true;
    else if(data<=root->data) return search_tree(root->left, data);
    else return search_tree(root->right, data);
}

void print_post(node *root){
    if(root!=NULL){
        print_post(root->left);
        print_post(root->right);
        cout<<root->data<<endl;
    }
}

int main() {
 // freopen("uva.txt","rt",stdin);
 // freopen("uva_out.txt","wt",stdout);
    node* root=NULL;
    long int data;
 	while(cin>>data){
 		insert_tree(&root,data);
 	}
   print_post(root);
    return 0;
}
