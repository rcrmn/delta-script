/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_STRING_H__
#define __PARSER_AST_NODE_STRING_H__

#include "deltaConfig.h"
#include "parserAstNode.h"
#include <string>

namespace delta {
	namespace parser {

		class ParserAstNodeString : public ParserAstNode
		{
			public:
				
				ParserAstNodeString() { m_str = ""; };

				ParserAstNodeString(const char* str) { m_str = str; };

				ParserAstNodeString(const std::string& str) { m_str = str; };

				AstNodeType getType() const { return String; };

				inline const std::string& getString() const { return m_str; };

				inline setString(const std::string& str) { m_str = str; };

			private:

				std::string m_str;

		};

	} // namespace delta
} // namespace parser

#endif


