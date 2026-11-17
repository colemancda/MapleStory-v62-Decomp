/* FUN_005e4d3f - 0x005e4d3f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005e4d3f(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_68 [4];
  undefined4 local_58;
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined1 local_20 [16];
  undefined4 local_10;
  undefined4 *local_8;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    if (((param_2 == 2) && (puVar7 = *(undefined4 **)(param_1 + 0x1c), *(short *)(puVar7 + 3) < 1))
       && (puVar7 != (undefined4 *)0x0)) {
LAB_005e4d68:
      local_8 = puVar7;
      if (*(short *)(puVar7 + 3) < 1) goto code_r0x005e4d75;
      iVar5 = *(int *)((-(uint)(puVar7 != (undefined4 *)0x0) & (uint)(puVar7 + -4)) + 8);
      uVar3 = -(uint)(iVar5 != 0) & iVar5 + 0x10U;
      puVar4 = (undefined4 *)FUN_005e5167(uVar3);
      puVar8 = puVar4;
      for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      *(undefined1 *)puVar4 = 0;
      *(undefined2 *)(puVar4 + 4) = 0;
      *(undefined2 *)(puVar4 + 3) = *(undefined2 *)(local_8 + 3);
      if (uVar3 != 0) {
        do {
          iVar5 = *(int *)((-(uint)(uVar3 != 0) & uVar3 - 0x10) + 4);
          uVar6 = -(uint)(iVar5 != 0) & iVar5 + 0x10U;
          FUN_00413367(param_1 + 0x8c,*(undefined4 *)(param_1 + 0x94));
          uVar2 = FUN_004133b5();
          *(undefined4 *)(param_1 + 0x94) = uVar2;
          FUN_005e521b(uVar3);
          uVar3 = uVar6;
        } while (uVar6 != 0);
        puVar7 = *(undefined4 **)(param_1 + 0x20);
        puVar8 = (undefined4 *)(param_1 + 0x44);
        for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        return;
      }
    }
LAB_005e4d92:
    puVar7 = (undefined4 *)(param_3 + 0x20);
    puVar8 = local_68;
    for (iVar5 = 0x18; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    iVar5 = *(int *)(param_3 + 0x110);
    _memset((void *)(param_1 + 0x44),0,0x14);
    FUN_004f1993(local_68,local_58);
    uVar1 = __ftol();
    *(undefined2 *)(param_1 + 0x46) = uVar1;
    FUN_004f1993(local_50,local_40);
    uVar1 = __ftol();
    *(undefined2 *)(param_1 + 0x48) = uVar1;
    FUN_004f1993(local_38,local_28);
    uVar1 = __ftol();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 100) = uVar2;
    *(undefined2 *)(param_1 + 0x4a) = uVar1;
    FUN_004f1993(local_20,local_10);
    uVar1 = __ftol();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    *(undefined2 *)(param_1 + 0x4c) = uVar1;
    *(char *)(param_1 + 0x4e) = (char)*(undefined4 *)(param_3 + 0x140);
    if (iVar5 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (undefined2)*(undefined4 *)(iVar5 + 0x48);
    }
    *(undefined2 *)(param_1 + 0x50) = uVar1;
    FUN_005e532d();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x94) = uVar2;
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x88) = uVar2;
  }
  return;
code_r0x005e4d75:
  iVar5 = *(int *)((-(uint)(puVar7 != (undefined4 *)0x0) & (uint)(puVar7 + -4)) + 4);
  puVar7 = (undefined4 *)(-(uint)(iVar5 != 0) & iVar5 + 0x10U);
  if (puVar7 == (undefined4 *)0x0) goto LAB_005e4d92;
  goto LAB_005e4d68;
}


