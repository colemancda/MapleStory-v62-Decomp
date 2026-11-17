/* FUN_007f15a4 - 0x007f15a4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __fastcall FUN_007f15a4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  double local_2c;
  double local_24;
  double local_1c;
  double local_14;
  uint local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  puVar4 = (undefined4 *)(param_1 + 0x20);
  fVar6 = (float10)FUN_004f1993();
  local_14 = (double)fVar6;
  fVar6 = (float10)FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48),puVar4,uVar2);
  local_1c = (double)fVar6;
  fVar6 = (float10)FUN_004f1993(param_1 + 0x50,*(undefined4 *)(param_1 + 0x60));
  local_24 = (double)fVar6;
  fVar6 = (float10)FUN_004f1993(param_1 + 0x68,*(undefined4 *)(param_1 + 0x78));
  local_2c = (double)fVar6;
  iVar1 = FUN_005e49a2(&local_14,&local_1c,&local_24,&local_2c,&local_8,param_1 + 0x140,&local_c);
  if (iVar1 == 0) {
    local_c = 0xffffffff;
  }
  else {
    uVar2 = FUN_004f1a11(local_14);
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    uVar2 = FUN_004f1a11(local_1c);
    *(undefined4 *)(param_1 + 0x48) = uVar2;
    uVar2 = FUN_004f1a11(local_24);
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    uVar2 = FUN_004f1a11(local_2c);
    *(undefined4 *)(param_1 + 0x78) = uVar2;
    if ((local_c & 8) != 0) {
      puVar4 = (undefined4 *)(param_1 + 0x20);
      puVar5 = (undefined4 *)(param_1 + 0x80);
      for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    iVar1 = 0;
    *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x16c);
    *(uint *)(param_1 + 0x16c) = local_c >> 0x11 & 1;
    if ((short)local_8 < 1) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004d19c1();
    }
    if ((short)local_8 < 0) {
      iVar1 = FUN_007f1789();
    }
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    else if (iVar3 != *(int *)(param_1 + 0x110)) {
      *(undefined4 *)(param_1 + 0x118) = 0;
      *(int *)(param_1 + 0x114) = iVar3;
      *(int *)(param_1 + 0x110) = iVar3;
      *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(iVar3 + 0x1c);
      *(undefined4 *)(param_1 + 300) = *(undefined4 *)(iVar3 + 0x20);
      (**(code **)(**(int **)(param_1 + 0x14) + 8))();
    }
    if (iVar1 == 0) {
      uVar2 = FUN_007f457a();
      *(undefined4 *)(param_1 + 0x124) = uVar2;
    }
    else {
      iVar3 = FUN_0048bb31(param_1 + 0x11c,*(undefined4 *)(param_1 + 0x124));
      if (iVar1 != iVar3) {
        *(undefined4 *)(param_1 + 0x118) = 0;
        uVar2 = FUN_007f457a();
        *(undefined4 *)(param_1 + 0x124) = uVar2;
        uVar2 = *(undefined4 *)(iVar1 + 0x18);
        *(undefined4 *)(param_1 + 300) = 0;
        *(undefined4 *)(param_1 + 0x128) = uVar2;
        (**(code **)(**(int **)(param_1 + 0x14) + 8))();
      }
    }
  }
  return local_c;
}


