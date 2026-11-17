/* FUN_0060fd16 - 0x0060fd16 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0060fd16(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined1 **ppuStack_20;
  undefined1 *local_10;
  uint local_c;
  char local_5;
  
  iVar3 = 1;
  local_c = 0;
  if (param_2 == 1) {
    ppuStack_20 = (undefined1 **)param_1;
    if (*(int *)(*(int *)(param_1 + 0x90) + 0x48) != 0) {
      ppuStack_20 = *(undefined1 ***)(param_1 + 0x78);
      iStack_30 = param_1 + 0xa4;
      uStack_24 = 1;
      local_10 = (undefined1 *)&iStack_2c;
      iStack_2c = param_1;
      iStack_28 = param_1;
      FUN_00537987();
      iStack_30 = 0x60fd5b;
      iVar1 = FUN_00610560();
      ppuStack_20 = (undefined1 **)extraout_ECX;
      if (iVar1 == 0) {
        return;
      }
    }
    if (*(int *)(*(int *)(param_1 + 0x90) + 0x48) != 0) {
      ppuStack_20 = &local_10;
      uStack_24 = 0x60fd7d;
      piVar2 = (int *)FUN_0045b90e();
      ppuStack_20 = (undefined1 **)*piVar2;
      local_c = 1;
      uStack_24 = 0x60fd87;
      iVar3 = FUN_0087b6ab();
    }
    if ((local_c & 1) != 0) {
      ppuStack_20 = (undefined1 **)0x60fd9b;
      FUN_00414ebb();
      ppuStack_20 = (undefined1 **)extraout_ECX_00;
    }
    iStack_30 = param_1 + 0x94;
    uStack_24 = 1;
    local_10 = (undefined1 *)&iStack_2c;
    iStack_2c = (int)ppuStack_20;
    iStack_28 = (int)ppuStack_20;
    ppuStack_20 = (undefined1 **)*(undefined4 *)(param_1 + 0x78);
    FUN_00537987();
    iStack_30 = 0x60fdb9;
    iVar1 = FUN_00610560();
    if (iVar1 == 0) {
      return;
    }
    ppuStack_20 = &local_10;
    uStack_24 = 0x60fdd0;
    puVar4 = (undefined4 *)FUN_0045b90e();
    ppuStack_20 = (undefined1 **)*puVar4;
    uStack_24 = 0x60fdd7;
    iVar1 = FUN_0087b6ab();
    local_5 = iVar1 % iVar3 != 0;
    ppuStack_20 = (undefined1 **)0x60fde9;
    FUN_00414ebb();
    if (local_5 != '\0') {
      ppuStack_20 = (undefined1 **)0x0;
      uStack_24 = 0;
      iStack_28 = param_1 + 0x6c;
      iStack_2c = 0;
      FUN_00679d22(&iStack_30,0x1b1);
      FUN_007db3ad();
      return;
    }
    ppuStack_20 = (undefined1 **)0x7fffffff;
    uStack_24 = 1;
    local_10 = (undefined1 *)&iStack_2c;
    iStack_30 = param_1 + 0x9c;
    FUN_00537987();
    iStack_30 = 0x60fe38;
    iVar3 = FUN_00610560();
    if (iVar3 == 0) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    *(int *)(param_1 + 100) = param_2;
    *(undefined4 *)(param_1 + 0x68) = 1;
    if (*(int *)(param_1 + 0x14) != 0) {
      ppuStack_20 = (undefined1 **)0x60fe58;
      FUN_00815de9();
    }
  }
  return;
}


