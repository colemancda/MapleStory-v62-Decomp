/* FUN_00803fc1 - 0x00803fc1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00803fc1(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX + 0x19c;
  iVar2 = FUN_005e4404(0);
  if (iVar2 != 0) {
    iVar2 = *(int *)(extraout_ECX + 0x1bc);
    FUN_004f1993(extraout_ECX + 0x20,*(undefined4 *)(extraout_ECX + 0x30));
    uVar3 = __ftol();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
    uVar3 = FUN_004f1a11(*(undefined8 *)(unaff_EBP + -0x14));
    *(undefined4 *)(extraout_ECX + 0x30) = uVar3;
    uVar1 = __ftol();
    *(undefined2 *)(iVar2 + 2) = uVar1;
    FUN_004f1993(extraout_ECX + 0x38,*(undefined4 *)(extraout_ECX + 0x48));
    uVar3 = __ftol();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
    uVar3 = FUN_004f1a11(*(undefined8 *)(unaff_EBP + -0x14));
    *(undefined4 *)(extraout_ECX + 0x48) = uVar3;
    uVar1 = __ftol();
    *(undefined2 *)(iVar2 + 4) = uVar1;
    FUN_004f1993(extraout_ECX + 0x50,*(undefined4 *)(extraout_ECX + 0x60));
    uVar3 = __ftol();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
    uVar3 = FUN_004f1a11(*(undefined8 *)(unaff_EBP + -0x14));
    *(undefined4 *)(extraout_ECX + 0x60) = uVar3;
    uVar1 = __ftol();
    *(undefined2 *)(iVar2 + 6) = uVar1;
    FUN_004f1993(extraout_ECX + 0x68,*(undefined4 *)(extraout_ECX + 0x78));
    uVar3 = __ftol();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    *(double *)(unaff_EBP + -0x14) = (double)*(int *)(unaff_EBP + -0x10);
    uVar3 = FUN_004f1a11(*(undefined8 *)(unaff_EBP + -0x14));
    *(undefined4 *)(extraout_ECX + 0x78) = uVar3;
    uVar1 = __ftol();
    *(undefined2 *)(iVar2 + 8) = uVar1;
    if (*(int *)(extraout_ECX + 0x110) != 0) {
      FUN_007f13de(extraout_ECX + 0x20,*(int *)(extraout_ECX + 0x110));
    }
    FUN_0060142b(0x26,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00429303();
    *(undefined1 *)(unaff_EBP + -0x10) = *(undefined1 *)(iVar2 + 0xf8);
    FUN_00457cda();
    iVar2 = FUN_005e4469(unaff_EBP + -0x28,0,0);
    if (iVar2 == 0) {
      FUN_004751b2(unaff_EBP + -0x28);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


