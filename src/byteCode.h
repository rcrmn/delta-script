/**
 *
 */

#if ! defined __BYTE_CODE_H__
#define __BYTE_CODE_H__

#include <cstdint>

namespace delta {

	namespace byteCode {

		enum class OpCode : std::uint8_t {
			PushTrue      = 0x01,	// Pushes the boolean true
			PushFalse	  = 0x02,	// Pushes the boolean false
			PushNull	  = 0x03,	// Pushes null
			PushNumber	  = 0x04,	// Pushes a number to the stack
			PushSymbol	  = 0x05,	// Pushes a symbol
			PushString	  = 0x06,	// Pushes a string

			Duplicate	  = 0x08,	// Pushes a copy of whatever is in the stack at the specified index

			Pop			  = 0x09,	// Pops N items from the stack

			CallFunction  = 0x10,	// Calls the function at the specified index
			Return		  = 0x11,	// Returns to the calling function, copying as many returned values as specified

			BranchOnTrue  = 0x20,	// Branches if the top value of the stack evaluates to true
			Jump		  = 0x21,	// Jumps to the specified position
		};

	};

};



#endif
