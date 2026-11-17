/* ptr_004dffa8 - 0x004dffa8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004dffa8(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uStack_10;
  int iStack_c;
  char *pcStack_8;
  
  iStack_c = unaff_EBP + -0x10;
  pcStack_8 = s___s_s_00964dc4;
  uStack_10 = 0x4dffbc;
  FUN_00434e21();
  pcStack_8 = (char *)0x4dffce;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x1d8));
  pcStack_8 = (char *)(unaff_EBP + -0x1d8);
  iStack_c = 0x4dffdb;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    pcStack_8 = (char *)0x4dffe7;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  pcStack_8 = (char *)0x4dfff4;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x228));
  pcStack_8 = (char *)(unaff_EBP + -0x228);
  iStack_c = 0x4e0001;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    pcStack_8 = (char *)0x4e000d;
    FUN_00878dfb();
  }
  pcStack_8 = (char *)(unaff_EBP + -0x228);
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  iStack_c = 0x4e002a;
  iStack_c = FUN_00449749();
  uStack_10 = 0x4e0033;
  uVar3 = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_10;
  FUN_00448a17(uVar3);
  uVar4 = 7;
  uVar3 = 0x1b;
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  FUN_004115d9(0x1b,7);
  FUN_00448e3a(uVar3,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  pcStack_8 = (char *)0x4e0066;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_8 = (char *)0x4e0071;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  pcStack_8 = (char *)0x4e0081;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_8 = (char *)0x4e008c;
    FUN_00878dfb();
  }
  pcStack_8 = (char *)0x4e0095;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x198));
  pcStack_8 = (char *)(unaff_EBP + -0x198);
  iStack_c = 0x4e00a2;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    pcStack_8 = (char *)0x4e00ae;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  pcStack_8 = (char *)0x4e00bb;
  VariantInit((VARIANTARG *)(unaff_EBP + -0xf8));
  pcStack_8 = (char *)(unaff_EBP + -0xf8);
  iStack_c = 0x4e00c8;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    pcStack_8 = (char *)0x4e00d4;
    FUN_00878dfb();
  }
  pcStack_8 = (char *)(unaff_EBP + -0xf8);
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  iStack_c = 0x4e00f1;
  iStack_c = FUN_00449749();
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_10;
  FUN_00448a17(s_Guild_Alliance_Invitation__00964da8);
  uVar4 = 0x14;
  uVar3 = 0x1b;
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  FUN_004115d9(0x1b,0x14);
  FUN_00448e3a(uVar3,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  pcStack_8 = (char *)0x4e0129;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_8 = (char *)0x4e0134;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  pcStack_8 = (char *)0x4e0935;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_8 = (char *)0x4e0940;
    FUN_00878dfb();
  }
  pcStack_8 = (char *)0x4e094d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0xb8));
  pcStack_8 = (char *)(unaff_EBP + -0xb8);
  iStack_c = 0x4e095a;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    pcStack_8 = (char *)0x4e0966;
    FUN_00878dfb();
  }
  iVar2 = *(int *)(unaff_EBX + 0x104);
  *(undefined1 *)(unaff_EBP + -4) = 99;
  *(int *)(unaff_EBP + -0x28) = iVar2;
  if (iVar2 == 0) {
    pcStack_8 = (char *)0x4e0988;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
    pcStack_8 = (char *)0x4e0996;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar2 = FUN_0040e53d();
  uStack_10 = *(undefined4 *)(unaff_EBP + -0xb8);
  iStack_c = *(undefined4 *)(unaff_EBP + -0xb4);
  pcStack_8 = *(char **)(unaff_EBP + -0xb0);
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


