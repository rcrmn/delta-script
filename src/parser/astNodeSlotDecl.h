/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_SLOT_DECL_H__
#define __PARSER_AST_NODE_SLOT_DECL_H__

#include "../deltaConfig.h"
#include "astNode.h"
#include <string>

namespace delta {
	namespace parser {

		class AstNodeSlotDecl : public AstNode
		{
			public:
				
				AstNodeType getType() const { return SlotDecl; };


				AstNodeSlotDecl() : m_name(""), m_value(0) {};

				AstNodeSlotDecl(const char* name) : m_name(name), m_value(0) {};

				AstNodeSlotDecl(const std::string& name) : m_name(name), m_value(0) {};

				AstNodeSlotDecl(const char* name, AstNode* value) : m_name(name), m_value(value) {};

				AstNodeSlotDecl(const std::string& name, AstNode* value) : m_name(name), m_value(value) {};


				inline void setName(const std::string& name) { m_name = std::string(name); }

				inline void setName(const char* name) { m_name = std::string(name); }

				inline const std::string& getName() { return m_name; }


				inline void setInitValue(AstNode* value) { m_value = value; }

				inline AstNode* getInitValue() { return m_value; }


				virtual void test() const { std::cout << " def<" << m_name << "> "; if(m_value != 0) { std::cout << " = "; m_value->test(); } }
			private:

				std::string m_name;

				AstNode* m_value;

		};

	} // namespace delta
} // namespace parser

#endif




