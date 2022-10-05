set( PROJECT_NAME exe )
project( ${PROJECT_NAME} CXX )

add_executable( ${PROJECT_NAME}
    exe.cpp
)

target_link_libraries( ${PROJECT_NAME} PRIVATE mydll )
 