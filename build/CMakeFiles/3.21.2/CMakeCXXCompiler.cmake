set(CMAKE_CXX_COMPILER "/nix/store/2qwnn6lizc9d119kp3zig3q19gbfm4n6-gcc-wrapper-10.3.0/bin/g++")
set(CMAKE_CXX_COMPILER_ARG1 "")
set(CMAKE_CXX_COMPILER_ID "GNU")
set(CMAKE_CXX_COMPILER_VERSION "10.3.0")
set(CMAKE_CXX_COMPILER_VERSION_INTERNAL "")
set(CMAKE_CXX_COMPILER_WRAPPER "")
set(CMAKE_CXX_STANDARD_COMPUTED_DEFAULT "14")
set(CMAKE_CXX_COMPILE_FEATURES "cxx_std_98;cxx_template_template_parameters;cxx_std_11;cxx_alias_templates;cxx_alignas;cxx_alignof;cxx_attributes;cxx_auto_type;cxx_constexpr;cxx_decltype;cxx_decltype_incomplete_return_types;cxx_default_function_template_args;cxx_defaulted_functions;cxx_defaulted_move_initializers;cxx_delegating_constructors;cxx_deleted_functions;cxx_enum_forward_declarations;cxx_explicit_conversions;cxx_extended_friend_declarations;cxx_extern_templates;cxx_final;cxx_func_identifier;cxx_generalized_initializers;cxx_inheriting_constructors;cxx_inline_namespaces;cxx_lambdas;cxx_local_type_template_args;cxx_long_long_type;cxx_noexcept;cxx_nonstatic_member_init;cxx_nullptr;cxx_override;cxx_range_for;cxx_raw_string_literals;cxx_reference_qualified_functions;cxx_right_angle_brackets;cxx_rvalue_references;cxx_sizeof_member;cxx_static_assert;cxx_strong_enums;cxx_thread_local;cxx_trailing_return_types;cxx_unicode_literals;cxx_uniform_initialization;cxx_unrestricted_unions;cxx_user_literals;cxx_variadic_macros;cxx_variadic_templates;cxx_std_14;cxx_aggregate_default_initializers;cxx_attribute_deprecated;cxx_binary_literals;cxx_contextual_conversions;cxx_decltype_auto;cxx_digit_separators;cxx_generic_lambdas;cxx_lambda_init_captures;cxx_relaxed_constexpr;cxx_return_type_deduction;cxx_variable_templates;cxx_std_17;cxx_std_20")
set(CMAKE_CXX98_COMPILE_FEATURES "cxx_std_98;cxx_template_template_parameters")
set(CMAKE_CXX11_COMPILE_FEATURES "cxx_std_11;cxx_alias_templates;cxx_alignas;cxx_alignof;cxx_attributes;cxx_auto_type;cxx_constexpr;cxx_decltype;cxx_decltype_incomplete_return_types;cxx_default_function_template_args;cxx_defaulted_functions;cxx_defaulted_move_initializers;cxx_delegating_constructors;cxx_deleted_functions;cxx_enum_forward_declarations;cxx_explicit_conversions;cxx_extended_friend_declarations;cxx_extern_templates;cxx_final;cxx_func_identifier;cxx_generalized_initializers;cxx_inheriting_constructors;cxx_inline_namespaces;cxx_lambdas;cxx_local_type_template_args;cxx_long_long_type;cxx_noexcept;cxx_nonstatic_member_init;cxx_nullptr;cxx_override;cxx_range_for;cxx_raw_string_literals;cxx_reference_qualified_functions;cxx_right_angle_brackets;cxx_rvalue_references;cxx_sizeof_member;cxx_static_assert;cxx_strong_enums;cxx_thread_local;cxx_trailing_return_types;cxx_unicode_literals;cxx_uniform_initialization;cxx_unrestricted_unions;cxx_user_literals;cxx_variadic_macros;cxx_variadic_templates")
set(CMAKE_CXX14_COMPILE_FEATURES "cxx_std_14;cxx_aggregate_default_initializers;cxx_attribute_deprecated;cxx_binary_literals;cxx_contextual_conversions;cxx_decltype_auto;cxx_digit_separators;cxx_generic_lambdas;cxx_lambda_init_captures;cxx_relaxed_constexpr;cxx_return_type_deduction;cxx_variable_templates")
set(CMAKE_CXX17_COMPILE_FEATURES "cxx_std_17")
set(CMAKE_CXX20_COMPILE_FEATURES "cxx_std_20")
set(CMAKE_CXX23_COMPILE_FEATURES "")

