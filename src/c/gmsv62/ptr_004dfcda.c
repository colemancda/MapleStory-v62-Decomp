/* ptr_004dfcda - 0x004dfcda in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004dfcda(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBX;
  int unaff_EBP;
  code *unaff_EDI;
  undefined4 uVar4;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  (*unaff_EDI)();
  iStack_c = 0x4dfce9;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  (*unaff_EDI)();
  iStack_c = unaff_EBP + -0x178;
  uStack_10 = 0x4dfd0f;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_c = 0x4dfd1b;
    FUN_00878dfb();
  }
  iStack_c = unaff_EBP + -0x178;
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  uStack_10 = 0x4dfd38;
  uStack_10 = FUN_00449749();
  uStack_14 = 0x4dfd41;
  uVar3 = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_14;
  FUN_00448a17(uVar3);
  uVar4 = 0x14;
  uVar3 = 0x1b;
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  FUN_004115d9(0x1b,0x14);
  FUN_00448e3a(uVar3,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  iStack_c = 0x4dfd74;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_c = 0x4dfd7f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  iStack_c = 0x4dfd8f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_c = 0x4dfd9a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x30;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    iStack_c = 0x4dfdb7;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    iStack_c = 0x4dfdd8;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  iStack_c = 0x4e094d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0xb8));
  iStack_c = unaff_EBP + -0xb8;
  uStack_10 = 0x4e095a;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_c = 0x4e0966;
    FUN_00878dfb();
  }
  iVar2 = *(int *)(unaff_EBX + 0x104);
  *(undefined1 *)(unaff_EBP + -4) = 99;
  *(int *)(unaff_EBP + -0x28) = iVar2;
  if (iVar2 == 0) {
    iStack_c = 0x4e0988;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
    iStack_c = 0x4e0996;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar2 = FUN_0040e53d();
  uStack_14 = *(undefined4 *)(unaff_EBP + -0xb8);
  uStack_10 = *(undefined4 *)(unaff_EBP + -0xb4);
  iStack_c = *(undefined4 *)(unaff_EBP + -0xb0);
  iVar2 = (**(code **)(*piVar1 + 0x80))
                    (piVar1,6,0x25U - iVar2 >> 1,*(undefined4 *)(unaff_EBP + -0x28));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar2 = FUN_00402bc3(unaff_EBP + -0xb8);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
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


