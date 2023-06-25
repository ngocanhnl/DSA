#include<bits/stdc++.h>
using namespace std;

int pre[105], in[105], n;

struct node{
    int data;
    node *left;
    node *right;
    node (int u){
        data = u;
        left = right = NULL;
    }
};

int tim(int a[], int x){
    for(int i=0; i<n; i++){
        if(x==a[i]) return i;
    }
    return -1;
}

void makeTree(node *root, int in_left, int in_right){
    int in_pos = tim(in,root->data);
    int pre_pos = tim(pre,root->data);
    if(in_pos > in_left){
        root->left = new node(pre[pre_pos+1]);
        makeTree(root->left,in_left,in_pos-1);
    }
    if(in_pos < in_right){
        int ptu_left = in_pos - in_left;
        root->right = new node(pre[pre_pos+ptu_left+1]);
        makeTree(root->right,in_pos+1,in_right);
    }
}

void postOrder(node *root){
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<' ';
}




int main(){
    cin >> n;
    for(int i=0; i<n; i++) cin >> pre[i];
    for(int i=0; i<n; i++) cin >> in[i];
    node *root = new node(pre[0]);
    makeTree(root,0,n-1);
    postOrder(root);
}
