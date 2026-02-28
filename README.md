# SCSC - Graphics Programming Workshop!
Graphics programming, albeit not a very common point of interest among the software development industry  (anymore), is still something worth being interested in! Companies like Microsoft still build upon the concepts in their DirectX 12 which holds their own Direct3D graphics API. So even though it's not something you might commonly find a career in, it's still something people value the knowledge of.

## Workshop Overview
This workshop will start with getting our IDE setup and progress to a follow along where we'll get you to complete the graphics programming tradition of making your first triangle!

### Setup and Prerequisites [10 - 15 minutes]
IDE Installation: [Visual Studio Code](https://code.visualstudio.com/download)
This whole workshop will be done in VSCode. Although it is technically not _necessary_, it is the editor I know best and can help / assist with best. It is also notably convenvient.
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

