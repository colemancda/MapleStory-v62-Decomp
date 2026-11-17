/* FUN_004ac270 - 0x004ac270 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ac270(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar3 = *(undefined4 *)(unaff_EBP + 0x10);
  uVar5 = *(undefined4 *)(unaff_EBP + 0x14);
  *(undefined4 *)(extraout_ECX + 0x50) = *(undefined4 *)(unaff_EBP + 0x20);
  *(undefined4 *)(extraout_ECX + 0x54) = uVar3;
  *(undefined4 *)(extraout_ECX + 0x58) = uVar5;
  *(undefined4 *)(extraout_ECX + 0x38) = 0;
  *(undefined4 *)(extraout_ECX + 0x3c) = 0;
  *(undefined4 *)(extraout_ECX + 0x40) = 100;
  *(undefined4 *)(extraout_ECX + 0x44) = 0;
  *(undefined4 *)(extraout_ECX + 0x48) = 0;
  *(undefined4 *)(extraout_ECX + 0x68) = 0;
  FUN_004abfe8(uVar3,uVar5,extraout_ECX + 0x70);
  FUN_004ac37e(unaff_EBP + 0x10,0);
  iVar1 = *(int *)(extraout_ECX + 0x54);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    if (*(int *)(unaff_EBP + 0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar3 = FUN_0040e48b();
    iVar1 = *(int *)(unaff_EBP + 0x10);
    *(undefined4 *)(extraout_ECX + 0x4c) = uVar3;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar3 = *(undefined4 *)(unaff_EBP + 0x24);
    uVar5 = FUN_0040e53d(uVar3);
    uVar4 = *(undefined4 *)(extraout_ECX + 0x50);
  }
  else {
    if (iVar1 != 1) goto LAB_004ac34f;
    if (*(int *)(unaff_EBP + 0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar3 = FUN_0040e53d();
    iVar1 = *(int *)(unaff_EBP + 0x10);
    *(undefined4 *)(extraout_ECX + 0x4c) = uVar3;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar3 = *(undefined4 *)(unaff_EBP + 0x24);
    uVar5 = *(undefined4 *)(extraout_ECX + 0x50);
    uVar4 = FUN_0040e48b(uVar5,uVar3);
  }
  FUN_004b388f(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
               *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + 0x1c),uVar4,uVar5,uVar3
              );
LAB_004ac34f:
  if (*(int *)(extraout_ECX + 0x58) == 4) {
    *(undefined4 *)(extraout_ECX + 0x6c) = 1;
  }
  piVar2 = *(int **)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


