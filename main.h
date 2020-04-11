#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <tchar.h>
#include <psapi.h>
#include <string.h>
#include <time.h>

#define KEY "ReddyyZ"
#define AUTHOR "ReddyyZ"
#define GITHUB_LINK "https://github.com/ReddyyZ/MyMalware"

#define PROCESS_BLACKLIST_MAX 22
#define PROCESS_NAME_MAX 24

#define MACS_MAX 8
#define MACS_LENGTH_MAX 12

#define FIRST_BYTE 1
#define CHARACTER_SET_SIZE 255