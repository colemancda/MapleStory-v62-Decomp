/* FUN_00727c20 - 0x00727c20 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00727c20(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = FUN_00455c59(local_14);
  iVar2 = *(int *)(iVar2 + 4);
  if (local_10 != 0) {
    FUN_0045e7c2(0);
    local_10 = 0;
  }
  piVar4 = *(int **)(iVar2 + 0x3ff);
  if (piVar4 != (int *)0x0) {
    piVar1 = piVar4 + *(int *)(iVar2 + 0x403);
    for (; piVar4 < piVar1; piVar4 = piVar4 + 1) {
      if (*piVar4 != 0) {
        local_c = *piVar4;
        goto joined_r0x00727c7c;
      }
    }
  }
  local_c = 0;
joined_r0x00727c7c:
  while( true ) {
    do {
      if (local_c == 0) {
        return 0;
      }
      puVar3 = (undefined4 *)FUN_004b9043(&local_c,&local_10);
    } while (local_10 == 0);
    iVar2 = FUN_0064d61f(*puVar3);
    if (iVar2 == 0) break;
    piVar4 = *(int **)(iVar2 + 0x40);
    while (piVar1 = piVar4, piVar1 != (int *)0x0) {
      iVar2 = *(int *)((-(uint)(piVar1 != (int *)0x0) & (uint)(piVar1 + -4)) + 4);
      piVar4 = (int *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
      if (*piVar1 == param_1) {
        local_8 = 0;
        FUN_004b8f25(&param_1,&local_8);
        if (local_8 <= piVar1[1]) {
          return 1;
        }
      }
    }
  }
  return 1;
}


