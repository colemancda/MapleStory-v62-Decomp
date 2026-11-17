/* FUN_006fc80c - 0x006fc80c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006fc80c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  uint uVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_00455c59(unaff_EBP + -0x28);
  FUN_0045e4a2();
  *(uint *)(unaff_EBP + -0x10) =
       CONCAT22((short)((uint)*(undefined2 **)(extraout_ECX + 0x70) >> 0x10),
                **(undefined2 **)(extraout_ECX + 0x70));
  iVar1 = FUN_005ee726(unaff_EBP + -0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_005ee6cd(*(undefined4 *)(extraout_ECX + 0x70),0);
    if (iVar1 == 0) {
      if (*(int *)(*(int *)(extraout_ECX + 0x70) + 4) == 1) {
        *(undefined4 *)(unaff_EBP + -0x3c) = 0;
        *(undefined4 *)(unaff_EBP + -0x48) = 1;
        *(undefined4 *)(unaff_EBP + -0x44) = 0;
        *(undefined4 *)(unaff_EBP + -0x40) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        uVar2 = FUN_00679d86(unaff_EBP + -0x20,0xc53);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00419192(uVar2);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00402676();
        iVar1 = FUN_004029b9(0x578);
        *(int *)(unaff_EBP + -0x24) = iVar1;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_0044f3fa();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00450382(uVar2);
        (**(code **)(**(int **)(extraout_ECX + 0x88) + 0x20))
                  (extraout_ECX,0x7d3,0xf2,0x10a,1,unaff_EBP + -0x48);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x3c) != 0) {
          FUN_00403384(*(int *)(unaff_EBP + -0x3c) + -0xc);
        }
      }
      goto LAB_006fcb22;
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 1;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  uVar2 = FUN_00679d86(unaff_EBP + -0x14,0xc54);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00402676();
  iVar1 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x24) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450382(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x80) + 0x20))
            (extraout_ECX,0x7d2,0xf2,0x10a,1,unaff_EBP + -0x38);
  if (*(int *)(unaff_EBP + -0x10) == 2) {
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x80) + 4) + 0x1c))(0);
  }
  uVar2 = FUN_00679d86(unaff_EBP + -0x18,0xdd3);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00402676();
  iVar1 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x24) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450382(uVar2);
  (**(code **)(**(int **)(extraout_ECX + 0x90) + 0x20))
            (extraout_ECX,0x7d4,0x96,0x10a,1,unaff_EBP + -0x38);
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x1c,0x7bd);
  uVar2 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00499493(uVar2,1,0);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00402676();
  if (*(int *)(unaff_EBP + -0x10) == 2) {
LAB_006fca4d:
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x90) + 4) + 0x1c))(0);
  }
  else {
    iVar1 = FUN_006fcb31(CONCAT22((short)((uint)*(undefined2 **)(extraout_ECX + 0x70) >> 0x10),
                                  **(undefined2 **)(extraout_ECX + 0x70)));
    if ((((*(int *)(iVar1 + 0x50) == 0) || (*(int *)(*(int *)(iVar1 + 0x50) + -4) == 0)) &&
        ((*(int *)(iVar1 + 0x54) == 0 || (*(int *)(*(int *)(iVar1 + 0x54) + -4) == 0)))) &&
       (*(int *)(iVar1 + 0x2c) == 0)) goto LAB_006fca4d;
    if (DAT_0097bdc4 != 0) {
      if ((*(int *)(DAT_0097bdc4 + 0x578) != 0) &&
         (4 < *(int *)(*(int *)(DAT_0097bdc4 + 0x578) + -4))) goto LAB_006fca4d;
      for (uVar4 = 0;
          (iVar1 = *(int *)(DAT_0097bdc4 + 0x578), iVar1 != 0 && (uVar4 < *(uint *)(iVar1 + -4)));
          uVar4 = uVar4 + 1) {
        if (*(uint *)(iVar1 + uVar4 * 4) == (uint)**(ushort **)(extraout_ECX + 0x70))
        goto LAB_006fca4d;
      }
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
LAB_006fcb22:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


