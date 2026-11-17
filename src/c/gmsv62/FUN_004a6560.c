/* FUN_004a6560 - 0x004a6560 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004a6560(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *(undefined4 *)(extraout_ECX + 0x34) = *puVar1;
  iVar2 = puVar1[1];
  *(int *)(extraout_ECX + 0x38) = iVar2;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004ac0be(1,0);
  }
  *(int *)(extraout_ECX + 0x3c) = iVar2;
  *(int *)(extraout_ECX + 0x40) = *(int *)(extraout_ECX + 0x1c) - iVar2;
  if (*(int *)(extraout_ECX + 0x38) != 0) {
    iVar2 = FUN_004029b9(0x74);
    *(int *)(unaff_EBP + 8) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_004abf25();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0048b9e9(uVar3);
    if (*(int *)(extraout_ECX + 0x18) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar2 = *(int *)(extraout_ECX + 0x18);
    *(int *)(unaff_EBP + 8) = iVar2;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar3 = **(undefined4 **)(extraout_ECX + 0x48);
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0x18);
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x24);
    iVar2 = *(int *)(extraout_ECX + 0x20);
    *(undefined4 *)(unaff_EBP + 8) = uVar3;
    uVar3 = FUN_00424f08(iVar2 + -1,0);
    iVar2 = FUN_00424ee1(uVar3);
    (**(code **)(*(int *)(unaff_EBP + 8) + 0x20))
              (*(undefined4 *)(unaff_EBP + -0x14),*(uint *)(extraout_ECX + 0x14) | 0x80000000,1,0,
               iVar2 + *(int *)(extraout_ECX + 0x40));
    *(undefined4 *)(*(int *)(extraout_ECX + 0x48) + 0x34) = *(undefined4 *)(extraout_ECX + 0x40);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined4 *)(extraout_ECX + 0x60) = 0;
  return;
}


