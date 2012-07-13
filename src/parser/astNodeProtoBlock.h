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
				
				AstNodeProtoBlock() : m_parent(0), m_block(0) {};

				virtual AstNodeType getType() const { return ProtoBlock; };


				inline void setSlot (const std::string& name) { m_name = std::string(name); }

				inline void setSlot (const char * name) { m_name = std::string(name); }
				
				inline const std::string& getSlot () const { return m_name; }


				inline void setBlock (AstNode* block) { m_block = block; }

				inline AstNode* getBlock () const { return m_block; }


				inline void setParent (AstNode* parent) { m_parent = parent; }

				inline AstNode* getParent () const { return m_parent; }

			private:

				std::string m_name;

				AstNode* m_parent;

				AstNode* m_block;
		};

	} // namespace delta
} // namespace parser

#endif







