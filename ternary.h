//CMSC 300
//header file to handle the ternary operation

class Ternary : public SubExpression{
public:
	Ternary(Expression* left, int one, int two) : SubExpression
	(left, one, two) {
	}
	double evaluate() {
		int l = (int)left->evaluate();

		if (l == 0) {
			return two;
		}
		else {
			return one;
		}
	}
}