@echo off
pushd %~dp0
call npm run dev -- -w
popd
pause
