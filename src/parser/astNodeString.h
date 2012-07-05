/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_STRING_H__
#define __PARSER_AST_NODE_STRING_H__

#include "../deltaConfig.h"
#include "astNode.h"
#include <string>

namespace delta {
	namespace parser {

		class AstNodeString : public AstNode
		{
			public:
				
				AstNodeString() { m_str = ""; };

				AstNodeString(const char* str) { m_str = str; };

				AstNodeString(const std::string& str) { m_str = str; };

				AstNodeType getType() const { return String; };

				inline const std::string& getString() const { return m_str; };

				inline void setString(const std::string& str) { m_str = str; };


				virtual void test() const { std::cout << " String \"" << m_str << "\" "; }

			private:

				std::string m_str;

		};

	} // namespace delta
} // namespace parser

#endif


