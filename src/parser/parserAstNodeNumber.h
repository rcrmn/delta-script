/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_NUMBER_H__
#define __PARSER_AST_NODE_NUMBER_H__

#include "deltaConfig.h"
#include "parserAstNode.h"

namespace delta {
	namespace parser {

		class ParserAstNodeNumber : public ParserAstNode
		{
			public:
				
				ParserAstNodeNumber() : m_value(0) {};

				ParserAstNodeNumber(number_t num) : m_value(num) {};


				AstNodeType getType() const { return Number; };

				inline number_t getValue() const { return m_value; };

				inline setValue(number_t num) { m_value = num; };

			private:

				number_t m_value;

		};

	} // namespace delta
} // namespace parser

#endif


