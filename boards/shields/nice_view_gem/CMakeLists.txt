if(CONFIG_ZMK_DISPLAY AND CONFIG_NICE_VIEW_WIDGET_STATUS)
  zephyr_library_include_directories(${CMAKE_SOURCE_DIR}/include)
  zephyr_library_sources(custom_status_screen.c)
  zephyr_library_sources(assets/images.c)
  zephyr_library_sources(widgets/battery.c)
  zephyr_library_sources(widgets/output.c)
  zephyr_library_sources(widgets/util.c)
  zephyr_library_sources(widgets/profile.c)
  zephyr_library_sources(widgets/screen.c)
  zephyr_library_sources(widgets/animation.c)
  zephyr_library_sources(assets/pavane.c)
  zephyr_library_sources(assets/crystal.c)
  zephyr_library_sources(assets/bongo.c)
  zephyr_library_sources(assets/mashle.c)
  zephyr_library_sources(assets/wizard.c)
  zephyr_library_sources(assets/ufo.c)
  zephyr_library_sources(assets/moon.c)
  zephyr_library_sources(assets/Daniel.c)
  zephyr_library_sources(assets/idea.c)
  zephyr_library_sources(assets/puck.c)
  zephyr_library_sources(assets/simon_cat.c)
  zephyr_library_sources(assets/smirk_cat.c)
  zephyr_library_sources(widgets/wpm.c)
  zephyr_library_sources(widgets/layer.c)
endif()
