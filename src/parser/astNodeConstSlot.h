/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_CONST_SLOT_H__
#define __PARSER_AST_NODE_CONST_SLOT_H__

#include "../deltaConfig.h"
#include "astNode.h"
#include "astNodeSlot.h"
#include <string>

namespace delta {
	namespace parser {

		class AstNodeConstSlot : public AstNode
		{
			public:
				
				AstNodeType getType() const { return ConstSlot; };


				AstNodeConstSlot() : m_const(0), m_slot(0) {};

				AstNodeConstSlot(AstNode* constant) : m_const(constant), m_slot(0) {};

				AstNodeConstSlot(AstNode* constant, AstNode* slot) : m_const(constant), m_slot(slot) {};



				inline void setConstant(AstNode* constant) { m_const = constant; }

				inline AstNode* getConstant() { return m_const; }


				inline void setSlot(AstNode* slot) { m_slot = slot; }

				inline AstNode* getSlot() { return m_slot; }


			private:

				AstNode* m_const;

				AstNode* m_slot;

		};

	} // namespace delta
} // namespace parser

#endif




