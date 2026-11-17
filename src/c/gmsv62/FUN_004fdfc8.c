/* FUN_004fdfc8 - 0x004fdfc8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004fdfc8(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x40) != 0) {
    if (*(int *)(extraout_ECX + 0x44) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(extraout_ECX + 0x44);
    iVar2 = (**(code **)(*piVar1 + 0x40))
                      (piVar1,*(undefined4 *)(extraout_ECX + 0x10),
                       *(undefined4 *)(extraout_ECX + 0x18));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar1,&DAT_00963d08);
    }
    uVar3 = FUN_004133f0();
    *(uint *)(unaff_EBP + -0x18) = uVar3 % 0x1e + 0x14;
    uVar3 = FUN_004133f0();
    iVar2 = (-(uint)(uVar3 % 10 < 5) & 0xfffffffe) + 1;
    if (*(int *)(extraout_ECX + 0x10) < *(int *)(extraout_ECX + 0x2c)) {
      iVar2 = 1;
    }
    else if (*(int *)(extraout_ECX + 0x30) < *(int *)(extraout_ECX + 0x10)) {
      iVar2 = -1;
    }
    uVar3 = FUN_004133f0();
    *(uint *)(unaff_EBP + -0x14) = uVar3 % 0x1e + 0x14;
    uVar3 = FUN_004133f0();
    *(uint *)(unaff_EBP + -0x10) = (-(uint)(uVar3 % 10 < 5) & 0xfffffffe) + 1;
    if (*(int *)(extraout_ECX + 0x18) < *(int *)(extraout_ECX + 0x38)) {
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
    }
    else if (*(int *)(extraout_ECX + 0x34) < *(int *)(extraout_ECX + 0x18)) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0xffffffff;
    }
    uVar3 = FUN_004133f0();
    VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
    iVar4 = FUN_00402e32(unaff_EBP + -0x28,&DAT_00980690);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(extraout_ECX + 0x40) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar4 = FUN_0042a378();
    FUN_004031b7(iVar4 + (uVar3 % 10 + 10) * 100,3);
    iVar4 = *(int *)(unaff_EBP + -0x18);
    *(int *)(extraout_ECX + 0x18) =
         *(int *)(extraout_ECX + 0x18) + *(int *)(unaff_EBP + -0x10) * *(int *)(unaff_EBP + -0x14);
    *(int *)(extraout_ECX + 0x10) = *(int *)(extraout_ECX + 0x10) + iVar2 * iVar4;
    iVar2 = *(int *)(extraout_ECX + 0x44);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar2 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(extraout_ECX + 0x44);
    iVar2 = (**(code **)(*piVar1 + 0x90))
                      (piVar1,*(undefined4 *)(extraout_ECX + 0x10),
                       *(undefined4 *)(extraout_ECX + 0x18),*(undefined4 *)(unaff_EBP + -0x38),
                       *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                       *(undefined4 *)(unaff_EBP + -0x1c));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar1,&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x28);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


