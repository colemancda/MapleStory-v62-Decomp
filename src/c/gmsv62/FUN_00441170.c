/* FUN_00441170 - 0x00441170 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00441170(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int unaff_EBP;
  int iVar6;
  undefined4 uStack_a4;
  int iStack_a0;
  int iStack_9c;
  int *piStack_98;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x4ac) == 0) {
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined ***)(unaff_EBP + -0x4c) = &PTR_FUN_008e8610;
    iVar3 = *(int *)(extraout_ECX + 0x428);
    iVar6 = *(int *)(extraout_ECX + 0x25);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if ((iVar3 != 0) && (*(int *)(extraout_ECX + 0x36c) != -1)) {
      iVar6 = *(int *)(extraout_ECX + 0x36c);
    }
    piStack_98 = (int *)(extraout_ECX + 0x458);
    iStack_9c = 0x4411d0;
    iStack_9c = FUN_00413367();
    iStack_a0 = *(int *)(extraout_ECX + 0x15);
    uStack_a4 = *(undefined4 *)(extraout_ECX + 0x11);
    piStack_98 = (int *)iVar6;
    uVar2 = FUN_00406d88();
    if (*(int *)(unaff_EBP + 8) < 0) {
      *(undefined4 *)(unaff_EBP + 8) = uVar2;
    }
    piStack_98 = (int *)0xfffffffe;
    iStack_9c = 0x4411fd;
    FUN_004031b7();
    iVar3 = *(int *)(extraout_ECX + 0xcbc);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(int *)(unaff_EBP + -0x14) = extraout_ECX + 0xcbc;
    if (iVar3 == 0) {
      piStack_98 = (int *)0x44121c;
      FUN_00878dfb();
    }
    piStack_98 = (int *)(unaff_EBP + -0x10);
    iStack_9c = 0x44122b;
    FUN_0041141a();
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_98 = (int *)0x441240;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_98 = (int *)0x44124b;
      FUN_00878dfb();
    }
    puVar5 = *(undefined4 **)(unaff_EBP + -0x40);
    while (puVar5 != (undefined4 *)0x0) {
      iVar3 = *(int *)((-(uint)(puVar5 != (undefined4 *)0x0) & (uint)(puVar5 + -4)) + 4);
      puVar4 = (undefined4 *)(-(uint)(iVar3 != 0) & iVar3 + 0x10U);
      *(undefined4 *)(unaff_EBP + -0x10) = *puVar5;
      FUN_004125f3();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      piStack_98 = (int *)0x441292;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      piStack_98 = (int *)0x44129f;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_98 = (int *)0x4412ac;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      piStack_98 = (int *)0x4412b9;
      FUN_00403191();
      piStack_98 = (int *)(unaff_EBP + -0x60);
      iStack_9c = unaff_EBP + -0x38;
      iStack_a0 = unaff_EBP + -0x24;
      *(undefined4 **)(unaff_EBP + -0x50) = &uStack_a4;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00679e4e(&uStack_a4,0x474);
      iVar3 = unaff_EBP + -0x28;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_004115d9(iVar3);
      FUN_00404e7f(iVar3);
      iVar3 = unaff_EBP + -0x80;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_0040263d(iVar3);
      uStack_a4 = FUN_004048a4(iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      uVar2 = FUN_004458be();
      iVar3 = unaff_EBP + -0x90;
      FUN_00424e27(iVar3,uVar2);
      FUN_004250ac(iVar3,uVar2);
      piStack_98 = (int *)0x441340;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_98 = (int *)0x44134b;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      piStack_98 = (int *)0x441358;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_98 = (int *)0x441363;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
        piStack_98 = (int *)0x441374;
        (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      piStack_98 = (int *)0x441381;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_98 = (int *)0x44138c;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_98 = (int *)0x441399;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_98 = (int *)0x4413a4;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      piStack_98 = (int *)0x4413b1;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_98 = (int *)0x4413bc;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      piStack_98 = (int *)0x4413c9;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_98 = (int *)0x4413d4;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      puVar5 = puVar4;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        piStack_98 = (int *)0x4413e9;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
    }
    piStack_98 = (int *)(extraout_ECX + 0x458);
    iStack_9c = 0x441400;
    iVar3 = FUN_00413367();
    if (iVar3 == 0) {
      FUN_0044239f();
    }
    else {
      iVar3 = FUN_007d1e08();
      *(int *)(extraout_ECX + 0x454) = iVar3 + *(int *)(unaff_EBP + 8);
      piStack_98 = (int *)0x44142c;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
      piStack_98 = (int *)(unaff_EBP + -0x24);
      iStack_9c = 0x441436;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_98 = (int *)0x441442;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      piStack_98 = (int *)0x44144c;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
      piStack_98 = (int *)(unaff_EBP + -0x38);
      iStack_9c = 0x441456;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_98 = (int *)0x441462;
        FUN_00878dfb();
      }
      piVar1 = *(int **)(unaff_EBP + -0x14);
      iVar3 = *piVar1;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (iVar3 == 0) {
        piStack_98 = (int *)0x441478;
        FUN_00878dfb();
      }
      piVar1 = (int *)*piVar1;
      iStack_a0 = *(int *)(unaff_EBP + -0x24);
      iStack_9c = *(int *)(unaff_EBP + -0x20);
      piStack_98 = *(int **)(unaff_EBP + -0x1c);
      uStack_a4 = *(undefined4 *)(unaff_EBP + -0x2c);
      iVar3 = (**(code **)(*piVar1 + 0x110))
                        (piVar1,0x20,*(undefined4 *)(unaff_EBP + -0x38),
                         *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30));
      if (iVar3 < 0) {
        iStack_a0 = 0x4414ad;
        iStack_9c = iVar3;
        piStack_98 = piVar1;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      piStack_98 = (int *)0x4414ba;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_98 = (int *)0x4414c5;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_98 = (int *)0x4414d2;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_98 = (int *)0x4414dd;
        FUN_00878dfb();
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined ***)(unaff_EBP + -0x4c) = &PTR_FUN_008e8610;
    FUN_004136e9();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


