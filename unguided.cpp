// Muhammad Rayhan Pratama/2211102179/IF-10-D #include <iostream>
#include <vector> #include <map>
using namespace std;


typedef map<string, vector<string>> Tree;


void addNode(Tree &tree, const string &parent, const string &child)
{
tree[parent].push_back(child);
}


void printTree(const Tree &tree, const string &node, int level = 0)
{
for (int i = 0; i < level; ++i)
{
cout << " ";
}
cout << "|_" << node << endl;


if (tree.count(node) > 0)
{
for (const auto &child : tree.at(node))
{
printTree(tree, child, level + 1);
}
}
}
