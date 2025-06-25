//CMSC 330
//Project 2 

//file handles the class definition for multiplication

class Multiplication : public SubExpression {
public:
	Multiplication(Expression* left, Expression* right) : SubExpression(left, right) {
	}
	double evaluate() {
		return left->evaluate() * right->evaluate();
	}
};