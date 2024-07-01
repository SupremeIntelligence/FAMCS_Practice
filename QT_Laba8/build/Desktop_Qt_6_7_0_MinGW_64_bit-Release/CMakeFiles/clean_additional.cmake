# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\QT_Laba8_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QT_Laba8_autogen.dir\\ParseCache.txt"
  "QT_Laba8_autogen"
  )
endif()
