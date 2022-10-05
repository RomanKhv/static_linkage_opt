set( PROJECT_NAME mydll )
project( ${PROJECT_NAME} CXX )

add_library( ${PROJECT_NAME} SHARED
    main.cpp
)

target_compile_definitions( ${PROJECT_NAME} PRIVATE "MYLIB_EXPORTS" )

target_link_libraries( ${PROJECT_NAME} PRIVATE static_lib )

# target_link_options( ${PROJECT_NAME} PRIVATE "/WHOLEARCHIVE:static_lib.lib" )