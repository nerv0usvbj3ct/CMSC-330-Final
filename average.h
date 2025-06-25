//CMSC 330
//Project 2

//file handles the class definition for the average (& operator)

class Average : public SubExpression {
public:
	Average(Expression* left, Expression* right) : SubExpression(left, right) {
	}
	double evaluate() {
		return (left->evaluate() + right->evaluate()) / 2;
	}
};