/* FUN_0063523b - 0x0063523b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0063523b(void)

{
  int iVar1;
  int *piVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar4 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + 8) = uVar4;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar5 = FUN_006358ef(unaff_EBP + 8,unaff_EBP + -0x18);
  if (iVar5 == 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00635865();
  }
  else {
    uVar4 = FUN_007d1e08();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
    *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) =
         *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x10);
    iVar5 = *(int *)(unaff_EBP + -0x14);
    uVar6 = FUN_0042452b();
    *(uint *)(iVar5 + 0x10) = uVar6 & 0xff;
    iVar5 = *(int *)(unaff_EBP + -0x14);
    sVar3 = FUN_00424561();
    *(int *)(iVar5 + 0x14) = (int)sVar3;
    iVar5 = *(int *)(unaff_EBP + -0x14);
    sVar3 = FUN_00424561();
    *(int *)(iVar5 + 0x18) = (int)sVar3;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00403191(&DAT_00980690);
    iVar5 = *(int *)(unaff_EBP + -0x14);
    iVar1 = *(int *)(iVar5 + 0x38);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar1 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = *(int **)(iVar5 + 0x38);
    iVar5 = (**(code **)(*piVar2 + 0x110))
                      (piVar2,0,*(undefined4 *)(unaff_EBP + -0x28),
                       *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                       *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x38),
                       *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c));
    if (iVar5 < 0) {
      FUN_00878e09(iVar5,piVar2,&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x28);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x38);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x30) = 4;
    iVar5 = FUN_00638dca(unaff_EBP + -0x20,*(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x10));
    if ((**(int **)(iVar5 + 4) == 0) || (*(int *)(**(int **)(iVar5 + 4) + -4) == 0)) {
      iVar5 = *(int *)(unaff_EBP + -0x10) + 400;
      if (iVar5 == 0) {
        iVar5 = 1;
      }
    }
    else {
      iVar5 = 0;
    }
    *(int *)(*(int *)(unaff_EBP + -0x14) + 0x28) = iVar5;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      FUN_006358c0(0);
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x24) = 0xfffffffe;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      FUN_00635891(0);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


