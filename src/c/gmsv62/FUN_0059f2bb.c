/* FUN_0059f2bb - 0x0059f2bb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0059f2bb(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(DAT_00978134 + 0x58);
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  if (iVar2 == 0) {
    *(undefined4 *)(extraout_ECX + 200) = 2;
    *(undefined4 *)(extraout_ECX + 0xcc) = 3;
  }
  else if (iVar2 == 1) {
    *(undefined4 *)(extraout_ECX + 200) = 1;
    *(undefined4 *)(extraout_ECX + 0xcc) = 2;
  }
  else {
    *(undefined4 *)(extraout_ECX + 200) = 0;
    if (iVar2 == 2) {
      *(undefined4 *)(extraout_ECX + 0xcc) = 1;
    }
    else {
      *(undefined4 *)(extraout_ECX + 0xcc) = 0;
    }
  }
  if (DAT_0097c1ac == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_005698b4();
  if (DAT_0097c1ac == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)FUN_00429328(unaff_EBP + -0x10);
  iVar2 = *piVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)*piVar1;
  *(undefined4 *)(unaff_EBP + -0x28) = DAT_0097bb30;
  *(undefined4 *)(unaff_EBP + -0x24) = DAT_0097bb34;
  iVar2 = *piVar1;
  *(undefined4 *)(unaff_EBP + -0x20) = DAT_0097bb38;
  *(undefined4 *)(unaff_EBP + -0x1c) = DAT_0097bb3c;
  iVar2 = (**(code **)(iVar2 + 100))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963de8);
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (DAT_0097c1ac == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)FUN_00429328(unaff_EBP + -0x14);
  iVar2 = *piVar1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)*piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x40))(piVar1,0,0);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963d08);
  }
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_0048ba33();
  FUN_005266d6(1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


