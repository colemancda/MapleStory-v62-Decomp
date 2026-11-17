/* FUN_00432a81 - 0x00432a81 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432a81(void)

{
  double dVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int iVar7;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0x18) < *(int *)(unaff_EBP + 0x10)) {
    FUN_00437293(unaff_EBP + 0x10,unaff_EBP + 0x18);
  }
  if (*(int *)(unaff_EBP + 0x10) == *(int *)(unaff_EBP + 0x18)) {
    iVar2 = ((*(int *)(unaff_EBP + 0x1c) <= *(int *)(unaff_EBP + 0x14)) - 1 & 0xffffff4c) + 0x10e;
  }
  else {
    FUN_0087b004(((double)*(int *)(unaff_EBP + 0x1c) - (double)*(int *)(unaff_EBP + 0x14)) /
                 ((double)*(int *)(unaff_EBP + 0x18) - (double)*(int *)(unaff_EBP + 0x10)));
    iVar2 = __ftol();
  }
  iVar7 = *(int *)(unaff_EBP + 0x18) - *(int *)(unaff_EBP + 0x10);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  iVar2 = *(int *)(unaff_EBP + 0x1c) - *(int *)(unaff_EBP + 0x14);
  *(int *)(unaff_EBP + -0x2c) = iVar7 * iVar7 + iVar2 * iVar2;
  FUN_0087af44();
  iVar2 = __ftol();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iVar2 = iVar2 / 0x30 + 1;
  if (0 < iVar2) {
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x14) * 2;
    dVar1 = (double)*(int *)(unaff_EBP + -0x2c) * _DAT_008e8ae0;
    *(int *)(unaff_EBP + -0x24) = iVar2 - (iVar2 >> 0x1f);
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) >> 1;
    *(double *)(unaff_EBP + -0x44) = dVar1;
    *(int *)(unaff_EBP + -0x30) = extraout_ECX + 0xe4;
    do {
      puVar3 = (undefined4 *)FUN_00436896();
      *puVar3 = *(undefined4 *)(unaff_EBP + 8);
      puVar3[1] = *(undefined4 *)(unaff_EBP + 0xc);
      puVar3[4] = *(undefined4 *)(unaff_EBP + 0x20);
      puVar3[7] = *(undefined4 *)(unaff_EBP + -0x14);
      FUN_0087a1b0();
      uVar4 = FUN_004133f0();
      FUN_0087a25a(uVar4 % 3,&stack0xffffffbc,10);
      FUN_00402e8e();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00432cfc();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00432f57(unaff_EBP + -0x2c,unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      puVar5 = (undefined4 *)FUN_00432d67(unaff_EBP + -0x28,unaff_EBP + -0x20);
      *(undefined4 *)(unaff_EBP + -0x10) = *puVar5;
      FUN_00408b49();
      FUN_00408b49();
      FUN_00402fa6();
      iVar7 = *(int *)(unaff_EBP + -0x10);
      puVar3[6] = iVar7;
      if (iVar7 != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
      }
      if (*(int *)(unaff_EBP + -0x2c) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      }
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
      }
      *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x18) - *(int *)(unaff_EBP + -0x24);
      *(double *)(unaff_EBP + -0x3c) = (double)*(int *)(unaff_EBP + -0x34) * _DAT_008e8ad8;
      iVar7 = FUN_0087a90a();
      *(int *)(unaff_EBP + -0x34) = iVar7 << 1;
      FUN_0087ae74((double)*(int *)(unaff_EBP + -0x34) * _DAT_008e8ae0);
      uVar6 = __ftol();
      puVar3[2] = uVar6;
      FUN_0087adc4();
      uVar6 = __ftol();
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      iVar7 = *(int *)(unaff_EBP + -0x18);
      puVar3[3] = uVar6;
    } while (iVar7 < iVar2);
  }
  if (*(int *)(unaff_EBP + 0x24) != 0) {
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


