file( GLOB SRC *.cpp )
file( GLOB HDR *.h )
#
add_executable( vftest ${SRC} ${HDR} )
#
add_dependencies( vftest vf )
target_link_libraries( vftest vf )
