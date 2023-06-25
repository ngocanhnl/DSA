#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    node* right;
    node* left;
    node(int x){
        val = x;
        left = right = NULL;
    }
};


void makeRoot(node* root, int v, char c){
    if(c=='L') root->left = new node(v);
    else root->right = new node(v);
}

void insertNode(node* root, int u, int v, char c){
    if(root == NULL) return;
    if(root->val == u){
        makeRoot(root,v,c);
    }
    else{
        insertNode(root->left,u,v,c);
        insertNode(root->right,u,v,c);
    }
}
int dem= 0;
bool check(node* root){
    if(root->left==NULL && root->right==NULL)     return true;
    return false;

}
void postorder(node *root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    if(check(root)){
        dem++;
    }
}



int main(){
    int n; cin >> n;
    node *root = NULL;
    while(n--){
        int a, b; char c;
        cin >> a >> b >> c;
        if(root == NULL){
            root = new node(a);
            makeRoot(root,b,c);
        }
        else{
            insertNode(root,a,b,c);
        }
    }
    postorder(root);
    cout<<dem;
}
