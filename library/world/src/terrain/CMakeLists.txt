# THIS FILE HAS BEEN GENERATED BY THE BUILD CONFIGURATION SYSTEM - DO NOT EDIT

set(MINECPP_WORLD_TERRAIN_INCLUDE_DIR ${MINECPP_WORLD_DIR}/include/minecpp/world/terrain)
target_sources(minecpp_world
    # Source files
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/Height.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/Terrain.cpp

    # Header files
    PUBLIC
        ${MINECPP_WORLD_TERRAIN_INCLUDE_DIR}/Height.h
        ${MINECPP_WORLD_TERRAIN_INCLUDE_DIR}/Terrain.h
)

