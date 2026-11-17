/* FUN_006a6242 - 0x006a6242 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a6242(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar3;
  
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
  (**(code **)(**(int **)(extraout_ECX + 0x8c) + 0x20))
            (extraout_ECX,1000,0x6b,0x4d,0,unaff_EBP + -0x24);
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
  (**(code **)(**(int **)(extraout_ECX + 0x94) + 0x20))
            (extraout_ECX,0x3e9,0x9c,0x4d,0,unaff_EBP + -0x24);
  uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x9f7);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0x9c) + 0x20))
            (extraout_ECX,0x3ea,0xbe,6,0,unaff_EBP + -0x24);
  FUN_0048f37f();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  *(undefined4 *)(unaff_EBP + -100) = 0xffeeeeee;
  *(undefined4 *)(unaff_EBP + -0x60) = 0xffa5a198;
  *(undefined4 *)(unaff_EBP + -0x5c) = 0xff999999;
  *(undefined4 *)(unaff_EBP + -0x48) = 0x26;
  *(undefined4 *)(unaff_EBP + -0x44) = 0x26;
  *(undefined4 *)(unaff_EBP + -0x40) = 0x26;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0x26;
  *(undefined4 *)(unaff_EBP + -0x28) = 0xfffffffe;
  iVar2 = FUN_004029b9(0xf4);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0049b755();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00495bdd(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0xa4) + 0x20))
            (extraout_ECX,0x3eb,0,0x67,0x32,100,0x11,unaff_EBP + -100);
  for (uVar3 = 0;
      (iVar2 = *(int *)(*(int *)(extraout_ECX + 0x78) + 0x4fc), iVar2 != 0 &&
      (uVar3 < *(uint *)(iVar2 + -4))); uVar3 = uVar3 + 1) {
    FUN_0049e176(*(undefined4 *)(iVar2 + uVar3 * 4),uVar3);
  }
  FUN_0049e5ba(*(undefined4 *)(extraout_ECX + 0x84));
  FUN_008164fd(*(undefined4 *)(extraout_ECX + 0xa4));
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


