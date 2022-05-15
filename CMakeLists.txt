cmake_minimum_required(VERSION 2.6.0)

# here we specify that the project is C language only, so the default
# C compiler on the system will be used
project(pstyle C)

add_executable(pstyle pstyle.c)
target_include_directories(pstyle PUBLIC
                            "${PROJECT_BINARY_DIR}")