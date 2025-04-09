#include<iostream>
#include<vector>

using namespace std;
struct TreeNode{
    TreeNode* lchild;
    TreeNode* rchild;
    int value;
};

struct Node{
    TreeNode* val;
    Node* next;
};

struct kueue{
    Node* rear;
    Node* front;
    Node* k;
};



void InsertInKueue(kueue* z, TreeNode* val){
    Node* temp = new Node();
    temp->val = val;
    if(!temp){
        cout<<"The linked list is full"<<endl;
    }else{
        if(!z->front){
            z->front = z->rear = temp;
        }else{
            z->rear->next = temp;
            z->rear = z->rear->next;
        }
    }
}


TreeNode* deleteFromkueue(kueue* z){
    if(z->front == nullptr){
        cout<<"The kueue is empty";
        return nullptr;
    }else{
        Node* p = z->front;
        z->front = z->front->next;
        TreeNode* x = p->val;
        // delete(p);
        return x;
    }
}

bool isEmpty(kueue* p){
    return p->front == nullptr;
}

void preOrder(TreeNode* p){
    if(p){
        cout<<p->value<<endl;;
        preOrder(p->rchild);
        preOrder(p->lchild);

    }
}

void Inorder(TreeNode* p){
    if(p){
        Inorder(p->lchild);
        cout<<p->value<<endl;;
        Inorder(p->rchild);
    }
}


void Postorder(TreeNode* p){
    if(p){
        Postorder(p->lchild);
        Postorder(p->rchild);
        cout<<p->value<<endl;;
    }
}

int main(){
    kueue p;
    p.front = p.rear = nullptr;
    p.k = new Node();

    TreeNode* root = new TreeNode();
    int rootval;
    cout<<"Enter root value"<<endl;
    cin>>rootval;

    root->value = rootval;
    root->lchild = root->rchild = nullptr;
    InsertInKueue(&p, root);

    TreeNode* iterator, *temp;
    int x;

    while(!isEmpty(&p)){
        iterator = deleteFromkueue(&p);
        cout<<"Enter the right child of "<<iterator->value<<endl;
        cin>>x;
        if(x!=-1){
            temp = new TreeNode();
            temp->value = x;
            temp->lchild = temp->rchild = nullptr;
            iterator->rchild = temp;
            InsertInKueue(&p,temp);
        }


        cout<<"Enter the left child of "<<iterator->value<<endl;
        cin>>x;
        if(x!=-1){
            temp = new TreeNode();
            temp->value = x;
            temp->rchild = temp->lchild = nullptr;
            iterator->lchild = temp;
            InsertInKueue(&p,temp);
        }
    }

    Postorder(root);

    while(p.front){
        cout<<p.front->val<<endl;
        p.front = p.front->next;
    }
}

