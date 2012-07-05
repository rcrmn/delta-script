/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_NUMBER_H__
#define __PARSER_AST_NODE_NUMBER_H__

#include "../deltaConfig.h"
#include "astNode.h"

namespace delta {
	namespace parser {

		class AstNodeNumber : public AstNode
		{
			public:
				
				AstNodeNumber() : m_value(0) {};

				AstNodeNumber(number_t num) : m_value(num) {};


				AstNodeType getType() const { return Number; };

				inline number_t getValue() const { return m_value; };

				inline void setValue(number_t num) { m_value = num; };


				virtual void test() const { std::cout << " number[" << m_value << "] "; }
			private:

				number_t m_value;

		};

	} // namespace delta
} // namespace parser

#endif


