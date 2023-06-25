#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
    node(int x){
        data = x;
        left = right = NULL;
    }
};

void makeRoot(node *root, int v, char c){
    if(c=='L') root->left = new node(v);
    else root->right = new node(v);
}

void insertNode(node *root, int u, int v, char c){
    if(root == NULL){
        return;
    }
    if(root->data==u){
        makeRoot(root,v,c);
    }
    else{
        insertNode(root->left,u,v,c);
        insertNode(root->right,u,v,c);
    }
}

string inorder(node *root){
    if(root==NULL) return " ";
    string s="";
    s = to_string(root->data);
    //cout<<to_string(root->data)<<endl;
    s += inorder(root->left);
    s += inorder(root->right);
    return s;
    
}
int main(){
    int n; cin >> n;
    node *root = NULL;
    while(n--){
        int a, b; char c;
        cin >> a >> b >> c;
        if(root==NULL){
            root = new node(a);
            makeRoot(root,b,c);
        }
        else{
            insertNode(root,a,b,c);
        }
    }
    int m; cin >> m;
    node *root2 = NULL;
    while(m--){
        int a, b; char c;
        cin >> a >> b >> c;
        if(root2==NULL){
            root2 = new node(a);
            makeRoot(root2,b,c);
        }
        else{
            insertNode(root2,a,b,c);
        }
    }
    if(n!=m){
        cout<<"NO"; 
        return 0;
    }
    if(inorder(root)==inorder(root2)) cout<<"YES";
    else cout<<"NO";
}
