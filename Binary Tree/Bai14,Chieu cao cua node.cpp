#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
    node(int u){
        data = u;
        left = right = NULL;
    }
};

void makeRoot(node *root, int v, char c){
    if(c=='L') root->left = new node(v);
    else root->right = new node(v);
}

void insertNode(node *root, int u, int v, char c){
    if(root==NULL) return;
    if(root->data==u){
        makeRoot(root,v,c);
    }
    else{
        insertNode(root->left,u,v,c);
        insertNode(root->right,u,v,c);
    }
}
void BFS(node *root){
    queue<pair<node*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        auto top = q.front(); q.pop();
        cout<<top.second<<' ';
        if(top.first->left != NULL)
            q.push({top.first->left,top.second+1});
        if(top.first->right != NULL)
            q.push({top.first->right,top.second+1});
    }
}
int main(){
    int n; cin >> n;
    node*root=NULL;
    while(n--){
        int a, b; char c;
        cin >> a >> b >> c;
        if(root==NULL){
            root = new node(a);
            makeRoot(root,b,c);
        }
        else
            insertNode(root,a,b,c);
    }
    BFS(root);
}
