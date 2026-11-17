/* FUN_00673112 - 0x00673112 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00673112(int param_1)

{
  int *piVar1;
  FARPROC pFVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined2 local_11c;
  undefined4 local_11a [63];
  int local_1c;
  int local_18;
  int local_14;
  HMODULE local_10;
  uint local_c;
  int *local_8;
  
  local_c = 0;
  local_8 = &DAT_0097b378;
  do {
    local_11c = DAT_0097bc5c;
    puVar4 = local_11a;
    for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    iVar3 = FUN_0067347d(&DAT_00968eb8,&local_c,&local_11c);
    pFVar2 = GetProcAddress(*(HMODULE *)(param_1 + iVar3 * 4),(LPCSTR)&local_11c);
    puVar4 = local_8 + 1;
    *local_8 = (int)pFVar2;
    local_8 = puVar4;
  } while (local_c < 0xf9b);
  local_10 = (HMODULE)(*DAT_0097b380)(0);
  *(undefined4 *)(param_1 + 0xbc) = 1;
  *(undefined4 *)(param_1 + 0xc0) = 1;
  local_8 = &local_1c;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  local_c = 0;
  do {
    local_11c = DAT_0097bc5c;
    puVar4 = local_11a;
    for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    FUN_0067347d(&DAT_00969e54,&local_c,&local_11c);
    pFVar2 = GetProcAddress(local_10,(LPCSTR)&local_11c);
    bVar5 = local_c < 0x3d;
    piVar1 = local_8 + 1;
    *local_8 = (int)pFVar2;
    local_8 = piVar1;
  } while (bVar5);
  if (((local_1c != 0) && (local_18 != 0)) && (local_14 != 0)) {
    DAT_0097b648 = local_1c;
    DAT_0097b64c = local_18;
    DAT_0097b650 = local_14;
  }
  return;
}


