#include<iostream>
#include<vector>

using namespace std;

struct treeNode{
    treeNode* lchild;
    treeNode* rchild;
    int value;
};

void InsertionInABinaryTree(treeNode* root, int val){
    treeNode* temp = nullptr;

    while(root!= nullptr){
        temp = root;
        if(val == root->value){
            return;
        }else if(val<root->value){
            root = root->lchild;
        }else{
            root = root->rchild;
        }
    }

    treeNode* newMember = new treeNode();
    newMember->value = val;
    if(newMember->value < temp->value){
        temp->lchild = newMember;
    }else{
        temp->rchild = newMember;

    }

}

void preOrder(treeNode* p){
    if(p){
        cout<<p->value<<endl;
        preOrder(p->lchild);
        preOrder(p->rchild);

    }
}


int main(){
    treeNode tree;
    tree.lchild = tree.rchild = nullptr;
    int root;
    cout<<"enter the root"<<endl;
    cin>>root;

    tree.value = root;


    InsertionInABinaryTree(&tree, 25);
    InsertionInABinaryTree(&tree, 15);
    InsertionInABinaryTree(&tree, 30);
    InsertionInABinaryTree(&tree, 31);
    InsertionInABinaryTree(&tree, 40);
    InsertionInABinaryTree(&tree, 55);
    InsertionInABinaryTree(&tree, 235);

    preOrder(&tree);

}