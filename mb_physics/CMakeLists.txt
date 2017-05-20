source_group(\\ FILES CMakeLists.txt)

set( MB_PHYSICS_PUBLIC_HEADERS
  Components/ICollider.hpp
)

set( MB_PHYSICS_HEADERS
)

set( MB_PHYSICS_SOURCES
  Components/ICollider.cpp
)

set( MB_PHYSICS_LINK_LIBRARIES
  mb
)

common_library( mb_physics )
