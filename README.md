# CiTe
Cool Internal Text Editor
## Features
- wfWorkers intergration
- save to any file type
- fully configurable with .json
- easy to build from source
## Upcoming

- [ ] Syntax highlighting
- [x] wfWorkers Intergration
- [ ] uefi embedding
- [ ] Hex Editor with hCite

## Installation
Can be installed on arch, ubuntu, and windows 
Requires g++
### Arch
```bash
git clone github.com/theognoodle/cite
ls internal
sudo bash build.sh
```
OR
```bash
git clone https://theognoodle/cite
ls internal
g++ main.cpp Tutorial.h Tutorial.cpp KiSHLib.h worker.cpp worker.h -o [INSERT APPLICATION NAME] 
```
### Ubuntu
```bash
git clone github.com/theognoodle/cite
ls internal
sudo bash build.sh
```
### All Debian Based OS's
```bash
git clone https://github.com/theognoodle/cite
ls internal
sudo bash build.sh
```
### Windows
Command line installation is not currently supported on windows
mingw can be used to compile source

## Dependencies
- g++
- curl
- sudo
- bash
- git
## Tech Stack
- c++
- debian
- g++
- mingw
- WSL
