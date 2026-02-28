# SCSC - Graphics Programming Workshop!
Graphics programming, albeit not a very common point of interest among the software development industry  (anymore), is still something worth being interested in! Companies like Microsoft still build upon the concepts in their DirectX 12 which holds their own Direct3D graphics API. So even though it's not something you might commonly find a career in, it's still something people value the knowledge of.

## Workshop Overview
This workshop will start with getting our IDE setup and progress to a follow along where we'll get you to complete the graphics programming tradition of making your first triangle!
> WARNING: Not everything here is fully tested for MAC and Linux (MAC especially). Since I do not natively use either. You are free to search up problems I cannot answer for. Not that I would stop you from searching in the first place - just know that searching is encouraged.

If you are very technical, the setup is just:
1. Install VSCode + CMake
2. Install compiler (MSVC / GCC / Clang)
3. Clone:
`git clone --recurse-submodules [<repo>](https://github.com/TorresJamL/OpenGL_Workshop_Resources.git)`
4. Open folder in VSCode
5. Install VS code extensions: C/C++, C/C++ Extension Pack, **CMake Tools** (All by Microsoft)
6. Run **CMake: Configure**
7. Press the triangle on the bottom of vscode.

### Setup and Prerequisites [10 - 15 minutes]
IDE Installation: [Visual Studio Code](https://code.visualstudio.com/download)
CMake Installation
- For windows, go here: [CMake](https://cmake.org/download/) and get the x86 msi installer. During installation, if there is an option to add CMake to your PATH, **DO IT**.
- For Linux:
```
sudo apt update
sudo apt install cmake
cmake --version
```
- For MAC, go here: [CMake](https://cmake.org/download/) and find the .dmg for your macOS version. More up-to-date the better.

This whole workshop will be done in VSCode. Although it is technically not _necessary_, I will be using it's extensions for ease of use. I HIGHLY recommend using them as well.
| Prerequisites | What for |
| ----------- | ----------- |
| MSVC Tools[^1] (Windows) | C++ Compilation and Build Tools |
| GCC[^2] (Linux) | C++ Compilation and Build Tools |
| Clang[^3] (MAC) | C++ Compilation and Build Tools |
| C++ Knowledge | Mostly for understanding Syntax |
[^1]: To get MSVC Tools (Presuming you don't have it already) you must have Visual Studio Installer (Only on windows). Enter the app, modify your Visual Studio Community 2022, find and enable: C++ Core Features, MSVC v*** - VS2022 C++ x64/x86 build tools (Latest). 
[^2]: Some distributions of Linux come with GCC already there, huge time saver! To find out if you do, open your terminal and enter ```gcc --version```. If it doesn't output a version number, you will need to install it. To do that -> ```sudo apt install build-essential``` then do ```gcc --version``` again to make sure!
[^3]: Now, I do believe MAC is of similar situation to Linux where Clang is there by default. But it may not be entirely complete. From what I have found online (I do not use MAC) you can do ```clang++ --version``` or ```clang --version``` in the terminal to see if it's properly installed. If it's not, do: ```xcode-select --install``` and supposedly that fixes it.
Everything else will be handled locally in our editor!

Speaking of our editor 
The next thing that must be done is getting our starter code. 
1. Clone this repo: `git clone --recurse-submodules https://github.com/TorresJamL/OpenGL_Workshop_Resources.git` in your terminal. You can also use Github Desktop. As long as you can use/see the starter code. **We will only be coding in main.cpp. The other folders/files are for dependencies that allow everything to work and/or abstractions of functional OpenGL bits to be object oriented. It's okay not to understand those yet! That's why you're here.**
2. Install VS code extensions: C/C++ (by Microsoft), C/C++ Extension Pack (by Microsoft), **CMake Tools** (by Microsoft)
- If you are using linux you will also need to do the following in your terminal. Those libraries are required for GLFW, the library used to simplify creating a window since every platform does it differently.
```
sudo apt update
sudo apt install libglfw3-dev libgl1-mesa-dev xorg-dev
```
3. After doing the last two instructions, you should now be able to see and use a small triangle button and a build button with a cog on your bottom menu bar in VScode <img width="625" height="19" alt="image" src="https://github.com/user-attachments/assets/4595e96d-af01-4a55-bab5-e5bbea9d2d34" />
- Triangle builds and lauches.
- Build just builds the project.

From Here, we can start the coding part! 
