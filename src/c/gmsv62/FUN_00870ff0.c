/* FUN_00870ff0 - 0x00870ff0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00870ff0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  BOOL BVar4;
  DWORD DVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *puVar11;
  _STARTUPINFOA *p_Var12;
  undefined1 local_26c;
  undefined4 local_26b;
  undefined4 local_267;
  undefined4 local_263;
  undefined2 local_25f;
  undefined1 local_25d;
  _PROCESS_INFORMATION local_25c;
  _STARTUPINFOA local_24c;
  CHAR local_208;
  undefined4 local_207;
  CHAR local_104;
  undefined4 local_103;
  
  if (DAT_0097fb38 == 0) {
    local_26b = 0;
    local_267 = 0;
    local_263 = 0;
    local_25f = 0;
    local_26c = 0;
    local_25d = 0;
    local_208 = '\0';
    puVar11 = &local_207;
    for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    *(undefined2 *)puVar11 = 0;
    *(undefined1 *)((int)puVar11 + 2) = 0;
    GetCurrentDirectoryA(0x104,&local_208);
    pcVar2 = (char *)FUN_00875080(&DAT_0096eedc);
    uVar7 = 0xffffffff;
    do {
      pcVar10 = pcVar2;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    iVar6 = -1;
    pcVar2 = &local_208;
    do {
      pcVar9 = pcVar2;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar9 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar9;
    } while (cVar1 != '\0');
    pcVar2 = pcVar10 + -uVar7;
    pcVar10 = pcVar9 + -1;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar10 = pcVar10 + 1;
    }
    iVar6 = FUN_0087cfc3(&local_208,0);
    if (iVar6 != -1) {
      FUN_00879f55(&local_26c,&DAT_0096eed8,param_1);
      local_104 = '\0';
      puVar11 = &local_103;
      for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      *(undefined2 *)puVar11 = 0;
      *(undefined1 *)((int)puVar11 + 2) = 0;
      uVar3 = FUN_00875080(&DAT_0096eec8,&local_208,&local_26c,param_2,DAT_0097fc60 & 1);
      FUN_00879f55(&local_104,uVar3);
      local_25c.hProcess = (HANDLE)0x0;
      p_Var12 = &local_24c;
      for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
        p_Var12->cb = 0;
        p_Var12 = (_STARTUPINFOA *)&p_Var12->lpReserved;
      }
      local_25c.hThread = (HANDLE)0x0;
      local_25c.dwProcessId = 0;
      local_25c.dwThreadId = 0;
      local_24c.cb = 0x44;
      BVar4 = CreateProcessA((LPCSTR)0x0,&local_104,(LPSECURITY_ATTRIBUTES)0x0,
                             (LPSECURITY_ATTRIBUTES)0x0,0,0,(LPVOID)0x0,(LPCSTR)0x0,&local_24c,
                             &local_25c);
      if (BVar4 == 0) {
        if (DAT_0097fc64 != 0) {
          DVar5 = GetLastError();
          uVar3 = FUN_00875080(&DAT_0096eea8,DVar5);
          FUN_0086cff0(DAT_0097fc64 + 0x24,uVar3);
          return;
        }
      }
      else {
        if (DAT_0097fc64 != 0) {
          uVar3 = FUN_00875080(&DAT_0096ee94,&local_104);
          FUN_0086cff0(DAT_0097fc64 + 0x24,uVar3);
        }
        WaitForSingleObject(local_25c.hProcess,0xffffffff);
      }
    }
  }
  return;
}


