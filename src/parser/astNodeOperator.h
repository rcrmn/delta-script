/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_OPERATOR_H__
#define __PARSER_AST_NODE_OPERATOR_H__

#include <vector>
#include "../deltaConfig.h"
#include "astNode.h"
#include "astNodeSlot.h"

namespace delta {
	namespace parser {

		class AstNodeOperator : public AstNode
		{
			public:

				enum OperatorType {
					Assign,
					AssignAdd,
					AssignSubs,
					AssignMult,
					AssignDiv,
					Add,
					Subs,
					Mult,
					Div,
				};
				
				AstNodeOperator() {};

				AstNodeOperator(AstNode* left, OperatorType oper, AstNode* right) : m_left(left), m_right(right), m_operator(oper) {};


				AstNodeType getType() const { return Operator; };

				inline void setLeft(AstNode* left) { m_left = left; }

				inline void setRight(AstNode* right) { m_right = right; }

				inline void setOperator(OperatorType oper) { m_operator = oper; }

				inline AstNode* getLeft() { return m_left; }

				inline AstNode* getRight() { return m_right; }

				inline OperatorType getOperator() { return m_operator; }



				virtual void test() const { m_left->test(); std::cout << " oper<" << m_operator << "> "; m_right->test(); }

			private:

				AstNode* m_left;
				AstNode* m_right;

				OperatorType m_operator;

		};

	} // namespace delta
} // namespace parser

#endif




