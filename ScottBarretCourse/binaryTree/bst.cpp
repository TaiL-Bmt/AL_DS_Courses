#include <queue>
#include "bst.h"

Bst::Bst(int32_t val)
{
    Node* newNode = new Node(val);
    root = newNode;
}

void Bst::print()
{
    printInOrder(root);
    std::cout << std::endl;
}

void Bst::printInOrder(Node* node)
{
    if (node == nullptr) {
        return;
    }
    printInOrder(node->left);
    node->print();
    printInOrder(node->right);
}

bool Bst::insert(int32_t val)
{
    Node* newNode = new Node(val);

    if (root == nullptr) {
        root = newNode;
        return true;
    }
    Node* tmp {root};
    while(true) {
        if (newNode->value == tmp->value) {
            return false;
        }
        if (newNode->value < tmp->value) {
            if (tmp->left == nullptr) {
                tmp->left = newNode;
                return true;
            } else {
                tmp = tmp->left;
            }
        } else {
            if (tmp->right == nullptr) {
                tmp->right = newNode;
                return true;
            } else {
                tmp = tmp->right;
            }
        }
    }
}

bool Bst::contains(int32_t val)
{
    Node* tmp{root};

    while (tmp != nullptr) {
        if (tmp->value == val) {
            std::cout << "found value " << val << std::endl;
            return true;
        }
        if (tmp->value > val) {
            tmp = tmp->left;
        } else {
            tmp = tmp->right;
        }
    }
    std::cout << "cannot found value " << val << std::endl;
    return false;
}

void Bst::bfs()
{
    std::queue<Node*> q;
    q.push(root);
    while (q.size() > 0) {
        Node* curNode {q.front()};
        q.pop();
        curNode->print();
        if (curNode->left != nullptr) {
            q.push(curNode->left);
        }
        if (curNode->right != nullptr) {
            q.push(curNode->right);
        }
    }
}
