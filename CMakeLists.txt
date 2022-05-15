cmake_minimum_required(VERSION 3.10)
set(project_name pstyle)
set(${project_name}_version_major 1)
set(${project_name}_version_minor 0)

configure_file(pstyle.in.h lib/pstyle.h)
add_library(${project_name})
project(${project_name} VERSION 1.0)
target_include_directories(${project_name} PRIVATE lib)
target_sources(${project_name} PRIVATE
    lib/colors.h
    lib/pstyle.h
)
set_target_properties(${project_name} PROPERTIES LINKER_LANGUAGE C)