/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_SYMBOL_H__
#define __PARSER_AST_NODE_SYMBOL_H__

#include "../deltaConfig.h"
#include "astNode.h"
#include <string>

namespace delta {
	namespace parser {

		class AstNodeSymbol : public AstNode
		{
			public:
				
				AstNodeSymbol() { m_str = ""; };

				AstNodeSymbol(const char* str) { m_str = str; };

				AstNodeSymbol(const std::string& str) { m_str = str; };

				AstNodeType getType() const { return Symbol; };

				inline const std::string& getString() const { return m_str; };

				inline void setString(const std::string& str) { m_str = str; };

				
				virtual void test() const 
				{
					std::cout << " Symbol( :'" << m_str << "' ) ";
				}
			private:

				std::string m_str;

		};

	} // namespace delta
} // namespace parser

#endif