set(CMAKE_CXX_PLATFORM_ID "Linux")
set(CMAKE_CXX_SIMULATE_ID "")
set(CMAKE_CXX_COMPILER_FRONTEND_VARIANT "")
set(CMAKE_CXX_SIMULATE_VERSION "")




set(CMAKE_AR "/nix/store/h19zwlkrp6b0hp3ypbqdcggnyarn3af6-binutils-2.35.2/bin/ar")
set(CMAKE_CXX_COMPILER_AR "/nix/store/6r5h4h7nqx73m87j5b9sjwy2x9kyri0k-gcc-10.3.0/bin/gcc-ar")
set(CMAKE_RANLIB "/nix/store/h19zwlkrp6b0hp3ypbqdcggnyarn3af6-binutils-2.35.2/bin/ranlib")
set(CMAKE_CXX_COMPILER_RANLIB "/nix/store/6r5h4h7nqx73m87j5b9sjwy2x9kyri0k-gcc-10.3.0/bin/gcc-ranlib")
set(CMAKE_LINKER "/nix/store/2qwnn6lizc9d119kp3zig3q19gbfm4n6-gcc-wrapper-10.3.0/bin/ld")
set(CMAKE_MT "")
set(CMAKE_COMPILER_IS_GNUCXX 1)
set(CMAKE_CXX_COMPILER_LOADED 1)
set(CMAKE_CXX_COMPILER_WORKS TRUE)
set(CMAKE_CXX_ABI_COMPILED TRUE)
set(CMAKE_COMPILER_IS_MINGW )
set(CMAKE_COMPILER_IS_CYGWIN )
if(CMAKE_COMPILER_IS_CYGWIN)
  set(CYGWIN 1)
  set(UNIX 1)
endif()

set(CMAKE_CXX_COMPILER_ENV_VAR "CXX")

if(CMAKE_COMPILER_IS_MINGW)
  set(MINGW 1)
endif()
set(CMAKE_CXX_COMPILER_ID_RUN 1)
set(CMAKE_CXX_SOURCE_FILE_EXTENSIONS C;M;c++;cc;cpp;cxx;m;mm;mpp;CPP;ixx;cppm)
set(CMAKE_CXX_IGNORE_EXTENSIONS inl;h;hpp;HPP;H;o;O;obj;OBJ;def;DEF;rc;RC)

foreach (lang C OBJC OBJCXX)
  if (CMAKE_${lang}_COMPILER_ID_RUN)
    foreach(extension IN LISTS CMAKE_${lang}_SOURCE_FILE_EXTENSIONS)
      list(REMOVE_ITEM CMAKE_CXX_SOURCE_FILE_EXTENSIONS ${extension})
    endforeach()
  endif()
endforeach()

set(CMAKE_CXX_LINKER_PREFERENCE 30)
set(CMAKE_CXX_LINKER_PREFERENCE_PROPAGATES 1)

# Save compiler ABI information.
set(CMAKE_CXX_SIZEOF_DATA_PTR "8")
set(CMAKE_CXX_COMPILER_ABI "ELF")
set(CMAKE_CXX_BYTE_ORDER "LITTLE_ENDIAN")
set(CMAKE_CXX_LIBRARY_ARCHITECTURE "")

if(CMAKE_CXX_SIZEOF_DATA_PTR)
  set(CMAKE_SIZEOF_VOID_P "${CMAKE_CXX_SIZEOF_DATA_PTR}")
endif()

if(CMAKE_CXX_COMPILER_ABI)
  set(CMAKE_INTERNAL_PLATFORM_ABI "${CMAKE_CXX_COMPILER_ABI}")
endif()

if(CMAKE_CXX_LIBRARY_ARCHITECTURE)
  set(CMAKE_LIBRARY_ARCHITECTURE "")
endif()

set(CMAKE_CXX_CL_SHOWINCLUDES_PREFIX "")
if(CMAKE_CXX_CL_SHOWINCLUDES_PREFIX)
  set(CMAKE_CL_SHOWINCLUDES_PREFIX "${CMAKE_CXX_CL_SHOWINCLUDES_PREFIX}")
endif()





