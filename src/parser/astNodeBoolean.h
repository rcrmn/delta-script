/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_BOOLEAN_H__
#define __PARSER_AST_NODE_BOOLEAN_H__

#include "../deltaConfig.h"
#include "astNode.h"
#include <string>

namespace delta {
	namespace parser {

		class AstNodeBoolean : public AstNode
		{
			public:
				
				AstNodeBoolean() : m_val(true) {  };

				AstNodeBoolean(bool val) : m_val(val) {  };

				AstNodeType getType() const { return Boolean; };

				inline bool getValue() const { return m_val; };

				inline void setValue(const bool val) { m_val = val; };

			private:

				bool m_val;

		};

	} // namespace delta
} // namespace parser

#endif




