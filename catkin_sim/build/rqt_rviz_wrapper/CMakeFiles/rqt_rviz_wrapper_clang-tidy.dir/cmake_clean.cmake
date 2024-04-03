file(REMOVE_RECURSE
  "clang_tidy/atkin_sim-src-anymal_rsl-anymal_rsl_user_interface-graphical_user_interface-rqt-rqt_rviz_wrapper-test-EmptyTests.cpp-clang_tidy.proxy"
  "clang_tidy/mal_rsl-anymal_rsl_user_interface-graphical_user_interface-rqt-rqt_rviz_wrapper-src-rqt_rviz_wrapper-RvizWrapper.cpp-clang_tidy.proxy"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/rqt_rviz_wrapper_clang-tidy.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
