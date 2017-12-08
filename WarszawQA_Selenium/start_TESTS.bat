echo ### PREPARE ENVIRONMENT ###
echo on
set curr_dir=%cd%
set ENV_NAME="VIRTUAL_ENV"
python get-pip.py
pip install virtualenv
virtualenv %ENV_NAME%
call %ENV_NAME%\Scripts\activate.bat
echo ### INSTALL PYTHON MODULES ###
pip install -r required_python_modules.txt
echo ### CREATE LOG FILE ###
set mypath=%cd%
@echo off
For /f "tokens=1,2,3,4,5 delims=/. " %%i in ('date /t') do set CDate=%%k%%j%%i
For /f "tokens=1,2 delims=:" %%f in ('time /t') do set CTime=%%f%%g
set localfile=%mypath%\reporting\logs\log_EXAMPLE_%CDate%_%CTime%.txt
echo %date% %time% >> %localfile% 2>>&1
echo ### START TESTS ###
cd tests
dir



py.test -v --reruns=1 --props=csv test_google_search.py >> %localfile% 2>>&1