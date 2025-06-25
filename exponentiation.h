//CMSC 330
//Project 2

//file handles the class definition for expontnents (^ operator)

class Exponents : public SubExpression {
public:
	Exponents(Expression* left, Expression* right) : SubExpression(left, right) {
	}
	double evaluate() {
		return pow(left->evaluate(), right->evaluate());
	}
};
