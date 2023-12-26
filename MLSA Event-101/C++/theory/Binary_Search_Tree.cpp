1. Inserting a Node:

C++
struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* insert(Node* root, int data) {
    if (root == nullptr) {
        return new Node{data, nullptr, nullptr};
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }

    return root;
}
//------------------------------------------------------------------------------------------------------------
2. Searching for a Node:

C++
bool search(Node* root, int data) {
    if (root == nullptr) {
        return
 
false;
    }

    if (data == root->data) {
        return
 
true;
    }

    if (data < root->data) {
        return search(root->left, data);
    } else {
        return search(root->right, data);
    }
}
//------------------------------------------------------------------------------------------------------------
3. Finding the Minimum Value:

C++
int findMin(Node* root) {
    if (root == nullptr) {
        throw std::runtime_error("Tree is empty");
    }

    while (root->left != nullptr) {
        root = root->left;
    }

    return root->data;
}
//------------------------------------------------------------------------------------------------------------
4. Finding the Maximum Value:

C++
int findMax(Node* root) {
    if (root == nullptr) {
        throw std::runtime_error("Tree is empty");
    }

    while (root->right != nullptr) {
        root = root->right;
    }

    return root->data;
}
//------------------------------------------------------------------------------------------------------------
5. In-Order Traversal (Left, Root, Right):

C++
void
 
inorderTraversal(Node* root)
 
{
    if (root != nullptr) {
        inorderTraversal(root->left);
        std::cout << root->data << " ";
        inorderTraversal(root->right);
    }
}
6. Pre-Order Traversal (Root, Left, Right):

C++
void
 
preorderTraversal(Node* root)
 
{
    if (root != nullptr) {
        std::cout << root->data << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}
//------------------------------------------------------------------------------------------------------------
7. Post-Order Traversal (Left, Right, Root):

C++
void
 
postorderTraversal(Node* root)
 
{
    if (root != nullptr) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        std::cout << root->data << " ";
    }
}