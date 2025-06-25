//CMSC 330
//Project 2

//file handles the class definitiuon for division

class Division : public SubExpression {
public:
	Division(Expression* left, Expression* right) : SubExpression(left, right) {
	}
	double evaluate() {
		return left->evaluate() / right->evaluate();
	}
};
