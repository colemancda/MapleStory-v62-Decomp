/* ptr_004dfddd - 0x004dfddd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004dfddd(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 uVar5;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_8 = unaff_EBP + -0x38;
  iStack_c = 0x4dfdf2;
  puVar2 = (undefined4 *)FUN_00679d22();
  iStack_8 = *puVar2;
  iStack_c = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  uStack_10 = 0x4dfe08;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  iStack_8 = 0x4dfe24;
  VariantInit((VARIANTARG *)(unaff_EBP + -0xa8));
  iStack_8 = unaff_EBP + -0xa8;
  iStack_c = 0x4dfe31;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_8 = 0x4dfe3d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  iStack_8 = 0x4dfe4e;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x1e8));
  iStack_8 = unaff_EBP + -0x1e8;
  iStack_c = 0x4dfe5b;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_8 = 0x4dfe67;
    FUN_00878dfb();
  }
  iStack_8 = unaff_EBP + -0x1e8;
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  iStack_c = 0x4dfe84;
  iStack_c = FUN_00449749();
  uStack_10 = 0x4dfe8d;
  uVar4 = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_10;
  FUN_00448a17(uVar4);
  uVar5 = 7;
  uVar4 = 0x1b;
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  FUN_004115d9(0x1b,7);
  FUN_00448e3a(uVar4,uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  iStack_8 = 0x4dfec0;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_8 = 0x4dfecb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_8 = 0x4dfedb;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_8 = 0x4dfee6;
    FUN_00878dfb();
  }
  iStack_8 = 0x4dfef3;
  VariantInit((VARIANTARG *)(unaff_EBP + -200));
  iStack_8 = unaff_EBP + -200;
  iStack_c = 0x4dff00;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_8 = 0x4dff0c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3c;
  iStack_8 = 0x4dff1d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x208));
  iStack_8 = unaff_EBP + -0x208;
  iStack_c = 0x4dff2a;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_8 = 0x4dff36;
    FUN_00878dfb();
  }
  iStack_8 = unaff_EBP + -0x208;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  iStack_c = 0x4dff53;
  iStack_c = FUN_00449749();
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_10;
  FUN_00679e4e(&uStack_10,0x2ee);
  uVar5 = 0x14;
  uVar4 = 0x1b;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  FUN_004115d9(0x1b,0x14);
  FUN_00448e3a(uVar4,uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x3c;
  iStack_8 = 0x4dff8e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_8 = 0x4dff99;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_8 = 0x4e0935;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_8 = 0x4e0940;
    FUN_00878dfb();
  }
  iStack_8 = 0x4e094d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0xb8));
  iStack_8 = unaff_EBP + -0xb8;
  iStack_c = 0x4e095a;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_8 = 0x4e0966;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_EBX + 0x104);
  *(undefined1 *)(unaff_EBP + -4) = 99;
  *(int *)(unaff_EBP + -0x28) = iVar3;
  if (iVar3 == 0) {
    iStack_8 = 0x4e0988;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
    iStack_8 = 0x4e0996;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar3 = FUN_0040e53d();
  uStack_10 = *(undefined4 *)(unaff_EBP + -0xb8);
  iStack_c = *(undefined4 *)(unaff_EBP + -0xb4);
  iStack_8 = *(undefined4 *)(unaff_EBP + -0xb0);
  iVar3 = (**(code **)(*piVar1 + 0x80))
                    (piVar1,6,0x25U - iVar3 >> 1,*(undefined4 *)(unaff_EBP + -0x28));
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar3 = FUN_00402bc3(unaff_EBP + -0xb8);
  if (iVar3 < 0) {
    FUN_00878dfb(iVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


