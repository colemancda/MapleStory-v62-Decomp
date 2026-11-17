/* FUN_007c53eb - 0x007c53eb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c53eb(void)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar3 = *(int *)(extraout_ECX + 0xd74);
  FUN_007f17b3();
  (**(code **)(*(int *)(extraout_ECX + 0x78) + 0xc))
            (*(undefined4 *)((-(uint)(iVar3 != 0) & iVar3 - 0xcU) + 0x140),0);
  iVar3 = FUN_007d1e08();
  if (*(int *)(extraout_ECX + 0x1e60) < iVar3 - *(int *)(extraout_ECX + 0x1e5c)) {
    if (*(int *)(extraout_ECX + 0x1e68) == 0) {
      if (*(int *)(extraout_ECX + 0x1e64) != 0) {
        FUN_007c5da0();
      }
    }
    else {
      *(undefined4 *)(extraout_ECX + 0x1e68) = 0;
      *(undefined4 *)(extraout_ECX + 0x1e64) = 0;
    }
  }
  if (*(int *)(extraout_ECX + 0x1e70) != 0) {
    _DAT_0097c030 = _DAT_0097c030 + _DAT_008ea310;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
    iVar3 = FUN_00402e32(unaff_EBP + -0x30);
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
    iVar3 = FUN_00402e32(unaff_EBP + -0x20,&DAT_00980690);
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    iVar3 = *(int *)(extraout_ECX + 0x1e74);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar3 == 0) {
      FUN_00878dfb();
    }
    dVar2 = _DAT_0097c030;
    piVar1 = *(int **)(extraout_ECX + 0x1e74);
    *(int **)(unaff_EBP + -0x10) = piVar1;
    FUN_0087adc4(dVar2);
    uVar4 = __ftol();
    iVar3 = (**(code **)(*piVar1 + 0x90))
                      (*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(extraout_ECX + 0x1e78),
                       uVar4,*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
  }
  if ((*(int *)(extraout_ECX + 0x1e9c) != 0) &&
     (iVar3 = FUN_007d1e08(), 5000 < iVar3 - *(int *)(extraout_ECX + 0x1eb8))) {
    if (*(int *)(extraout_ECX + 0x1e9c) == 0) {
      FUN_00878dfb();
    }
    iVar3 = *(int *)(extraout_ECX + 0x1e9c);
    *(int *)(unaff_EBP + -0x10) = iVar3;
    if (iVar3 == 0) {
      FUN_00878dfb();
    }
    piVar1 = *(int **)(extraout_ECX + 0x1e9c);
    iVar3 = FUN_0043210d();
    iVar3 = (**(code **)(*piVar1 + 0xd8))(piVar1,iVar3 == 0);
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,piVar1,&DAT_00963df8);
    }
    uVar4 = FUN_007d1e08();
    *(undefined4 *)(extraout_ECX + 0x1eb8) = uVar4;
  }
  FUN_0078ded5();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


