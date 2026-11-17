/* FUN_0051fbe1 - 0x0051fbe1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0051fbe1(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  
  FUN_00879bb8();
  iStack_38 = 0x584;
  iStack_3c = unaff_EBP + -0x10;
  *(undefined4 *)(extraout_ECX + 0x98) = 0;
  uStack_40 = 0x51fc10;
  puVar1 = (undefined4 *)FUN_00679d86();
  uStack_40 = *puVar1;
  iStack_3c = extraout_ECX + 0x8c;
  iStack_38 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_44 = 0x51fc23;
  FUN_004506a3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_38 = 0x51fc32;
  FUN_00402676();
  iStack_38 = 0x585;
  iStack_3c = unaff_EBP + -0x10;
  uStack_40 = 0x51fc42;
  iStack_38 = FUN_00679e4e();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iStack_3c = 0x51fc52;
  FUN_0044f5f6();
  iStack_38 = unaff_EBP + -0x34;
  iStack_3c = 0xffffff00;
  uStack_40 = 0xc;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_44;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00679e4e(&uStack_44,10);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0044974c();
  FUN_004503f9();
  iStack_38 = unaff_EBP + -0x34;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_3c = 0x51fc94;
  iStack_38 = FUN_00402bc3();
  if (iStack_38 < 0) {
    iStack_3c = 0x51fc9f;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    iStack_38 = 0x51fcab;
    FUN_004030b1();
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iStack_38 = 0x82a;
  iStack_3c = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  uStack_40 = 0x51fcd2;
  iStack_38 = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_3c = 0x51fcdf;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_38 = 0x51fceb;
  FUN_00402676();
  iStack_38 = 0x578;
  iStack_3c = 0x51fcfa;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 == 0) {
    iStack_38 = 0;
  }
  else {
    iStack_38 = 0x51fd0c;
    iStack_38 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_3c = 0x51fd1d;
  FUN_00450382();
  iStack_38 = unaff_EBP + -0x24;
  iStack_3c = 0;
  uStack_40 = 0xdb;
  uStack_44 = 0x1c;
  (**(code **)(**(int **)(extraout_ECX + 0x80) + 0x20))(extraout_ECX,1);
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x80) + 4) + 0x24))(0);
  uVar3 = FUN_00679d86(unaff_EBP + -0x14,0x82b);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00419192(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450382(uVar3);
  (**(code **)(**(int **)(extraout_ECX + 0x88) + 0x20))
            (extraout_ECX,2,0x93,0xe2,0,unaff_EBP + -0x24);
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x88) + 4) + 0x24))(0);
  *(undefined4 *)(extraout_ECX + 0xa0) = 1000;
  *(undefined4 *)(extraout_ECX + 0xa4) = 2000;
  *(undefined4 *)(extraout_ECX + 0xa8) = 30000;
  FUN_0051fe12();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


