@echo off
REM Building Script
REM You need MinGW or MinGW-w64 to build the program
:buildrun
set /p projname=">"
set "runcmd=gcc %projname%.c -o %projname%.exe"
echo %runcmd%
%runcmd%
echo Compile finished, start running:
set runcmd=%projname%.exe
%runcmd%
del %projname%.exe
goto buildrun
