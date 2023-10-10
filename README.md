# Test Driven Software Development For PID Controller Implementation
![CICD Workflow status](https://github.com/Sameer-Arjun-S/Test-Driven-Development-For-Robotics/actions/workflows/run-unit-test-and-upload-codecov.yml/badge.svg)
[![codecov](https://codecov.io/gh/Sameer-Arjun-S/Test-Driven-Development-For-Robotics/branch/main/graph/badge.svg)](https://codecov.io/gh/gh/Sameer-Arjun-S/Test-Driven-Development-For-Robotics)  

#Overview 
### Authors:
#### Part 1 -
 #### Driver: Sameer Arjun S (ssarjun@umd.edu) https://github.com/Sameer-Arjun-S
 #### Navigator: Darshit-Desai (darshit@umd.edu) https://github.com/darshit-desai

#### Part 2 - 
 #### Driver: Aaqib Barodawala (abarodaw@umd.edu) https://github.com/aaqibsb
 #### Navigator: Sai Teja Gilukara (saitejag@umd.edu) https://github.com/saiteja12-g

#UML Diagram for the development
![image](https://github.com/Sameer-Arjun-S/Test-Driven-Development-For-Robotics/assets/112655999/9fd655af-85f9-4e2c-9aaa-f5c271f9bfa8)

## Standard install via command-line
```
git clone --recursive https://github.com/Sameer-Arjun-S/Test-Driven-Development-For-Robotics.git
cd <path to repository>
cmake -S ./ -B build/
cmake --build build/
./build/app/shell-app
```
## Instruction to run the tests
```
ctest --test-dir build/
```
## Instruction to generate Deoxygen documentation
```
cmake --build build/ --target docs
```
