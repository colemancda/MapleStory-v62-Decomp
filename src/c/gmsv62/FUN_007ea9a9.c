/* FUN_007ea9a9 - 0x007ea9a9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007ea9a9(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x44) = 0xff000000;
  iVar2 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045e196(uVar3);
  FUN_00414f8b(extraout_ECX + 0xac);
  piVar1 = *(int **)(extraout_ECX + 0x624);
  iVar2 = *(int *)(extraout_ECX + 0x1c);
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(extraout_ECX + 0xb0);
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(extraout_ECX + 0xd0);
  (**(code **)(*piVar1 + 8))
            (extraout_ECX,1000,*(int *)(extraout_ECX + 0x78) + 2,
             *(int *)(extraout_ECX + 0x7c) + 5 + *(int *)(extraout_ECX + 0x80),
             iVar2 - (*(int *)(extraout_ECX + 0x78) * 2 + 2),0xe,unaff_EBP + -0x60);
  FUN_008164fd(*(undefined4 *)(extraout_ECX + 0x624));
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18,0x8bb);
  *(undefined4 *)(unaff_EBP + -0x10) = *puVar4;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x8b0);
  uVar3 = *puVar4;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_007e6c97(unaff_EBP + -0x1c,uVar3,*(undefined4 *)(unaff_EBP + -0x10));
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382(uVar3);
  (**(code **)(**(int **)(extraout_ECX + 0x644) + 0x20))
            (extraout_ECX,1,*(int *)(extraout_ECX + 0x1c) + -0x36,
             *(int *)(extraout_ECX + 0x20) + -0x1a,0,unaff_EBP + -0x28);
  puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x8bd);
  *(undefined4 *)(unaff_EBP + -0x18) = *puVar4;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x8b0);
  uVar3 = *puVar4;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_007e6c97(unaff_EBP + -0x1c,uVar3,*(undefined4 *)(unaff_EBP + -0x18));
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x18) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382(uVar3);
  (**(code **)(**(int **)(extraout_ECX + 0x64c) + 0x20))
            (extraout_ECX,2,9,*(int *)(extraout_ECX + 0x20) + -0x1a,0,unaff_EBP + -0x28);
  if (*(int *)(extraout_ECX + 0x60) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(extraout_ECX + 0x60);
  iVar2 = (**(code **)(*piVar1 + 0x8c))
                    (piVar1,*(int *)(extraout_ECX + 0x78) + -1,
                     *(int *)(extraout_ECX + 0x7c) + 2 + *(int *)(extraout_ECX + 0x80),
                     *(int *)(extraout_ECX + 0x1c) + *(int *)(extraout_ECX + 0x78) * -2 + 3,0x12,
                     0xff000000);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
  }
  if (*(int *)(extraout_ECX + 0x60) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(extraout_ECX + 0x60);
  iVar2 = (**(code **)(*piVar1 + 0x8c))
                    (piVar1,*(int *)(extraout_ECX + 0x78),
                     *(int *)(extraout_ECX + 0x7c) + 3 + *(int *)(extraout_ECX + 0x80),
                     *(int *)(extraout_ECX + 0x1c) + *(int *)(extraout_ECX + 0x78) * -2 + 1,0x10,
                     0xffffffff);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045c14e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


