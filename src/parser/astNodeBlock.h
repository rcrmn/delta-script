/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_BLOCK_H__
#define __PARSER_AST_NODE_BLOCK_H__

#include <vector>
#include "../deltaConfig.h"
#include "astNode.h"

namespace delta {
	namespace parser {

		class AstNodeBlock : public AstNode
		{
			public:
				
				AstNodeBlock() {};

				virtual AstNodeType getType() const { return Block; };


				inline void addExpression(AstNode* expr) { m_expressions.push_back(expr); }

				inline size_t getExpressionsCount() { return m_expressions.size(); }

				inline AstNode* getExpression(int i) { return m_expressions[i]; }

				
			private:

				std::vector<AstNode*> m_expressions;

		};

	} // namespace delta
} // namespace parser

#endif





