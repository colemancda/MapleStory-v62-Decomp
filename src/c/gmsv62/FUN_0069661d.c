/* FUN_0069661d - 0x0069661d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0069661d(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x4ed);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0x7c) + 0x20))
            (extraout_ECX,1,0x14a,*(int *)(extraout_ECX + 0x20) + -0x1e,0,unaff_EBP + -0x24);
  uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x4ee);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0x84) + 0x20))
            (extraout_ECX,2,0x174,*(int *)(extraout_ECX + 0x20) + -0x1e,0,unaff_EBP + -0x24);
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x38) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x58) = 2;
  *(undefined4 *)(unaff_EBP + -0x50) = 2;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *(undefined4 *)(unaff_EBP + -0x4c) = 2;
  *(undefined4 *)(unaff_EBP + -0x40) = 0xff000000;
  puVar3 = (undefined4 *)FUN_00679e4e(unaff_EBP + -0x10,10);
  FUN_00408b49();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x48) = *puVar3;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  iVar2 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045e196(uVar1);
  *(undefined4 *)(unaff_EBP + -0x2c) = 0x3c;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  (**(code **)(**(int **)(extraout_ECX + 0x94) + 8))
            (extraout_ECX,0,0x1c,0x2d,0x16e,0x11,unaff_EBP + -0x5c);
  iVar2 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045e196(uVar1);
  *(undefined4 *)(unaff_EBP + -0x2c) = 0x3c;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  (**(code **)(**(int **)(extraout_ECX + 0x9c) + 8))
            (extraout_ECX,1,0x1c,0x46,0x16e,0x11,unaff_EBP + -0x5c);
  iVar2 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045e196(uVar1);
  *(undefined4 *)(unaff_EBP + -0x2c) = 0x3c;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  (**(code **)(**(int **)(extraout_ECX + 0xa4) + 8))
            (extraout_ECX,2,0x1c,0x5e,0x16e,0x11,unaff_EBP + -0x5c);
  FUN_008164fd(*(undefined4 *)(extraout_ECX + 0x94));
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045c14e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


