#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "onnx_eigen" for configuration "RelWithDebInfo"
set_property(TARGET onnx_eigen APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(onnx_eigen PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELWITHDEBINFO "CXX"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libonnx_eigen.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS onnx_eigen )
list(APPEND _IMPORT_CHECK_FILES_FOR_onnx_eigen "${_IMPORT_PREFIX}/lib/libonnx_eigen.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
