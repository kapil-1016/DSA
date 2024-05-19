
#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node( int value){
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

node* build(int arr[], node* root, int i, int n){
    if(i<n){
        node* temp = new node(arr[i]);
        root = temp;

        root->left = build(arr,root->left, 2*i+1,n);
        root->right = build(arr, root->right, 2*i+2, n);
    }
    return root;
}

void print(node* r){
    if(r == nullptr){
        return ;
    }
    print(r->left);
    cout<<r->data<<" ";
    print(r->right);
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }

    }
}

int height(node* root){
    if(root == nullptr){
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    int ans = max(left, right)+1;
    return ans;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    node* root = build(arr,nullptr, 0, n);
    cout<<"inorder traversal: "<<endl;
    print(root);
    cout<<endl;
    cout<<"level order traversal: "<<endl;
    levelOrderTraversal(root);
    cout<<endl;
    cout<<"height of the tree is: "<< height(root);

    return 0;
}