/* ptr_004dfc45 - 0x004dfc45 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004dfc45(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 uVar5;
  undefined1 *puStack_10;
  int iStack_c;
  int iStack_8;
  
  puStack_10 = (undefined1 *)&iStack_8;
  *(int **)(unaff_EBP + -0x14) = &iStack_8;
  iStack_c = 0x64b;
  FUN_00679e4e();
  iStack_c = unaff_EBP + -0x398;
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  puStack_10 = (undefined1 *)0x4dfc70;
  FUN_0040263d();
  puStack_10 = (undefined1 *)0x4dfc77;
  iStack_8 = FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  iStack_c = 0x4dfc81;
  iStack_8 = FUN_004343c5();
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  iStack_c = 0x4dfc92;
  FUN_00454081();
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  iStack_8 = 0x4dfca2;
  iVar3 = unaff_EBP + -0x398;
  iVar2 = FUN_00402bc3();
  iStack_8 = iVar3;
  if (iVar2 < 0) {
    iStack_8 = 0x4dfcad;
    FUN_00878dfb();
    iStack_8 = extraout_ECX;
  }
  iStack_c = unaff_EBX + 0x108;
  *(int **)(unaff_EBP + -0x14) = &iStack_8;
  puStack_10 = (undefined1 *)0x4dfcc1;
  FUN_0046fcc9();
  iStack_c = unaff_EBP + -0x20;
  puStack_10 = (undefined1 *)0x4dfcca;
  FUN_007d3a22();
  iStack_8 = 0x4dfcdc;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x88));
  iStack_8 = unaff_EBP + -0x88;
  iStack_c = 0x4dfce9;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_8 = 0x4dfcf5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  iStack_8 = 0x4dfd02;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x178));
  iStack_8 = unaff_EBP + -0x178;
  iStack_c = 0x4dfd0f;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_8 = 0x4dfd1b;
    FUN_00878dfb();
  }
  iStack_8 = unaff_EBP + -0x178;
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  iStack_c = 0x4dfd38;
  iStack_c = FUN_00449749();
  puStack_10 = (undefined1 *)0x4dfd41;
  uVar4 = FUN_00449713();
  *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_10;
  FUN_00448a17(uVar4);
  uVar5 = 0x14;
  uVar4 = 0x1b;
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  FUN_004115d9(0x1b,0x14);
  FUN_00448e3a(uVar4,uVar5);
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  iStack_8 = 0x4dfd74;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_8 = 0x4dfd7f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  iStack_8 = 0x4dfd8f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_8 = 0x4dfd9a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    iStack_8 = 0x4dfdb7;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    iStack_8 = 0x4dfdd8;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
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
  puStack_10 = *(undefined1 **)(unaff_EBP + -0xb8);
  iStack_c = *(undefined4 *)(unaff_EBP + -0xb4);
  iStack_8 = *(int *)(unaff_EBP + -0xb0);
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


