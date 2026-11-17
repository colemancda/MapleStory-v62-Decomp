/* FUN_0067447b - 0x0067447b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __fastcall FUN_0067447b(int param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  DWORD *pDVar5;
  undefined4 *puVar6;
  char local_1a0;
  undefined4 local_19f;
  _OSVERSIONINFOA local_9c;
  HMODULE local_8;
  
  hModule = LoadLibraryA(s_DBGHELP_DLL_0096a5ec);
  if (hModule != (HMODULE)0x0) {
    local_8 = hModule;
    pFVar1 = GetProcAddress(hModule,s_SymInitialize_0096a5dc);
    *(FARPROC *)(param_1 + 300) = pFVar1;
    if (pFVar1 != (FARPROC)0x0) {
      pFVar1 = GetProcAddress(hModule,s_SymCleanup_0096a5d0);
      *(FARPROC *)(param_1 + 0x130) = pFVar1;
      if (pFVar1 != (FARPROC)0x0) {
        pFVar1 = GetProcAddress(hModule,s_StackWalk_0096a5c4);
        *(FARPROC *)(param_1 + 0x134) = pFVar1;
        if (pFVar1 != (FARPROC)0x0) {
          pFVar1 = GetProcAddress(hModule,s_SymFunctionTableAccess_0096a5ac);
          *(FARPROC *)(param_1 + 0x138) = pFVar1;
          if (pFVar1 != (FARPROC)0x0) {
            pFVar1 = GetProcAddress(hModule,s_SymGetModuleBase_0096a598);
            *(FARPROC *)(param_1 + 0x13c) = pFVar1;
            if (pFVar1 != (FARPROC)0x0) {
              pFVar1 = GetProcAddress(hModule,s_SymGetSymFromAddr_0096a584);
              *(FARPROC *)(param_1 + 0x140) = pFVar1;
              if (pFVar1 != (FARPROC)0x0) {
                pFVar1 = GetProcAddress(hModule,s_SymGetLineFromAddr_0096a570);
                *(FARPROC *)(param_1 + 0x144) = pFVar1;
                pFVar1 = GetProcAddress(hModule,s_MiniDumpWriteDump_0096a55c);
                *(FARPROC *)(param_1 + 0x148) = pFVar1;
                local_9c.dwOSVersionInfoSize = 0x94;
                pDVar5 = &local_9c.dwMajorVersion;
                for (iVar4 = 0x24; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *pDVar5 = 0;
                  pDVar5 = pDVar5 + 1;
                }
                GetVersionExA(&local_9c);
                if (local_9c.dwPlatformId == 2) {
                  uVar2 = (*DAT_0097b38c)();
                }
                else {
                  uVar2 = (*DAT_0097b390)();
                }
                *(undefined4 *)(param_1 + 0x128) = uVar2;
                local_1a0 = DAT_00978474;
                puVar6 = &local_19f;
                for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *puVar6 = 0;
                  puVar6 = puVar6 + 1;
                }
                *(undefined2 *)puVar6 = 0;
                *(undefined1 *)((int)puVar6 + 2) = 0;
                iVar4 = (*DAT_0097b384)(0,&local_1a0,0x104);
                for (pcVar3 = &stack0xfffffe5f + iVar4;
                    ((&local_1a0 <= pcVar3 && (*pcVar3 != '/')) && (*pcVar3 != '\\'));
                    pcVar3 = pcVar3 + -1) {
                }
                pcVar3[1] = '\0';
                iVar4 = (**(code **)(param_1 + 300))(*(undefined4 *)(param_1 + 0x128),&local_1a0,1);
                if (iVar4 != 0) {
                  pFVar1 = GetProcAddress(local_8,s_SymSetOptions_0096a54c);
                  if (pFVar1 != (FARPROC)0x0) {
                    (*pFVar1)(0x17);
                  }
                  return local_9c.dwPlatformId == 2;
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}


