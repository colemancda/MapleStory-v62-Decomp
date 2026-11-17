/* ptr_006a704e - 0x006a704e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a704e(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int extraout_ECX;
  int unaff_EBP;
  int unaff_EDI;
  undefined4 uVar4;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_8 = 0x6a705b;
  FUN_00403191();
  iStack_8 = unaff_EBP + -0x2c;
  iStack_10 = unaff_EBP + -0x18;
  iStack_c = 0x10;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_c = 0x6a707f;
  iStack_c = FUN_00449749();
  iStack_10 = 0x6a7088;
  uVar1 = FUN_00449713();
  *(int **)(unaff_EBP + -0x1c) = &iStack_10;
  FUN_00448a17(uVar1);
  uVar4 = 0x47;
  uVar1 = 0x28;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_004115d9(0x28,0x47);
  FUN_00448e3a(uVar1,uVar4);
  FUN_004497b5();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_8 = 0x6a70c0;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_8 = 0x6a70cb;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_8 = 0x6a70d8;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_8 = 0x6a70e3;
    FUN_00878dfb();
  }
  iStack_8 = 0x6a70ec;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_8 = 0x6a70f9;
  FUN_00403191();
  iStack_8 = unaff_EBP + -0x3c;
  iStack_10 = unaff_EBP + -0x18;
  iStack_c = 0xf;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_c = 0x6a711d;
  iStack_c = FUN_00449749();
  iStack_10 = 0x6a7126;
  uVar1 = FUN_00449713();
  *(int **)(unaff_EBP + -0x1c) = &iStack_10;
  iStack_10 = extraout_ECX;
  FUN_00448a17(uVar1);
  uVar4 = 0x46;
  uVar1 = 0x27;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_004115d9(0x27,0x46);
  FUN_00448e3a(uVar1,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    iStack_8 = 0x6a715a;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_8 = 0x6a7167;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_8 = 0x6a7172;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_8 = 0x6a717f;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_8 = 0x6a718a;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EDI + 0xb4) == 0) {
    iStack_8 = 0xff;
    iStack_c = 0x6a71a3;
    FUN_004031b7();
    iVar2 = *(int *)(*(int *)(unaff_EDI + 0x7c) + 0x48);
    piVar3 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    uVar1 = *(undefined4 *)(unaff_EDI + 0x80 + (uint)(iVar2 != 0) * 4);
    if (piVar3 == (int *)0x0) {
      iStack_8 = 0x6a71cc;
      FUN_00878dfb();
      piVar3 = *(int **)(unaff_EBP + 8);
    }
    iVar2 = *piVar3;
    iStack_10 = *(int *)(unaff_EBP + -0x3c);
    iStack_c = *(int *)(unaff_EBP + -0x38);
    iStack_8 = *(undefined4 *)(unaff_EBP + -0x34);
    *(int **)(unaff_EBP + -0x18) = piVar3;
    iVar2 = (**(code **)(iVar2 + 0x80))(piVar3,0x14,0x41,uVar1);
    if (iVar2 < 0) {
      iStack_8 = *(undefined4 *)(unaff_EBP + -0x18);
      iStack_10 = 0x6a71fe;
      iStack_c = iVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
  }
  else {
    if (*(int *)(unaff_EDI + 0xb4) != 2) goto LAB_006a7280;
    iStack_8 = 0xff;
    iStack_c = 0x6a721b;
    FUN_004031b7();
    piVar3 = *(int **)(unaff_EBP + 8);
    uVar1 = *(undefined4 *)(unaff_EDI + 0x84);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (piVar3 == (int *)0x0) {
      iStack_8 = 0x6a7236;
      FUN_00878dfb();
      piVar3 = *(int **)(unaff_EBP + 8);
    }
    iVar2 = *piVar3;
    iStack_10 = *(int *)(unaff_EBP + -0x3c);
    iStack_c = *(int *)(unaff_EBP + -0x38);
    iStack_8 = *(undefined4 *)(unaff_EBP + -0x34);
    *(int **)(unaff_EBP + -0x18) = piVar3;
    iVar2 = (**(code **)(iVar2 + 0x80))(piVar3,0x14,0x41,uVar1);
    if (iVar2 < 0) {
      iStack_8 = *(undefined4 *)(unaff_EBP + -0x18);
      iStack_10 = 0x6a7268;
      iStack_c = iVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
  }
  iStack_8 = 0x6a7275;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_8 = 0x6a7280;
    FUN_00878dfb();
  }
LAB_006a7280:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_8 = 0x6a729d;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


