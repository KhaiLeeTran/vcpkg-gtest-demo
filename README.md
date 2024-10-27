# Vcpkg and GTest Workflow

## Introduction
This document provides a detailed guide on how to use **vcpkg** to manage C++ libraries and integrate **Google Test (gtest)** into your project. This workflow simplifies the installation and management of the necessary libraries for developing C++ applications.

## Requirements
- WSL2 (Windows Subsystem for Linux 2)
- CMake (3.10 or higher)
- C++ Compiler (such as g++, clang)

## Installing Vcpkg
1. **Clone Vcpkg from GitHub:**
   ```bash
   git clone https://github.com/microsoft/vcpkg.git
2. **Run the bootstrap script to build Vcpkg:**
   cd vcpkg
   ./bootstrap-vcpkg.sh
3. **Add Vcpkg to your PATH:**
   you can use "nano ~/.bashrc"
   after add:
     export PATH=$PATH:/path/to/vcpkg
     source ~/.bashrc
   If you encounter errors related to CMake, you can use Snap to install the latest version:
     sudo snap install cmake --classic
