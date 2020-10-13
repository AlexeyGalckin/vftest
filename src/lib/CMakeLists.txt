file( GLOB SRC *.cpp )
file( GLOB HDR *.h )
#
add_library( template_library ${SRC} ${HDR} )
