/* FUN_006968f9 - 0x006968f9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006968f9(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  
  FUN_00879bb8();
  iStack_40 = 0x696912;
  FUN_0081622a();
  iStack_40 = 0x69691d;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_40 = unaff_EBP + -0x14;
  iStack_44 = 0x696934;
  FUN_00679d22();
  iStack_40 = *(undefined4 *)(extraout_ECX + 0x74);
  iStack_44 = unaff_EBP + 8;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_48 = 0x69694c;
  FUN_00550bc4();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00414ebb();
  iStack_40 = 0x696964;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_40 = unaff_EBP + -0x3c;
  iStack_44 = 0x696973;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_40 = 0x69697f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_40 = 0x696989;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iStack_40 = unaff_EBP + -0x2c;
  iStack_44 = 0x696993;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_40 = 0x69699f;
    FUN_00878dfb();
  }
  iStack_40 = unaff_EBP + -0x2c;
  iStack_48 = unaff_EBP + -0x18;
  iStack_44 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_44 = 0x6969c3;
  iStack_44 = FUN_00449749();
  iStack_48 = 0x6969cc;
  uVar2 = FUN_00449713();
  *(int **)(unaff_EBP + -0x1c) = &iStack_48;
  FUN_00448a17(uVar2);
  uVar3 = 0x13;
  uVar2 = 0x28;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_004115d9(0x28,0x13);
  FUN_00448e3a(uVar2,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    iStack_40 = 0x696a00;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_40 = 0x696a0d;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_40 = 0x696a18;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_40 = 0x696a25;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_40 = 0x696a30;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_40 = 0x696a4d;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


