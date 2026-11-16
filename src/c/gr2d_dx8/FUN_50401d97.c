/* FUN_50401d97 - 0x50401d97 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_50401d97(void *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  undefined3 extraout_var;
  FARPROC pFVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined1 local_11c [2];
  undefined4 local_11a [63];
  int local_1c;
  int local_18;
  int local_14;
  HMODULE local_10;
  uint local_c;
  int *local_8;
  
  local_c = 0;
  local_8 = &DAT_50438a80;
  do {
    local_11c = (undefined1  [2])DAT_50438fb0;
    puVar5 = local_11a;
    for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0;
    uVar2 = FUN_50402102(param_1,0x50434154,(int *)&local_c,(uint *)local_11c);
    pFVar3 = GetProcAddress(*(HMODULE *)((int)param_1 + CONCAT31(extraout_var,uVar2) * 4),local_11c)
    ;
    puVar5 = local_8 + 1;
    *local_8 = (int)pFVar3;
    local_8 = puVar5;
  } while (local_c < 0xf9b);
  local_10 = (HMODULE)(*DAT_50438a88)(0);
  *(undefined4 *)((int)param_1 + 0xbc) = 1;
  *(undefined4 *)((int)param_1 + 0xc0) = 1;
  local_8 = &local_1c;
  *(undefined4 *)((int)param_1 + 0xa8) = 0;
  *(undefined4 *)((int)param_1 + 0xac) = 0;
  *(undefined4 *)((int)param_1 + 0xb8) = 0;
  local_c = 0;
  do {
    local_11c = (undefined1  [2])DAT_50438fb0;
    puVar5 = local_11a;
    for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0;
    FUN_50402102(param_1,0x504350f0,(int *)&local_c,(uint *)local_11c);
    pFVar3 = GetProcAddress(local_10,local_11c);
    bVar6 = local_c < 0x3d;
    piVar1 = local_8 + 1;
    *local_8 = (int)pFVar3;
    local_8 = piVar1;
  } while (bVar6);
  if (((local_1c != 0) && (local_18 != 0)) && (local_14 != 0)) {
    DAT_50438d50 = local_1c;
    _DAT_50438d54 = local_18;
    DAT_50438d58 = local_14;
  }
  return;
}