set(CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES "/nix/store/mjmvmigq0vmniaz5ycd65ag5211fibp1-curl-7.79.1-dev/include;/nix/store/iimvwazfgg9jrm6chb2q32rjcskg3l59-nghttp2-1.43.0-dev/include;/nix/store/62sihx8qc0wzxi02yrc5408gdpsq8l32-libidn-1.38-dev/include;/nix/store/9r1ypzrrqvb017dzr5pnzml0c2nnnq6j-zlib-1.2.11-dev/include;/nix/store/cd9mmzss523aacm6mn7pzh7p9nj0ml9b-libkrb5-1.18-dev/include;/nix/store/dp0il0q8y6br56m0f11r4y2h64svc3qd-openssl-1.1.1m-dev/include;/nix/store/qbggw4g8zpspmdcdpfr6ps208hdrcbnx-libssh2-1.10.0-dev/include;/nix/store/93363yzfwmggdb6cqcqhk6140aws00l3-brotli-1.0.9-dev/include;/nix/store/21kyd33d35cfgqqisczhr6s5fvrfwmdg-json-c-0.15-dev/include;/nix/store/6r5h4h7nqx73m87j5b9sjwy2x9kyri0k-gcc-10.3.0/include/c++/10.3.0;/nix/store/6r5h4h7nqx73m87j5b9sjwy2x9kyri0k-gcc-10.3.0/include/c++/10.3.0/x86_64-unknown-linux-gnu;/nix/store/6r5h4h7nqx73m87j5b9sjwy2x9kyri0k-gcc-10.3.0/include/c++/10.3.0/backward;/nix/store/6r5h4h7nqx73m87j5b9sjwy2x9kyri0k-gcc-10.3.0/lib/gcc/x86_64-unknown-linux-gnu/10.3.0/include;/nix/store/6r5h4h7nqx73m87j5b9sjwy2x9kyri0k-gcc-10.3.0/include;/nix/store/6r5h4h7nqx73m87j5b9sjwy2x9kyri0k-gcc-10.3.0/lib/gcc/x86_64-unknown-linux-gnu/10.3.0/include-fixed;/nix/store/msy4nj4gscw9csc82labx0xvh7vqlfif-glibc-2.33-117-dev/include")
set(CMAKE_CXX_IMPLICIT_LINK_LIBRARIES "stdc++;m;gcc_s;gcc;c;gcc_s;gcc")
set(CMAKE_CXX_IMPLICIT_LINK_DIRECTORIES "/nix/store/lwyqf6nmx7qi1frlx0bx6j6y9pvxwnac-nghttp2-1.43.0-lib/lib;/nix/store/h750vjip02b652scn5hdmab1wc2cmy3b-libidn-1.38/lib;/nix/store/p54p1kb7iinbg1135ibcfqbyh6j4x986-zlib-1.2.11/lib;/nix/store/1klj43l4mhn424sgs0gm6zw2zm78vh58-libkrb5-1.18/lib;/nix/store/b7rwxm8hqwnkv2sp9ky74y9cjv165w3c-openssl-1.1.1m/lib;/nix/store/v41jkwfpph9z41mk5a8g1c8s8j0v34wy-libssh2-1.10.0/lib;/nix/store/4c6ffpx7859zbmxixafkzwii0k83slfa-brotli-1.0.9-lib/lib;/nix/store/vk5d5rvyrb5m2vj45qg0b9y96dmp9i22-curl-7.79.1/lib;/nix/store/swp75kksdigdd2hc6xznvj0m4na3285j-json-c-0.15/lib;/nix/store/65hafbsx91127farbmyyv4r5ifgjdg43-glibc-2.33-117/lib;/nix/store/dd8swlwhpdhn6bv219562vyxhi8278hs-gcc-10.3.0-lib/lib;/nix/store/2qwnn6lizc9d119kp3zig3q19gbfm4n6-gcc-wrapper-10.3.0/bin;/nix/store/6r5h4h7nqx73m87j5b9sjwy2x9kyri0k-gcc-10.3.0/lib/gcc/x86_64-unknown-linux-gnu/10.3.0;/nix/store/6r5h4h7nqx73m87j5b9sjwy2x9kyri0k-gcc-10.3.0/lib64;/nix/store/6r5h4h7nqx73m87j5b9sjwy2x9kyri0k-gcc-10.3.0/lib")
set(CMAKE_CXX_IMPLICIT_LINK_FRAMEWORK_DIRECTORIES "")
