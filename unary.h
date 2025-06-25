//CMSC 330
//header file to handle the single unary operator

class Unary : public SubExpression {
public:
	Unary(Expression* left) : SubExpression(left) {
	}
	double evaluate() {
		double l = left->evaluate();

		if (l > 0) {
			return l * (-1);
		}
	}
};