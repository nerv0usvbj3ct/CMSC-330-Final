//CMSC 330
//Project 2

//file handles the class definition for the greater than operation

class GreaterThan : public SubExpression {
public:
	GreaterThan(Expression* left, Expression* right) : SubExpression(left, right) {
	}
	double evaluate() {
		double l = left->evaluate();
		double r = right->evaluate();

		if (l != 0 and r != 0) {
			if (l >= r) {
				return l;
			}
			else {
				return r;
			}
		}
	}
};
