
cmake_minimum_required(VERSION 2.8)

project(deltalang)


# ================================================================
#
# Target lexerc -> generates the lexer with the flex command
#
# ================================================================

# Execute the lexer generator (flex) to get the latest changes applied
add_custom_target(lexerc flex -Cf -o lex.yy.c lexer/delta.flex
					DEPENDS src/lexer/delta.flex
					WORKING_DIRECTORY src/
					COMMENT "Generating the lexer engine (flex)." VERBATIM
					SOURCES src/lexer/delta.flex)



# ================================================================
# 
# Files to compile.
# 
# ================================================================

# Get all the files inside the src and src/lexer directories, relative to the root.
file(GLOB C_SOURCE_FILES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "src/*.cpp" "src/*.c")


message("In dir src/:         ${C_SOURCE_FILES}")


set(ALL_SOURCES ${C_SOURCE_FILES})


# ================================================================
# 
# Target delta -> generates the executable file.
# 
# ================================================================

message("All sources: ${ALL_SOURCES}")
add_executable(delta ${ALL_SOURCES})


# The final executable depends on the lexer
add_dependencies(delta lexerc)


# Tell the compiler to use the flag -lfl (flex library) to compile the lexer source file
#set_target_properties(delta
#					PROPERTIES LINK_FLAGS "-lfl")

