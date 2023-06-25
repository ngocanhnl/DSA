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

void bfs(node *root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* top = q.front(); q.pop();
        cout<<top->val<<' ';
        if(top->left!=NULL) q.push(top->left);
        if(top->right!=NULL) q.push(top->right);
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
    bfs(root);
}
