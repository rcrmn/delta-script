/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_H__
#define __PARSER_AST_NODE_H__

#include <iostream>

namespace delta {
	namespace parser {

		enum AstNodeType {
			Number,
			String,
			Symbol,
			Boolean,
			Range,
			Array,
			Map, 
			Slot, 
			ConstSlot,
			FunctionCall, 
			Block,
			IfBlock,
			WhileBlock,
			ForBlock,
			FunctionBlock,
			ProtoBlock,
			SlotDecl,
			Operator,
		};

		class AstNode
		{
			public:
				virtual AstNodeType getType() const = 0;

				virtual void test() const {};

				virtual ~AstNode() {};
		};

	} // namespace delta
} // namespace parser

#endif


