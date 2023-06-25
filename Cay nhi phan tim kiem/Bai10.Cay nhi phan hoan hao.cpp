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

set<int> se;
//dem la
int count_leaf(node *root){
    if(root==NULL) return 0;
    if(root->left==NULL&&root->right==NULL) return 1;
    int dem = 0;
    dem += count_leaf(root->left);
    dem += count_leaf(root->right);
    return dem;
}
//tinh lv
void count_lv(node *root, int dem){
    if(root==NULL) return;
    if(root->left==NULL&&root->right==NULL){
        se.insert(dem);
        return;
    }
    count_lv(root->left,dem+1);
    count_lv(root->right,dem+1);
    
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
    count_lv(root,0);
    if(se.size()==1 && (*se.begin())*2==count_leaf(root)){
        cout<<"YES";
    }
    else cout<<"NO";
}
