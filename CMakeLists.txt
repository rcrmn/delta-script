
cmake_minimum_required(VERSION 2.8)

project(deltalang)


# ================================================================
#
# Target lexerc -> generates the lexer with the flex command
#
# ================================================================

# Execute the lexer generator (flex) to get the latest changes applied
add_custom_target(lexerc flex -Cf -o lex.yy.c delta.flex
					DEPENDS src/lexer/delta.flex
					WORKING_DIRECTORY src/lexer/
					COMMENT "Generating the lexer engine (flex)." VERBATIM
					SOURCES src/lexer/delta.flex)



# ================================================================
# 
# Files to compile.
# 
# ================================================================

# Get all the files inside the src and src/lexer directories, relative to the root.
file(GLOB MAIN_SOURCE RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "src/*.cpp")

file(GLOB LEXER_SOURCE RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "src/lexer/*.c" "src/lexer/*.cc" "src/lexer/*.cpp")

message("In dir src/:         ${MAIN_SOURCE}")

message("In dir src/lexer/:   ${LEXER_SOURCE}")


set(ALL_SOURCES ${MAIN_SOURCE} ${LEXER_SOURCE})


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

