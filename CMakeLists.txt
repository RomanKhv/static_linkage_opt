cmake_minimum_required ( VERSION 3.20 )		# VS 16.11

project( static_lib_linkage_issue CXX )

set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/x64 )
set( CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/x64 )
set( CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/x64 )

add_subdirectory( static_lib )
add_subdirectory( dll )
add_subdirectory( exe )
