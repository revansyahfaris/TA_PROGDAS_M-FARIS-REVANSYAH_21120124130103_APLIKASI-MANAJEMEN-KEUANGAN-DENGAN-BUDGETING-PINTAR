# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "AplikasiManajemenKeuanganDenganBudgetingPintar_autogen"
  "CMakeFiles\\AplikasiManajemenKeuanganDenganBudgetingPintar_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\AplikasiManajemenKeuanganDenganBudgetingPintar_autogen.dir\\ParseCache.txt"
  )
endif()
