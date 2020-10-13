file( GLOB SRC *.cpp )
file( GLOB HDR *.h )
#
add_executable( template_application ${SRC} ${HDR} )
#
target_link_libraries( template_application PRIVATE template_library )
#
