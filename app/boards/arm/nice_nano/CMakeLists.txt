if (CONFIG_PINMUX OR CONFIG_PINNACLE)
    zephyr_library()
endif()

if (CONFIG_PINMUX)
    zephyr_library_sources(pinmux.c)
    zephyr_library_include_directories(${ZEPHYR_BASE}/drivers)
endif()

if (CONFIG_PINNACLE)
    # zephyr_library_sources(trackball.c)
    zephyr_library_sources(trackpad.c)
    zephyr_library_include_directories(${CMAKE_SOURCE_DIR}/include)
    # zephyr_library_include_directories(${CMAKE_SOURCE_DIR}/../include)
    zephyr_library_include_directories(${ZEPHYR_BASE}/drivers)
endif()

add_subdirectory_ifdef(CONFIG_PMW3360 trackball)