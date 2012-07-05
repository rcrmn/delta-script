/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_FUN_BLOCK_H__
#define __PARSER_AST_NODE_FUN_BLOCK_H__

#include <vector>
#include "../deltaConfig.h"
#include "astNodeSlot.h"
#include "astNodeBlock.h"

namespace delta {
	namespace parser {

		class AstNodeFunctionBlock : public AstNodeBlock
		{
			public:
				
				AstNodeFunctionBlock() : m_name(0) {};

				virtual AstNodeType getType() const { return FunctionBlock; };


				inline void setName(AstNodeSlot* name) { m_name = name; }
				
				inline AstNodeSlot* getName() { return m_name; }

			private:

				AstNodeSlot* m_name;

		};

	} // namespace delta
} // namespace parser

#endif







