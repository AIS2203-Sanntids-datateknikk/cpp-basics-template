#!/usr/bin/env bash

if [ -d "build" ]; then
  rm -r build # clean
fi

unameOut="$(uname -s)"

case "${unameOut}" in
  MINGW*) cmake . -A x64 -B build;;
  Linux*) cmake . -B build;;
esac

case "${unameOut}" in
  MINGW*) cmake --build build --target test_exercise$1 -config Debug
          ./build/tests/Debug/test_exercise$1.exe;;
  Linux*) cmake --build build --target test_exercise$1
          ./build/tests/test_exercise$1;;
esac
