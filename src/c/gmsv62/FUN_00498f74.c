/* FUN_00498f74 - 0x00498f74 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00498f74(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  int iVar2;
  undefined4 uStack_2c;
  int *piStack_28;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 8);
  if ((iVar2 == 3) && (*(int *)(extraout_ECX + 0x80) != 0)) {
    piStack_28 = *(int **)(extraout_ECX + 0x84);
    uStack_2c = *(undefined4 *)(extraout_ECX + 0x8c);
    FUN_004996b9(*(undefined4 *)(extraout_ECX + 0x88));
  }
  else {
    piStack_28 = (int *)0x498fc0;
    FUN_0074d6fb();
  }
  *(int *)(extraout_ECX + 0x34) = iVar2;
  *(undefined4 *)(extraout_ECX + 0x38) = 0;
  piStack_28 = (int *)0x498fcb;
  uVar1 = FUN_007d1e08();
  *(undefined4 *)(extraout_ECX + 0x44) = uVar1;
  if (*(int *)(extraout_ECX + 0x70 + *(int *)(extraout_ECX + 0x34) * 4) == 0) {
    piStack_28 = (int *)0x80004003;
    uStack_2c = 0x498fe5;
    FUN_00878dfb();
  }
  piStack_28 = (int *)0x498fec;
  uVar1 = FUN_0040cf4d();
  *(undefined4 *)(extraout_ECX + 0x3c) = uVar1;
  piStack_28 = (int *)(unaff_EBP + 8);
  uStack_2c = 0x498ffa;
  FUN_00498bb6();
  piStack_28 = (int *)0x78;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_2c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00679e4e(&uStack_2c,0x474);
  iVar2 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004115d9(iVar2);
  FUN_00404e7f(iVar2);
  iVar2 = unaff_EBP + -0x24;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0040263d(iVar2);
  uStack_2c = FUN_004048a4(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uVar1 = FUN_00412550();
  *(undefined4 *)(extraout_ECX + 0x40) = uVar1;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_28 = (int *)FUN_00402bc3(unaff_EBP + -0x24);
  if ((int)piStack_28 < 0) {
    uStack_2c = 0x499069;
    FUN_00878dfb();
  }
  piStack_28 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_28 != (int *)0x0) {
    uStack_2c = 0x499079;
    (**(code **)(*piStack_28 + 8))();
  }
  if (*(int *)(extraout_ECX + 0x24) != 0) {
    piStack_28 = (int *)0x499085;
    FUN_004b3daf();
  }
  piStack_28 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_28 != (int *)0x0) {
    uStack_2c = 0x499096;
    (**(code **)(*piStack_28 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


