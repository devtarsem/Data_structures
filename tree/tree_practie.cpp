#include<iostream>
#include<vector>
using namespace std;


struct treeNode{
    treeNode* lchild;
    treeNode* rchild;
    int value;
};

struct Node{
    treeNode* val;
    Node* next;
};

struct kueue{
    Node* front;
    Node* rear;
    int size;
    Node* k;
};




void enKueue(kueue* p, treeNode* val){
    Node* temp = new Node();
    temp->val = val;
    temp->next = nullptr;
    if(!temp){
        cout<<"the kueue is full bro!"<<endl;
    }else{
        if(p->front == nullptr){
            p->k = temp;
            p->rear = p->front = temp;
        }else{
            p->rear->next = temp;
            p->rear = p->rear->next;
        }
    }
}

treeNode* dekueue(kueue *p){
    if(p->front==nullptr){
        cout<<"the kueue is empty";
        return nullptr;
    }else{
        Node* u = p->front;
        p->front = p->front->next;
        treeNode* z = u->val;
        delete(u);
        return z;
    }
}

bool isEmpty(kueue* p){
    return p->front == nullptr;
}

void preOrder(treeNode* p){
    if(p){
        cout<<p->value<<endl;
        preOrder(p->lchild);
        preOrder(p->rchild);

    }
}

void levelOrder(treeNode* root){
    kueue treeKueue;
    treeKueue.front = treeKueue.rear = nullptr;
    treeKueue.k = new Node();
    cout<<root->value<<endl;
    enKueue(&treeKueue, root);

    while(!isEmpty(&treeKueue)){
        root = dekueue(&treeKueue);
        if(root->lchild){
            cout<<root->lchild->value<<endl;
            enKueue(&treeKueue, root->lchild);
        }

        if(root->rchild){
            cout<<root->rchild->value<<endl;
            enKueue(&treeKueue, root->rchild);
        }

    }

}

treeNode* searchInBinarytree(treeNode* root, int key){
    if(!root){
        cout<<"The search key is not founded"<<endl;
        return nullptr;
    }
    if(key == root->value){
        cout<<"Searched key founded"<<endl;
        return nullptr;
    }else if(key < root->value){
        return searchInBinarytree(root->lchild, key);
    }else if(key > root->value){
        return searchInBinarytree(root->rchild, key);
    }
}

treeNode* searchUsingIterative(treeNode* root, int key){
    while(root!= nullptr){
        if(key == root->value){
            cout<<"the searched key founded"<<endl;
            return nullptr;
        }else if(key>root->value){
            root = root->rchild;
        }else if(key<root->value){
            root = root->lchild;
        }
    }
    return nullptr;
}

int main(){
    kueue treeKueue;
    treeKueue.size = 10;
    treeKueue.front = treeKueue.rear = nullptr;
    treeKueue.k = new Node();

    treeNode* root = new treeNode();
    root->lchild = root->rchild = nullptr;
    int rootvalue;
    cout<<"enter the root value"<<endl;
    cin>>rootvalue;
    root->value = rootvalue;
    enKueue(&treeKueue, root);

    treeNode* iterator;
    int child;

    while(!isEmpty(&treeKueue)){
        iterator = dekueue(&treeKueue);
       
        cout<<"Enter the left child of : "<<iterator->value<<endl;
        cin>>child;

        if(child!=-1){
            treeNode* temp = new treeNode();
            temp->value = child;
            temp->lchild = temp->rchild = nullptr;
            iterator->lchild = temp;
            enKueue(&treeKueue, temp);
        }

        cout<<"Enter the right child of : "<<iterator->value<<endl;
        cin>>child;

        if(child!=-1){
            treeNode* temp = new treeNode();
            temp->value = child;
            temp->lchild = temp->rchild = nullptr;
            iterator->rchild = temp;
            enKueue(&treeKueue, temp);
        }

        
    }


    levelOrder(root);
    // searchInBinarytree(root, 15650);
    searchUsingIterative(root, 25);


}