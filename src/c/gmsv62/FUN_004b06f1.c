/* FUN_004b06f1 - 0x004b06f1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004b06f1(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  int unaff_EBP;
  int iVar6;
  
  FUN_00879bb8();
  FUN_00498b1f(unaff_EBP + -0x10,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004031b7(0xff,3);
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x50);
  piVar3 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar3 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar3 = *(int **)(unaff_EBP + -0x10);
  }
  iVar6 = *piVar3;
  iVar1 = *(int *)(unaff_EBP + 8);
  *(int **)(unaff_EBP + -0x18) = piVar3;
  iVar4 = (**(code **)(iVar6 + 0x80))
                    (piVar3,iVar1,*(undefined4 *)(unaff_EBP + 0xc),
                     *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x28),
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c));
  iVar6 = 0;
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  if (*(int *)(extraout_ECX + 0x38) < 2) {
    FUN_004031b7(0xff,3);
    uVar2 = *(undefined4 *)(extraout_ECX + 0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    *(undefined4 *)(unaff_EBP + 8) = uVar2;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar3 = *(int **)(unaff_EBP + -0x10);
    iVar6 = (**(code **)(*piVar3 + 0x80))
                      (piVar3,(*(int *)(extraout_ECX + 0x3c) - *(int *)(extraout_ECX + 0x40)) / 2 +
                              iVar1,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 8),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c));
    if (iVar6 < 0) {
      FUN_00878e09(iVar6,piVar3,&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    goto LAB_004b0908;
  }
  if (*(int *)(extraout_ECX + 0x4c) < 0) {
LAB_004b087c:
    *(undefined4 *)(extraout_ECX + 0x48) = 0;
  }
  else {
    iVar4 = FUN_004b0bbe(*(undefined4 *)(extraout_ECX + 0x34));
    if (*(int *)(extraout_ECX + 0x4c) < iVar4 - *(int *)(extraout_ECX + 0x40) / 2)
    goto LAB_004b087c;
    iVar4 = FUN_004b0bbe(*(undefined4 *)(extraout_ECX + 0x34));
    if (iVar4 + *(int *)(extraout_ECX + 0x40) / 2 < *(int *)(extraout_ECX + 0x4c))
    goto LAB_004b087c;
    if (*(int *)(extraout_ECX + 0x48) == 0) {
      puVar5 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x5a8);
      uVar2 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_007d3cdd(uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
    }
    *(undefined4 *)(extraout_ECX + 0x48) = 1;
    iVar6 = 3;
  }
  if (*(int *)(extraout_ECX + 0x44) != 0) {
    iVar6 = 1;
  }
  FUN_004031b7(0xff,3);
  uVar2 = *(undefined4 *)(extraout_ECX + 0x54 + iVar6 * 4);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = *(int **)(unaff_EBP + -0x10);
  uVar2 = *(undefined4 *)(extraout_ECX + 0x34);
  *(int **)(unaff_EBP + 8) = piVar3;
  iVar6 = FUN_004b0bbe(uVar2);
  iVar6 = (**(code **)(*piVar3 + 0x80))
                    (*(undefined4 *)(unaff_EBP + 8),
                     iVar6 + (iVar1 - *(int *)(extraout_ECX + 0x40) / 2),
                     *(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + -0x18),
                     *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c));
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + 8),&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_004b0908:
  iVar6 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  piVar3 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


