/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_WHILE_BLOCK_H__
#define __PARSER_AST_NODE_WHILE_BLOCK_H__

#include <vector>
#include "../deltaConfig.h"
#include "astNode.h"
#include "astNodeIfBlock.h"

namespace delta {
	namespace parser {

		class AstNodeWhileBlock : public AstNodeBlock
		{
			public:
				AstNodeWhileBlock() : m_boolExp(0), m_block(0) {};

				virtual AstNodeType getType() const { return WhileBlock; };

				inline void setBoolExpr(AstNode* boolExp) { m_boolExp = boolExp; }

				inline AstNode* getBoolExpr() const { return m_boolExp; }


				inline void setBlock(AstNode* block) { m_block = block; } 

				inline AstNode* getBlock() const { return m_block; }

				
				virtual void test() const
				{
					std::cout << " WHILE ( "; m_boolExp->test(); std::cout << " )  { " << std::endl;
					m_block->test();
					std::cout << std::endl << " } " << std::endl;
				}
				
			private:
				AstNode* m_boolExp;

				AstNode* m_block;

		};

	} // namespace delta
} // namespace parser

#endif






