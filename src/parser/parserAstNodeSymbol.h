/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_SYMBOL_H__
#define __PARSER_AST_NODE_SYMBOL_H__

#include "deltaConfig.h"
#include "parserAstNode.h"
#include <string>

namespace delta {
	namespace parser {

		class ParserAstNodeSymbol : public ParserAstNode
		{
			public:
				
				ParserAstNodeSymbol() { m_str = ""; };

				ParserAstNodeSymbol(const char* str) { m_str = str; };

				ParserAstNodeSymbol(const std::string& str) { m_str = str; };

				AstNodeType getType() const { return Symbol; };

				inline const std::string& getString() const { return m_str; };

				inline setString(const std::string& str) { m_str = str; };

			private:

				std::string m_str;

		};

	} // namespace delta
} // namespace parser

#endif



