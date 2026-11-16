/* FUN_100085c0 - 0x100085c0 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


/* WARNING: Removing unreachable block (ram,0x100086ad) */
/* WARNING: Removing unreachable block (ram,0x100086b9) */
/* WARNING: Removing unreachable block (ram,0x100086c1) */
/* WARNING: Removing unreachable block (ram,0x100086c9) */
/* WARNING: Removing unreachable block (ram,0x100086da) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100085c0(void *param_1)

{
  uint uVar1;
  FARPROC pFVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  HMODULE local_114;
  undefined4 auStack_110 [3];
  undefined1 auStack_104 [2];
  undefined1 auStack_102 [4];
  undefined4 local_fe [63];
  
  local_114 = (HMODULE)0x0;
  puVar4 = &DAT_10016bd0;
  do {
    auStack_102._2_2_ = DAT_10017000;
    puVar5 = local_fe;
    for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0;
    uVar1 = FUN_10008720(param_1,0x10011568,(int *)&local_114,(uint *)(auStack_102 + 2));
    pFVar2 = GetProcAddress(*(HMODULE *)((int)param_1 + uVar1 * 4),auStack_102 + 2);
    *puVar4 = pFVar2;
    puVar4 = puVar4 + 1;
  } while (local_114 < (HMODULE)0xf9b);
  local_114 = (HMODULE)(*DAT_10016bd8)(0);
  *(undefined4 *)((int)param_1 + 0xa8) = 0;
  *(undefined4 *)((int)param_1 + 0xac) = 0;
  *(undefined4 *)((int)param_1 + 0xb8) = 0;
  *(undefined4 *)((int)param_1 + 0xbc) = 1;
  *(undefined4 *)((int)param_1 + 0xc0) = 1;
  puVar4 = auStack_110;
  do {
    auStack_104 = (undefined1  [2])DAT_10017000;
    puVar5 = (undefined4 *)auStack_102;
    for (iVar3 = 0x3f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0;
    FUN_10008720(param_1,0x10012504,(int *)&stack0xfffffee8,(uint *)auStack_104);
    pFVar2 = GetProcAddress(local_114,auStack_104);
    *puVar4 = pFVar2;
    puVar4 = puVar4 + 1;
  } while( true );
}


