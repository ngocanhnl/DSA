#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
    node (int u){
        data = u;
        left = right = NULL;
    }
};

node* insert(node *&root, int u){
    if(root == NULL){
        root = new node(u);
        return root;
    }
    if(u < root->data){
        root->left = insert(root->left,u);
    }
    else if(u > root->data){
        root->right = insert(root->right,u);
    }
    return root;
}

int max_ele(node *root){
    if(root->right==NULL){
        return root->data;
    }
    return max_ele(root->right);
    
}
int min_ele(node *root){
    if(root->left==NULL){
        return root->data;
    }
    return min_ele(root->left);
    
}

int main(){
    int n; cin >> n;
    int a[n];
    node *root = NULL;
    for(int i=0; i<n; i++){
        cin >> a[i];
        insert(root,a[i]);
    }
    cout<<max_ele(root)<<' '<<min_ele(root);
}
