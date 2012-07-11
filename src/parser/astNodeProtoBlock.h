/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_PROTO_BLOCK_H__
#define __PARSER_AST_NODE_PROTO_BLOCK_H__

#include <vector>
#include "../deltaConfig.h"
#include "astNodeSlot.h"
#include "astNodeBlock.h"

namespace delta {
	namespace parser {

		class AstNodeProtoBlock : public AstNodeBlock
		{
			public:
				
				AstNodeProtoBlock() : m_name(0) {};

				virtual AstNodeType getType() const { return ProtoBlock; };


				inline void setSlot(AstNode* name) { m_name = name; }
				
				inline AstNode* getSlot() { return m_name; }


				inline void setBlock(AstNode* block) { m_block = block; }

				inline AstNode* getBlock() const { return m_block; }

			private:

				AstNode* m_name;

				AstNode* m_block;
		};

	} // namespace delta
} // namespace parser

#endif







