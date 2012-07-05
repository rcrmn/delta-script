/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_SLOT_H__
#define __PARSER_AST_NODE_SLOT_H__

#include "../deltaConfig.h"
#include "astNode.h"
#include <string>

namespace delta {
	namespace parser {

		class AstNodeSlot : public AstNode
		{
			public:
				
				AstNodeType getType() const { return Slot; };


				AstNodeSlot() : m_name(""), m_slot(0) {};

				AstNodeSlot(const char* name) : m_name(name), m_slot(0) {};

				AstNodeSlot(const std::string& name) : m_name(name), m_slot(0) {};

				AstNodeSlot(const char* name, AstNode* slot) : m_name(name), m_slot(slot) {};

				AstNodeSlot(const std::string& name, AstNode* slot) : m_name(name), m_slot(slot) {};


				inline void setName(const std::string& name) { m_name = std::string(name); }

				inline void setName(const char* name) { m_name = std::string(name); }

				inline const std::string& getName() { return m_name; }


				inline void setSlot(AstNode* slot) { m_slot = slot; }

				inline AstNode* getSlot() { return m_slot; }


				virtual void test() const { std::cout << " {" << m_name << "} "; if(m_slot != 0) {std::cout << " -> "; m_slot->test();} }

			private:

				std::string m_name;

				AstNode* m_slot;

		};

	} // namespace delta
} // namespace parser

#endif




