/* FUN_004fd949 - 0x004fd949 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004fd949(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if ((*(int *)(extraout_ECX + 0x40) != 0) && (*(int *)(extraout_ECX + 0xc) == 0)) {
    puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x4e4);
    uVar1 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_007d4137(uVar1,100);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    if (*(int *)(extraout_ECX + 0x44) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = *(int **)(extraout_ECX + 0x44);
    iVar4 = (**(code **)(*piVar2 + 0x40))
                      (piVar2,*(undefined4 *)(extraout_ECX + 0x14),
                       *(undefined4 *)(extraout_ECX + 0x18));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar2,&DAT_00963d08);
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
    iVar4 = FUN_00402e32(unaff_EBP + -0x20,&DAT_00980690);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    iVar4 = *(int *)(extraout_ECX + 0x40);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar4 = FUN_0042a378();
    FUN_004031b7(iVar4 + *(int *)(extraout_ECX + 0x20) * 1000,3);
    iVar4 = *(int *)(extraout_ECX + 0x44);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = *(int **)(extraout_ECX + 0x44);
    iVar4 = (**(code **)(*piVar2 + 0x90))
                      (piVar2,*(undefined4 *)(extraout_ECX + 0x10),
                       *(undefined4 *)(extraout_ECX + 0x18),*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                       *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                       *(undefined4 *)(unaff_EBP + -0x14));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar2,&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x20);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


