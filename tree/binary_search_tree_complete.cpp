#include<iostream>
#include<vector>
using namespace std;

struct treeNode{
    treeNode* lchild;
    treeNode* rchild;
    int value;
};

treeNode* GenerateBinarySearchTree(treeNode* root, int val){
    
    
        treeNode* temp = nullptr;

        while(root!=nullptr){
            temp = root;
            
            if(root->value > val){
                root = root->rchild;
            }else if(root->value < val){
                root = root->lchild;
            }
        }   

        treeNode* newNode = new treeNode();
        newNode->value = val;
        if(newNode->value > temp->value){
            temp->lchild = newNode;
        }else if(newNode->value < temp->value){
            temp->rchild = newNode;
        }
        
    return root;

}

int SearchInBinarySearchTree(treeNode* tree, int key){

    while(tree != nullptr){
        if(tree->value == key){
            cout<<"The searched key found"<<endl;
            return 0;
        }
        else if(tree->value > key){
            tree = tree->rchild;
        }
        else if(tree->value < key){
            tree = tree->lchild;
        }
    }
    cout<<"OOP's, the searched Key not found"<<endl;
    return 0;
}

void LevelOrderPrinting(treeNode* tree){
    
}

void printingABinarySearch(treeNode* tree){
    if(tree){
        cout<<tree->value<<endl;
        printingABinarySearch(tree->lchild);
        printingABinarySearch(tree->rchild);

    }
}

int main(){
    vector<int> arr = {8,3,10,1,6,14,4,7,13};
    treeNode tree;
    tree.lchild = tree.rchild = nullptr;
    tree.value = arr[0];
    
    for(int i = 1; i<arr.size(); i++){
        GenerateBinarySearchTree(&tree, arr[i]);

    }

    printingABinarySearch(&tree);
    SearchInBinarySearchTree(&tree, 45);
    SearchInBinarySearchTree(&tree, 13);
    SearchInBinarySearchTree(&tree, 3);
    SearchInBinarySearchTree(&tree, 1);
    SearchInBinarySearchTree(&tree, 19);

}