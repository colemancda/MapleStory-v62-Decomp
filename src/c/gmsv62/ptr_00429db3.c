/* ptr_00429db3 - 0x00429db3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00429db3(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  int *unaff_EDI;
  int *piStack_88;
  int *piStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  
  FUN_0042a39f();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  piVar2 = *(int **)(unaff_EBP + 0x14);
  if (piVar2 == unaff_EDI) {
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + 0x14);
  }
  iVar1 = *piVar2;
  *(int **)(unaff_EBP + 8) = piVar2;
  iVar1 = (**(code **)(iVar1 + 0xb4))();
  if (iVar1 < (int)unaff_EDI) {
    FUN_00878e09();
  }
  piVar2 = *(int **)(unaff_EBP + 0x14);
  if (piVar2 == unaff_EDI) {
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + 0x14);
  }
  iVar1 = *piVar2;
  *(int **)(unaff_EBP + 8) = piVar2;
  iVar1 = (**(code **)(iVar1 + 0xe0))();
  if (iVar1 < (int)unaff_EDI) {
    FUN_00878e09();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  if (*(int **)(unaff_EBP + 0x14) == unaff_EDI) {
    FUN_00878dfb();
  }
  FUN_004250ac();
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  if (*(int **)(unaff_EBP + 0x14) == unaff_EDI) {
    FUN_00878dfb();
  }
  FUN_004250ac();
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iVar1 = FUN_00402e32();
  if (iVar1 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
  iVar1 = FUN_00402e32();
  if (iVar1 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  piVar2 = *(int **)(unaff_EBP + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  if (piVar2 == unaff_EDI) {
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + 0x14);
  }
  iVar1 = *piVar2;
  *(int **)(unaff_EBP + 8) = piVar2;
  iVar1 = (**(code **)(iVar1 + 0x90))();
  if (iVar1 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    FUN_00878dfb();
  }
  FUN_0042a378();
  FUN_004031b7();
  piVar2 = *(int **)(unaff_EBP + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  if (piVar2 == (int *)0x0) {
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + 0x14);
  }
  iVar1 = *piVar2;
  *(int **)(unaff_EBP + 8) = piVar2;
  iVar1 = (**(code **)(iVar1 + 0x90))();
  if (iVar1 < 0) {
    iStack_64 = *(undefined4 *)(unaff_EBP + 8);
    uStack_6c = 0x42a1fd;
    iStack_68 = iVar1;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_64 = 0x42a20a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_64 = 0x42a215;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_64 = 0x42a222;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_64 = 0x42a22d;
    FUN_00878dfb();
  }
  iStack_64 = 0x42a237;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_64 = unaff_EBP + -0x40;
  iStack_68 = 0x42a241;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_64 = 0x42a24d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  iStack_64 = 0x42a25a;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    iStack_64 = 0x42a26e;
    FUN_00878dfb();
  }
  piVar2 = *(int **)(unaff_EBP + 0x14);
  uStack_6c = *(undefined4 *)(unaff_EBP + -0x40);
  iStack_68 = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_64 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_7c = *(undefined4 *)(unaff_EBP + -0x50);
  uStack_78 = *(undefined4 *)(unaff_EBP + -0x4c);
  uStack_74 = *(undefined4 *)(unaff_EBP + -0x48);
  uStack_80 = 0;
  uStack_70 = *(undefined4 *)(unaff_EBP + -0x44);
  piStack_88 = (int *)0x42a294;
  piStack_84 = piVar2;
  iVar1 = (**(code **)(*piVar2 + 0x110))();
  if (iVar1 < 0) {
    piStack_88 = (int *)&DAT_00963df8;
    FUN_00878e09(iVar1,piVar2);
  }
  piStack_88 = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  piStack_88 = (int *)FUN_00402bc3();
  if ((int)piStack_88 < 0) {
    FUN_00878dfb();
  }
  piStack_88 = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  piStack_88 = (int *)FUN_00402bc3();
  if ((int)piStack_88 < 0) {
    FUN_00878dfb();
  }
  piStack_88 = *(int **)(unaff_EBP + 0x14);
  piVar2 = *(int **)(unaff_EBP + 0x14);
  *(int ***)(unaff_EBP + 0x18) = &piStack_88;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  FUN_00427af9();
  piStack_88 = *(int **)(unaff_EBP + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piStack_88 != (int *)0x0) {
    (**(code **)(*piStack_88 + 8))();
  }
  piStack_88 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piStack_88 != (int *)0x0) {
    (**(code **)(*piStack_88 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    piStack_88 = (int *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
    FUN_00434e38();
  }
  piStack_88 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piStack_88 != (int *)0x0) {
    (**(code **)(*piStack_88 + 8))();
  }
  piStack_88 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_88 != (int *)0x0) {
    (**(code **)(*piStack_88 + 8))();
  }
  piStack_88 = *(int **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_88 != (int *)0x0) {
    (**(code **)(*piStack_88 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


