set( PROJECT_NAME static_lib )
project( ${PROJECT_NAME} CXX )

add_library( ${PROJECT_NAME} STATIC
    StaticLib1.cpp
    StaticLib2.cpp
)

target_compile_definitions( ${PROJECT_NAME} PUBLIC "MYLIB_EXPORTS" )
