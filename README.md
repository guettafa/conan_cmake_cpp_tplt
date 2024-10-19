# Requirements
- conan
- cmake

# Install packages from conanfile.txt
```sh
# in root
conan install . --build=missing
```

# See your new conan preset
```sh
cmake --list-presets
```

# Generate files with new cmake conan preset
```sh
cmake --preset conan-release
```

# Build using your preset
```sh
cmake --build --preset conan-release
```

# To clean last build
```sh
cmake --build build/Release --target clean
```

# For nvim/vim users
if you still see errors add a link for the compile_commands.json file generated in build/Release
```sh
# Execute this command in root of the project
ln -s build/Release/compile_commands.json ./
```

