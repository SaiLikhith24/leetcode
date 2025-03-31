/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void helper(vector<int>& res, Node* root1) {
    if (root1 == nullptr) return;
    for (Node* child : root1->children) {
        helper(res, child);
    }
    res.push_back(root1->val);
}

vector<int> postorder(Node* root) {
    vector<int> res;
    helper(res, root);
    return res;
}
};