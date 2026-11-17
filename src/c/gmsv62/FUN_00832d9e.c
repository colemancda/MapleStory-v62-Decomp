/* FUN_00832d9e - 0x00832d9e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00832d9e(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int unaff_EBP;
  undefined4 uVar6;
  
  FUN_00879bb8();
  uVar2 = *(uint *)(unaff_EBP + 8);
  if (uVar2 == 0) {
LAB_00833099:
    uVar5 = 0;
    goto LAB_0083309b;
  }
  piVar1 = (int *)(uVar2 + 4);
  iVar3 = (**(code **)(*(int *)(uVar2 + 4) + 0x48))(&DAT_0097bd2c);
  if ((-(uint)(iVar3 != 0) & uVar2) != 0) {
    puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x8e3);
    uVar5 = *puVar4;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_007d3cdd(uVar5);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    uVar6 = 0;
    goto LAB_0083308d;
  }
  iVar3 = (**(code **)(*piVar1 + 0x48))(&DAT_0097bd14);
  if ((-(uint)(iVar3 != 0) & uVar2) != 0) {
    puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x8e3);
    uVar5 = 1;
    uVar6 = *puVar4;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_007d3cdd(uVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    FUN_008324e4(1);
    goto LAB_0083309b;
  }
  iVar3 = (**(code **)(*piVar1 + 0x48))(&DAT_0097be10);
  if ((-(uint)(iVar3 != 0) & uVar2) == 0) {
    iVar3 = (**(code **)(*piVar1 + 0x48))(&DAT_0097be04);
    if ((-(uint)(iVar3 != 0) & uVar2) != 0) {
      puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x8e3);
      uVar6 = 3;
      uVar5 = *puVar4;
      *(undefined4 *)(unaff_EBP + -4) = 3;
      FUN_007d3cdd(uVar5);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      goto LAB_00833087;
    }
    iVar3 = (**(code **)(*piVar1 + 0x48))(&DAT_0097bd4c);
    if ((-(uint)(iVar3 != 0) & uVar2) == 0) {
      iVar3 = (**(code **)(*piVar1 + 0x48))(&DAT_0097bee8);
      if ((-(uint)(iVar3 != 0) & uVar2) == 0) {
        iVar3 = (**(code **)(*piVar1 + 0x48))(&DAT_0097bda0);
        if ((-(uint)(iVar3 != 0) & uVar2) != 0) {
          puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x8e3);
          uVar6 = 6;
          uVar5 = *puVar4;
          *(undefined4 *)(unaff_EBP + -4) = 6;
          FUN_007d3cdd(uVar5);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          goto LAB_00833087;
        }
        iVar3 = (**(code **)(*piVar1 + 0x48))(&DAT_0097be98);
        if ((-(uint)(iVar3 != 0) & uVar2) == 0) {
          iVar3 = (**(code **)(*piVar1 + 0x48))(&DAT_0097bd78);
          if ((-(uint)(iVar3 != 0) & uVar2) == 0) {
            iVar3 = (**(code **)(*piVar1 + 0x48))(&DAT_0097bd6c);
            if ((-(uint)(iVar3 != 0) & uVar2) == 0) goto LAB_00833099;
            puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x8e3);
            uVar6 = 9;
            uVar5 = *puVar4;
            *(undefined4 *)(unaff_EBP + -4) = 9;
            FUN_007d3cdd(uVar5);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            goto LAB_00833087;
          }
          puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x8e3);
          uVar5 = *puVar4;
          *(undefined4 *)(unaff_EBP + -4) = 8;
          FUN_007d3cdd(uVar5);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00402676();
          uVar6 = 0x16;
        }
        else {
          puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x8e3);
          uVar5 = *puVar4;
          *(undefined4 *)(unaff_EBP + -4) = 7;
          FUN_007d3cdd(uVar5);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00402676();
          uVar6 = 10;
        }
      }
      else {
        puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x8e3);
        uVar5 = *puVar4;
        *(undefined4 *)(unaff_EBP + -4) = 5;
        FUN_007d3cdd(uVar5);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00402676();
        uVar6 = 7;
      }
    }
    else {
      puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x8e3);
      uVar5 = *puVar4;
      *(undefined4 *)(unaff_EBP + -4) = 4;
      FUN_007d3cdd(uVar5);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      uVar6 = 5;
    }
  }
  else {
    puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x8e3);
    uVar6 = 2;
    uVar5 = *puVar4;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_007d3cdd(uVar5);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_00833087:
    FUN_00402676();
  }
LAB_0083308d:
  FUN_008324e4(uVar6);
  uVar5 = 1;
LAB_0083309b:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


