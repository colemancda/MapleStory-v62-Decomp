/* FUN_005f94bb - 0x005f94bb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005f94bb(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int iStack_5c;
  int iStack_58;
  
  FUN_00879bb8();
  cVar1 = FUN_0042452b();
  if (cVar1 == '\0') {
    *(int **)(unaff_EBP + 8) = &iStack_58;
    iStack_5c = 0x1de;
    FUN_00679d86(&iStack_58);
    iStack_5c = 0x5f96e7;
    FUN_005c152d();
  }
  else {
    uVar2 = FUN_0042452b();
    uVar3 = FUN_0042452b();
    *(uint *)(unaff_EBP + -0x10) = uVar3 & 0xff;
    for (uVar2 = uVar2 & 0xff; uVar2 != 0; uVar2 = uVar2 - 1) {
      if (*(int *)(extraout_ECX + 0x200) != 0) {
        iStack_58 = 0x5f951a;
        FUN_005f96ff();
        if (*(int *)(unaff_EBP + -0x38) == *(int *)(extraout_ECX + 0xa94)) {
          *(int *)(extraout_ECX + 0xad8) = *(int *)(extraout_ECX + 0xad8) + -1;
        }
        FUN_00412600();
      }
      iStack_58 = 0x5f953d;
      FUN_005fedf5();
    }
    if (*(int *)(extraout_ECX + 0x200) != 0) {
      iStack_58 = 0x5f955c;
      FUN_005f96ff();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iStack_58 = -2;
      iStack_5c = 0x5f956c;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        iStack_58 = 0x5f9581;
        FUN_00878dfb();
      }
      iStack_58 = unaff_EBP + 8;
      iStack_5c = 0x5f9591;
      FUN_0041141a();
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar5 = unaff_EBP + -0x40;
      iStack_58 = 0x5f95a6;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        iStack_58 = 0x5f95b1;
        FUN_00878dfb();
        iVar5 = extraout_ECX_00;
      }
      iStack_58 = unaff_EBP + -0x20;
      *(int **)(unaff_EBP + 8) = &iStack_5c;
      iStack_5c = iVar5;
      FUN_00424dbc(extraout_ECX + 0x1c0);
      FUN_005fea69();
      iStack_58 = 0x5f95db;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
      iStack_58 = unaff_EBP + -0x30;
      iStack_5c = 0x5f95ea;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        iStack_58 = 0x5f95f6;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_58 = 0x5f9603;
      FUN_00403191();
      piVar6 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (piVar6 == (int *)0x0) {
        iStack_58 = 0x5f9614;
        FUN_00878dfb();
        piVar6 = *(int **)(unaff_EBP + -0x14);
      }
      iStack_5c = *(int *)(unaff_EBP + -0x2c);
      iVar5 = *piVar6;
      iStack_58 = *(int *)(unaff_EBP + -0x28);
      *(int **)(unaff_EBP + 8) = piVar6;
      iVar5 = (**(code **)(iVar5 + 0x110))
                        (piVar6,0x20,*(undefined4 *)(unaff_EBP + -0x50),
                         *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48),
                         *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x30));
      if (iVar5 < 0) {
        iStack_58 = *(int *)(unaff_EBP + 8);
        iStack_5c = iVar5;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_58 = 0x5f965c;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_58 = 0x5f9667;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_58 = 0x5f9674;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_58 = 0x5f967f;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        iStack_58 = 0x5f9690;
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
    }
    if (*(int *)(extraout_ECX + 0xc0) == *(int *)(unaff_EBP + -0x10)) {
      *(undefined4 *)(extraout_ECX + 0xa9c) = 1;
      *(undefined4 *)(extraout_ECX + 0x70c) = 1;
    }
    else {
      *(undefined4 *)(extraout_ECX + 0xa9c) = 0;
    }
    *(undefined4 *)(extraout_ECX + 0xab8) = 30000;
    iStack_58 = 0x5f96c6;
    FUN_008161f1();
  }
  *(undefined4 *)(extraout_ECX + 0x704) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


