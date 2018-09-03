#ifndef __NODE_VISITOR_H__
#define __NODE_VISITOR_H__

// forward
class Visitor;
#define NODEDEF(CLASS) class CLASS;
#include "nodes.defs"
#undef NODEDEF

class Node
{
public:
  Node() = default;
  virtual ~Node() = default;

public:
  virtual void accept(Visitor&) = 0;
};

class Visitor {
public:
  Visitor() = default;
  virtual ~Visitor() = default;

protected:
#define NODEDEF(CLASS)            \
  friend class CLASS;             \
  virtual void visit(CLASS&) = 0;
#include "nodes.defs"
#undef NODEDEF
};

class NodeAdd : public Node
{
public:
  NodeAdd() : a_(1), b_(1) {}
  NodeAdd(int a, int b) : a_(a), b_(b) {}
  virtual ~NodeAdd() {}

public:
  int a(void) const { return a_; }
  int b(void) const { return b_; }

protected:
  void accept(Visitor& visitor) override { visitor.visit(*this); }

private:
  int a_;
  int b_;
};

class NodeMul : public Node
{
public:
  NodeMul() : a_(1), b_(1) {}
  NodeMul(int a, int b) : a_(a), b_(b) {}
  virtual ~NodeMul() {}

public:
  int a(void) const { return a_; }
  int b(void) const { return b_; }

protected:
  void accept(Visitor& visitor) override { visitor.visit(*this); }

private:
  int a_;
  int b_;
};

#endif // __NODE_VISITOR_H__
