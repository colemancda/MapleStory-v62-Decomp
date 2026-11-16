/* FUN_1000b870 - 0x1000b870 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


undefined4 * __fastcall FUN_1000b870(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = DAT_10017010;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000c728;
  local_c = ExceptionList;
  puVar4 = (undefined4 *)*param_1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(DAT_10017010 + 0xc);
    ExceptionList = &local_c;
    FUN_100040e0();
    local_4 = 0;
    if (*(int *)(iVar2 + 0x14) == 0) {
      piVar3 = FUN_1000be90(0x1000c);
      *piVar3 = 0;
      piVar3[1] = 0x10004;
      piVar3[2] = 0;
      *(int **)(iVar2 + 0x14) = piVar3 + 2;
    }
    puVar4 = *(undefined4 **)(iVar2 + 0x14);
    *(undefined4 *)(iVar2 + 0x14) = *puVar4;
    piVar3 = (int *)(iVar2 + 0x10);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      *puVar1 = 0;
    }
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = &PTR_FUN_1000ee60;
    }
    *param_1 = (int)puVar4;
  }
  ExceptionList = local_c;
  return puVar4 + 1;
}


