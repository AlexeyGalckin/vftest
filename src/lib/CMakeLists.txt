file( GLOB SRC *.cpp )
file( GLOB HDR *.h )
#
add_library( vf ${SRC} ${HDR} )
target_include_directories(vf PUBLIC ${CMAKE_CURRENT_LIST_DIR} )