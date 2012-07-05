/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_IF_BLOCK_H__
#define __PARSER_AST_NODE_IF_BLOCK_H__

#include <vector>
#include "../deltaConfig.h"
#include "astNode.h"
#include "astNodeBlock.h"

namespace delta {
	namespace parser {

		class AstNodeIfBlock : public AstNodeBlock
		{
			public:
				
				AstNodeIfBlock() : m_boolExp(0), m_elseBlock(0) {};

				virtual AstNodeType getType() const { return IfBlock; };

				inline void setBoolExpr(AstNode* boolExp) { m_boolExp = boolExp; }

				inline AstNode* getBoolExpr() { return m_boolExp; }
				

				inline void setElseBlock(AstNodeBlock* elseBlock) { m_elseBlock = elseBlock; }

				inline AstNodeBlock* getElseBlock() { return m_elseBlock; }

			private:

				AstNode* m_boolExp;

				AstNodeBlock* m_elseBlock;

		};

	} // namespace delta
} // namespace parser

#endif






