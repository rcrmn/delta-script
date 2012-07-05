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


				inline void setSlot(AstNodeSlot* name) { m_name = name; }
				
				inline AstNodeSlot* getSlot() { return m_name; }

			private:

				AstNodeSlot* m_name;

		};

	} // namespace delta
} // namespace parser

#endif







