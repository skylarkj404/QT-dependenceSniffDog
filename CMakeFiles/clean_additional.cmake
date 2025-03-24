# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\dllSniffdog-QT_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\dllSniffdog-QT_autogen.dir\\ParseCache.txt"
  "dllSniffdog-QT_autogen"
  )
endif()
