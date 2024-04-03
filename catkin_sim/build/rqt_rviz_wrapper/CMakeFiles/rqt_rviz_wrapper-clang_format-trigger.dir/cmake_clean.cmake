file(REMOVE_RECURSE
  "clang_format/rqt_rviz_wrapper-clang_format-trigger"
  "clang_format/rqt_rviz_wrapper-clang_format-trigger.stamp"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/rqt_rviz_wrapper-clang_format-trigger.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
