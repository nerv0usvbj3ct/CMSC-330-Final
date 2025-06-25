//CMSC 330
//header file to handle the quaternary operations

class Quaternary : public SubExpression {
public:
	Quaternary (Expression* left, int one, int two, int three) : SubExpression
		(left, one, two, three) {
	}
	double evaluate() {
		int l = (int)left->evaluate();

		if (l < 0) {
			return one;
		}
		else if (l == 0) {
			return two;
		}
		else if (a > 0) {
			return three;
		}
	}
};
