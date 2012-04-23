@echo off
call "%VS100COMNTOOLS%vsvars32.bat"
devenv peg.sln /Build Release

xcopy /Y /D Release\*.exe .\
