"# SMU-CSE5382" 

Some notes:
This project should be built for x64 (64-bit). 32-bit builds will require different versions of GLFW. There is no reason to build 32-bit.

Under OSX, keep your library paths in mind when merging. If you experience linker errors after merging or cloning, make sure that your library paths are set correctly (project options | build phases | link with binaries | libglfw*)

