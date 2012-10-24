#include "instruction.h"


using namespace delta;
using namespace encoder;

using namespace std;

using namespace byteCode;


Instruction::Instruction(byteCode::OpCode op)
	: m_parameter(0)
	, m_next(0)
{
	m_operation = op;
}

Instruction::~Instruction()
{

	if(m_parameter != 0)
	{
		switch(m_operation)
		{
			case OpCode::PushNumber:
				// The ptr is of type number_t
				delete reinterpret_cast<number_t*>(m_parameter);
				break;
				
			case OpCode::PushString:
				// The ptr is of type std::string
				delete reinterpret_cast<string*>(m_parameter);
				break;
				
			case OpCode::PushSymbol:
				// The ptr is of type refid_t
				delete reinterpret_cast<refid_t*>(m_parameter);
				break;
				
			case OpCode::CallFunction:
			case OpCode::Duplicate:
			case OpCode::Return:
				// The ptr is of type stackpos_t
				delete reinterpret_cast<stackpos_t*>(m_parameter);
				break;

			default:
				break;
				
		}
	}

}


void Instruction::setString(const std::string& str)
{
	if(m_operation!=OpCode::PushString) return;

	m_parameter = reinterpret_cast<void*>(new string(str));
}

const string* Instruction::getString()
{
	if(m_operation!=OpCode::PushString) return nullptr;

	return reinterpret_cast<string*>(m_parameter);
}


void Instruction::setNumber(number_t number)
{
	if(m_operation!=OpCode::PushNumber) return;

	m_parameter = reinterpret_cast<void*>(new number_t(number));
}

number_t Instruction::getNumber()
{
	
}


void Instruction::setSymbol(refid_t symId)
{

}

refid_t Instruction::getSymbol()
{
	
}


void Instruction::setStackPos(stackpos_t pos)
{

}

stackpos_t Instruction::getStackPos()
{
	
}


void Instruction::setReturnCount(stackpos_t count)
{

}

stackpos_t Instruction::getReturnCount()
{
	
}


void Instruction::setJumpValue(Instruction* jump)
{

}

Instruction* Instruction::getJumpValue()
{
	
}


