//CMSC 330
//Project 2

//file handles the definition for the remainder (% operator)

class Remainder : public SubExpression {
public:
	Remainder(Expression* left, Expression* right) : SubExpression(left, right) {
	}
	double evaluate() {
		double l = left->evaluate();
		double r = right->evaluate();

		if (l > 0 and r > 0) {
			return (int)l % (int)r;

			return -100;
		}
	}
};
