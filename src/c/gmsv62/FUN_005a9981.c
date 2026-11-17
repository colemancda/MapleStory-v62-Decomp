/* FUN_005a9981 - 0x005a9981 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005a9981(void)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int **ppiVar3;
  int *piStack_4c;
  int *piStack_48;
  int *piStack_44;
  int *piStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  iStack_2c = 0x5a999f;
  FUN_005aa6e2();
  if (DAT_0097c1ac == 0) {
    iStack_2c = 0x80004003;
    uStack_30 = 0x5a99b3;
    FUN_00878dfb();
  }
  iStack_2c = unaff_EBP + -0x10;
  uStack_30 = 0x5a99c2;
  piVar1 = (int *)FUN_00429328();
  iVar2 = *piVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    iStack_2c = 0x80004003;
    uStack_30 = 0x5a99d5;
    FUN_00878dfb();
  }
  piVar1 = (int *)*piVar1;
  *(undefined4 *)(unaff_EBP + -0x28) = DAT_0097bb30;
  *(undefined4 *)(unaff_EBP + -0x24) = DAT_0097bb34;
  iVar2 = *piVar1;
  *(undefined4 *)(unaff_EBP + -0x20) = DAT_0097bb38;
  *(undefined4 *)(unaff_EBP + -0x1c) = DAT_0097bb3c;
  uStack_38 = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_34 = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_30 = *(undefined4 *)(unaff_EBP + -0x20);
  iStack_2c = *(undefined4 *)(unaff_EBP + -0x1c);
  piStack_40 = (int *)0x5a99f5;
  piStack_3c = piVar1;
  iVar2 = (**(code **)(iVar2 + 100))();
  if (iVar2 < 0) {
    piStack_40 = (int *)&DAT_00963de8;
    piStack_4c = (int *)0x5a9a07;
    piStack_48 = (int *)iVar2;
    piStack_44 = piVar1;
    FUN_00878e09();
  }
  piStack_40 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_40 != (int *)0x0) {
    piStack_44 = (int *)0x5a9a18;
    (**(code **)(*piStack_40 + 8))();
  }
  if (DAT_0097c1ac == 0) {
    piStack_40 = (int *)0x80004003;
    piStack_44 = (int *)0x5a9a2a;
    FUN_00878dfb();
  }
  piStack_40 = (int *)(unaff_EBP + -0x14);
  piStack_44 = (int *)0x5a9a39;
  piVar1 = (int *)FUN_00429328();
  iVar2 = *piVar1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    piStack_40 = (int *)0x80004003;
    piStack_44 = (int *)0x5a9a50;
    FUN_00878dfb();
  }
  piVar1 = (int *)*piVar1;
  piStack_40 = (int *)0x0;
  piStack_44 = (int *)0x0;
  piStack_4c = (int *)0x5a9a5a;
  piStack_48 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x40))();
  if (iVar2 < 0) {
    piStack_4c = (int *)&DAT_00963d08;
    FUN_00878e09(iVar2,piVar1);
  }
  piStack_4c = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_4c != (int *)0x0) {
    (**(code **)(*piStack_4c + 8))();
  }
  piStack_4c = (int *)0x5a9a83;
  FUN_005a2315();
  ppiVar3 = &piStack_4c;
  *(int ***)(unaff_EBP + -0x18) = &piStack_4c;
  FUN_005a9f5e(&piStack_4c);
  FUN_00486ada(ppiVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00424e82();
  FUN_0042935a();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


