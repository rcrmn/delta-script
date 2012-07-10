/*
 *
 *
 */


#pragma once
#if ! defined __PARSER_AST_NODE_FUN_BLOCK_H__
#define __PARSER_AST_NODE_FUN_BLOCK_H__

#include <vector>
#include <string>
#include "../deltaConfig.h"
#include "astNodeSlot.h"
#include "astNodeBlock.h"

namespace delta {
	namespace parser {

		class AstNodeFunctionBlock : public AstNodeBlock
		{
			public:
				
				AstNodeFunctionBlock() : m_code(0) {};

				virtual AstNodeType getType() const { return FunctionBlock; };


				inline void setName(const char* name) { m_name = name; }

				inline void setName(const std::string& name) { m_name = name; }
				
				inline const std::string& getName() const { return m_name; }


				inline void addParam(const char* param) { m_params.push_back(std::string(param)); }

				inline void addParam(const std::string& param) { m_params.push_back(std::string(param)); }

				inline const std::string& getParam(int i) const { return m_params[m_params.size()-i-1]; }

				inline size_t getParamsCount() const { return m_params.size(); }


				inline void setCodeBlock(AstNode* code) { m_code = code; } 

				inline AstNode* getCodeBlock() const { return m_code; }


				virtual void test() const 
				{
					std::vector<std::string>::const_iterator it;
					std::cout << " FUN < " << m_name << " >  ( ";
					for(it=m_params.begin(); it != m_params.end(); ++it)
					{
						std::cout << (*it) << " , ";
					}
					std::cout << " )  { " << std::endl;
					m_code->test();
					std::cout << std::endl << " } " << std::endl;
				}

			private:

				std::string m_name;

				std::vector<std::string> m_params;

				AstNode* m_code;
		};

	} // namespace delta
} // namespace parser

#endif







