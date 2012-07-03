/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_BOOLEAN_H__
#define __PARSER_AST_NODE_BOOLEAN_H__

#include "deltaConfig.h"
#include "parserAstNode.h"
#include <string>

namespace delta {
	namespace parser {

		class ParserAstNodeBoolean : public ParserAstNode
		{
			public:
				
				ParserAstNodeBoolean() : m_val(true) {  };

				ParserAstNodeBoolean(bool val) : m_val(val) {  };

				AstNodeType getType() const { return Boolean; };

				inline bool getValue() const { return m_val; };

				inline setValue(const bool val) { m_val = val; };

			private:

				bool m_val;

		};

	} // namespace delta
} // namespace parser

#endif




