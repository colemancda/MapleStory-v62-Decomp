/* FUN_007eaca3 - 0x007eaca3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007eaca3(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x40) = 0xff000000;
  iVar2 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x10) = iVar2;
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
  uVar3 = *(undefined4 *)(extraout_ECX + 0xb0);
  piVar1 = *(int **)(extraout_ECX + 0x624);
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  iVar2 = *(int *)(extraout_ECX + 0x20);
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar3;
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(extraout_ECX + 0xd0);
  *(undefined4 *)(unaff_EBP + -0x58) = 2;
  *(undefined4 *)(unaff_EBP + -0x50) = 2;
  *(undefined4 *)(unaff_EBP + -0x4c) = 2;
  (**(code **)(*piVar1 + 8))(extraout_ECX,1000,0x13,iVar2 + -0x49,0xe2,0xf,unaff_EBP + -0x5c);
  FUN_008164fd(*(undefined4 *)(extraout_ECX + 0x624));
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar3 = FUN_00679d86(unaff_EBP + -0x10,0x4ed);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382(uVar3);
  (**(code **)(**(int **)(extraout_ECX + 0x644) + 0x20))
            (extraout_ECX,1,0x9e,*(int *)(extraout_ECX + 0x20) + -0x1e,0,unaff_EBP + -0x24);
  uVar3 = FUN_00679d86(unaff_EBP + -0x10,0x4ee);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382(uVar3);
  (**(code **)(**(int **)(extraout_ECX + 0x64c) + 0x20))
            (extraout_ECX,2,0xd0,*(int *)(extraout_ECX + 0x20) + -0x1e,0,unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045c14e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


