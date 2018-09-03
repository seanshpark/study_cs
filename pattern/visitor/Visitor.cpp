#include <vector>
#include <iostream>

#include "NodeVisitor.h"

class RealVisitor : public Visitor
{
protected:
#define NODEDEF(CLASS)                 \
  virtual void visit(CLASS&) override;
#include "nodes.defs"
#undef NODEDEF

public:
  void do_test(std::vector<Node*>& nodes);
};


void RealVisitor::visit(NodeAdd& node)
{
  std::cout << "Node Add " << node.a() << ", " << node.b() << std::endl;
}

void RealVisitor::visit(NodeMul& node)
{
  std::cout << "Node Mul " << node.a() << ", " << node.b() << std::endl;
}

void RealVisitor::do_test(std::vector<Node*>& nodes)
{
  for (Node* node : nodes) {
    node->accept(*this);
  }
}

int main()
{
  RealVisitor visitor;

  std::vector<Node*> nodes;
  nodes.push_back(new NodeAdd(1,2));
  nodes.push_back(new NodeMul(3,4));

  visitor.do_test(nodes);

  return 0;
}
