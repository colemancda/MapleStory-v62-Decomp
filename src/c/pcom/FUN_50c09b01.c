/* FUN_50c09b01 - 0x50c09b01 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __fastcall FUN_50c09b01(void *param_1)

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
  local_8 = &DAT_50c20f10;
  do {
    local_11c = (undefined1  [2])DAT_50c21420;
    puVar5 = local_11a;
    for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0;
    uVar2 = FUN_50c09e6c(param_1,0x50c17530,(int *)&local_c,(uint *)local_11c);
    pFVar3 = GetProcAddress(*(HMODULE *)((int)param_1 + CONCAT31(extraout_var,uVar2) * 4),local_11c)
    ;
    puVar5 = local_8 + 1;
    *local_8 = (int)pFVar3;
    local_8 = puVar5;
  } while (local_c < 0xf9b);
  local_10 = (HMODULE)(*DAT_50c20f18)(0);
  *(undefined4 *)((int)param_1 + 0xbc) = 1;
  *(undefined4 *)((int)param_1 + 0xc0) = 1;
  local_8 = &local_1c;
  *(undefined4 *)((int)param_1 + 0xa8) = 0;
  *(undefined4 *)((int)param_1 + 0xac) = 0;
  *(undefined4 *)((int)param_1 + 0xb8) = 0;
  local_c = 0;
  do {
    local_11c = (undefined1  [2])DAT_50c21420;
    puVar5 = local_11a;
    for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0;
    FUN_50c09e6c(param_1,0x50c184cc,(int *)&local_c,(uint *)local_11c);
    pFVar3 = GetProcAddress(local_10,local_11c);
    bVar6 = local_c < 0x3d;
    piVar1 = local_8 + 1;
    *local_8 = (int)pFVar3;
    local_8 = piVar1;
  } while (bVar6);
  if (((local_1c != 0) && (local_18 != 0)) && (local_14 != 0)) {
    DAT_50c211e0 = local_1c;
    DAT_50c211e4 = local_18;
    DAT_50c211e8 = local_14;
  }
  return;
}


