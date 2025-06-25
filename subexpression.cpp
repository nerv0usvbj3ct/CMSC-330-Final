// CMSC 330 Advanced Programming Languages
// Project 2 Skeleton
// UMGC CITE
// Spring 2023

// This file contains the body of the functions contained in The SubExpression class, which includes
// the constructor that initializes the left and right subexpressions and the static function parse
// parses the subexpression. Addition and subtraction are the two operators that are implemented.

#include <iostream>
#include <sstream>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "plus.h"
#include "minus.h"
#include "multiplication.h"
#include "division.h"
#include "average.h"
#include "lessthan.h"
#include "greaterthan.h"
#include "remainder.h"
#include "exponentiation.h"
#include "quaternary.h"
#include "ternary.h"
#include "unary.h"

SubExpression::SubExpression(Expression* left, Expression* right) {
    this->left = left;
    this->right = right;
}

//constructor for the quaternary expression
SubExpression::SubExpression(Expression* left, int one, int two, int three) {
    this->left = left;
    this->one = one;
    this->two = two;
    this->three = three;
}

//constructor for the ternary expression
SubExpression::SubExpression(Expression* left, int one, int two) {
    this->left = left;
    this->one = one;
    this->two = two;
}
//constructor for the unary expression
SubExpression::SubExpression(Expression* left) {
    this->left = left;
}

Expression* SubExpression::parse(stringstream& in) {
    Expression* left;
    Expression* right;
    char operation, paren;
    int one, two, three;

    left = Operand::parse(in);
    in >> operation;

    //if..else to include the additional operator types
    //quaternary
    if (operation == '#') {
        in >> one;
        in >> two;
        in >> three;
    }
    else if (operation == '?') {
        in >> one;
        in >> two;
    }
    else if (operation == '~') {
        right = Operand::parse(in);
    }

    in >> paren;
    switch (operation) {
    case '+':
        return new Plus(left, right);
    case '-':
        return new Minus(left, right);
    case '*':
        return new Multiplication(left, right);
    case '/':
        return new Division(left, right);
    case '&':
        return new Average(left, right);
    case '<':
        return new LessThan(left, right);
    case '>':
        return new GreaterThan(left, right);
    case '%':
        return new Remainder(left, right);
    case '^':
        return new Exponents(left, right);
    case '#':
        return new Quaternary(left, one, two, three);
    case '?':
        return new Ternary(left, one, two);
    case '~':
        return new Unary(left);
    }
    return 0;
}