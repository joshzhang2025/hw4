#ifndef RECCHECK
//if you want to add any #includes like <iostream> you must do them here (before the next endif)

#endif

#include "equal-paths.h"
using namespace std;

bool checkPaths(Node* node, int depth, int& leafDepth) {
  if (node == nullptr) {
    return true;
  }

  if (node->left == nullptr && node->right == nullptr) {
    if (leafDepth == -1){
      leafDepth = depth;
    }
    return depth == leafDepth;
  }

  return checkPaths(node->left, depth + 1, leafDepth) && checkPaths(node->right, depth + 1, leafDepth);

}

// You may add any prototypes of helper functions here


bool equalPaths(Node * root)
{
  int leafDepth = -1;
  return checkPaths(root, 0, leafDepth);

}

