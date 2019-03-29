//PROJECT_NAME
//| --build // This is DVCS ignored but has all the built intermediates and final binaries
//|   |--release // These are the different build profiles
//|   |--debug
//|   |--profile
//| `- - coverage
//| --bin // For binary source code
//| `- - hello_world
//|       |--doc
//|       |--inc
//|       |--src
//|       |--tests
//| `- - build_script  // Builds binary into the build folder
//| --include // Public headers for the library
//| `- - these
//| `- - folders
//| `- - represent
//| `- - namespaces
//| `- - my_awesome_class.hpp
//| --lib // library source code
//|   |--these
//|   |   `- - folders
//|   |       `- - represent
//|   |           `- - namespaces
//|   |               |--inc // Private headers
//|   |               |   `- - my_private_class.hpp // internal class
//|   |               |--src // Source code for this namespace
//|   |               |   |--posix
//|   |               |   |   `- - my_awesome_class.cpp // posix specific source code
//|   |               |   |--nt
//|   |               |   |   `- - my_awesome_class.cpp // nt specific source code
//|   |               |   |--my_private_class.cpp // non-visibile class
//|   |               |   `- - my_awesome_class.cpp // cross platform source code
//|   |               |--tests // Unit tests
//|   |               |   `- - my_awesome_class.cpp // builds a test executable for the library
//|   |               `- - doc // Documentation for this namespace
//|   |                   `- - namespace.dox
//| `- - build_script  // Builds binary into the build folder
//| --doc // Documentation files
//|   |--main_page.dox
//| `- - namespace.dox
//`- - build_script  // Builds the source code into the build folder