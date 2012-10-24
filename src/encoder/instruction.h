/*
 *
 */

#if ! defined(__INSTRUCTION_H__)
#define __INSTRUCTION_H__

#include <string>

#include "../byteCode.h"
#include "../deltaConfig.h"

namespace delta
{
namespace encoder
{

class Instruction
{
	public:

	Instruction(byteCode::OpCode op);

	~Instruction();


	inline void setNext(Instruction* next) { m_next = next; }

	inline Instruction* getNext() const { return m_next; }

	inline byteCode::OpCode getOp() const { return m_operation; }


	/**
	 * For PushString
	 */
	void setString(const std::string& str);

	const std::string* getString();


	/**
	 * For PushNumber
	 */
	void setNumber(number_t number);

	number_t getNumber();


	/**
	 * For PushSymbol
	 */
	void setSymbol(refid_t symId);

	refid_t getSymbol();


	/**
	 * For CallFunction and Duplicate
	 */
	void setStackPos(stackpos_t pos);

	stackpos_t getStackPos();	


	/**
	 * For Return
	 */
	void setReturnCount(stackpos_t count);

	stackpos_t getReturnCount();	


	/**
	 * For Jump and BranchOnTrue
	 */
	void setJumpValue(Instruction* jump);

	Instruction* getJumpValue();


	private:
	
	byteCode::OpCode m_operation;

	Instruction* m_next;

	void *m_parameter;

};

};
};


#endif


