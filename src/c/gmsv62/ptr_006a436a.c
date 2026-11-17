/* ptr_006a436a - 0x006a436a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a436a(void)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  (**(code **)(in_EAX + 0x20))();
  uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x4ed);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192(uVar1);
  uVar4 = (undefined1)unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = uVar4;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 == unaff_EBX) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = uVar4;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(unaff_ESI + 0x88) + 0x20))();
  uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x4ee);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = uVar4;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 == unaff_EBX) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = uVar4;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(unaff_ESI + 0x90) + 0x20))();
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x38) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  *(undefined4 *)(unaff_EBP + -0x40) = 0xff000000;
  puVar3 = (undefined4 *)FUN_00679e4e(unaff_EBP + -0x10,10);
  FUN_00408b49();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x48) = *puVar3;
  if (*(int *)(unaff_EBP + -0x10) != unaff_EBX) {
    FUN_004030b1();
    *(int *)(unaff_EBP + -0x10) = unaff_EBX;
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0xc;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  iVar2 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar2 == unaff_EBX) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0045e196(uVar1);
  (**(code **)(**(int **)(unaff_ESI + 0x98) + 8))();
  (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x88) + 4) + 0x1c))();
  FUN_008164fd(*(undefined4 *)(unaff_ESI + 0x98));
  *(undefined1 *)(unaff_EBP + -4) = uVar4;
  FUN_0045c14e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


