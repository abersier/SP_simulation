file(REMOVE_RECURSE
  "clang_tidy/rqt_rviz_wrapper-clang_tidy-trigger"
  "clang_tidy/rqt_rviz_wrapper-clang_tidy-trigger.stamp"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/rqt_rviz_wrapper-clang_tidy-trigger.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
