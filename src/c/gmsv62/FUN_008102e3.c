/* FUN_008102e3 - 0x008102e3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008102e3(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  uint extraout_ECX_01;
  int extraout_ECX_02;
  int unaff_EBP;
  int *piVar4;
  undefined1 auStack_7c [4];
  int iStack_78;
  int *piStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  uint uStack_5c;
  
  FUN_00879bb8();
  iVar1 = *(int *)(*(int *)(extraout_ECX + 0x94) + 0x38);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x18) = iVar1;
  *(int *)(unaff_EBP + -0x1c) = iVar1 * 0x1c;
  *(undefined4 *)(unaff_EBP + -0x10) = 0xc9;
  do {
    if (*(int *)(extraout_ECX + 0xc4) == *(int *)(unaff_EBP + -0x18)) {
      uStack_5c = 0xff;
      FUN_004031b7();
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(extraout_ECX + 0xbc);
      piVar4 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (piVar4 == (int *)0x0) {
        uStack_5c = 0x81034a;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + 8);
      }
      iVar1 = *piVar4;
      iStack_68 = *(int *)(unaff_EBP + -0x20);
      iStack_64 = *(int *)(unaff_EBP + -0x54);
      iStack_6c = *(int *)(unaff_EBP + -0x10) + -3;
      uStack_5c = *(uint *)(unaff_EBP + -0x4c);
      iStack_70 = 0x2c;
      *(int **)(unaff_EBP + -0x24) = piVar4;
      iStack_78 = 0x810371;
      piStack_74 = piVar4;
      iVar1 = (**(code **)(iVar1 + 0x80))();
      if (iVar1 < 0) {
        uStack_5c = *(uint *)(unaff_EBP + -0x24);
        iStack_64 = 0x810383;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uStack_5c = 0x810390;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        uStack_5c = 0x81039b;
        FUN_00878dfb();
      }
    }
    iVar1 = *(int *)(extraout_ECX + 0xa8);
    if ((iVar1 != 0) &&
       (uStack_5c = *(uint *)(unaff_EBP + -0x18), uStack_5c < *(uint *)(iVar1 + -4))) {
      piVar4 = (int *)(iVar1 + *(int *)(unaff_EBP + -0x1c));
      iVar1 = piVar4[6];
      *(uint **)(unaff_EBP + -0x24) = &uStack_5c;
      if (iVar1 != 0) {
        iStack_64 = 0x8103d7;
        InterlockedIncrement((LONG *)(iVar1 + 4));
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0048b97b();
      uStack_5c = FUN_0055540f();
      iStack_64 = 0;
      iStack_68 = 0;
      iStack_6c = 0x8103f4;
      piVar2 = (int *)FUN_0053793e();
      iStack_6c = 0x8103fb;
      iStack_6c = (**(code **)(*piVar2 + 4))();
      iStack_70 = *(int *)(unaff_EBP + -0x10) + 0x1f;
      piStack_74 = (int *)&DAT_00000009;
      iStack_78 = *piVar4;
      *(undefined1 **)(unaff_EBP + -0x24) = auStack_7c;
      FUN_0046fc23(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_0048b97b();
      FUN_005558b0();
      if (piVar4[3] == 0) {
        uStack_5c = 0;
      }
      else {
        uStack_5c = FUN_00409205();
      }
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      FUN_00414edd();
      *(uint **)(unaff_EBP + -0x24) = &uStack_5c;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_64 = 0x81045f;
      FUN_0046fcc9();
      iStack_64 = 0x810468;
      FUN_007d3a22();
      uStack_5c = 0x810477;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
      uStack_5c = unaff_EBP - 0x44;
      iVar1 = FUN_00402e32();
      if (iVar1 < 0) {
        uStack_5c = 0x810491;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_5c = 0x81049b;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
      uStack_5c = unaff_EBP - 0x34;
      iVar1 = FUN_00402e32();
      if (iVar1 < 0) {
        uStack_5c = 0x8104b5;
        FUN_00878dfb();
      }
      uStack_5c = unaff_EBP - 0x34;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_004458be();
      iStack_64 = 0x8104d2;
      iStack_68 = FUN_00449713();
      *(int **)(unaff_EBP + -0x24) = &iStack_64;
      iStack_6c = 0x8104de;
      iStack_64 = extraout_ECX_00;
      FUN_00448a17();
      iVar1 = *(int *)(unaff_EBP + -0x10);
      iStack_6c = 0x32;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_70 = 0x8104f3;
      iStack_68 = iVar1;
      FUN_0044974c();
      iStack_70 = 0x8104fa;
      FUN_005c1d2c();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_5c = 0x810507;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        uStack_5c = 0x810512;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      uStack_5c = 0x81051f;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        uStack_5c = 0x81052a;
        FUN_00878dfb();
      }
      iVar3 = *piVar4 / 1000000;
      if (((iVar3 == 2) || (iVar3 == 3)) || (iVar3 == 4)) {
        (**(code **)(*(int *)piVar4[6] + 0x18))();
        *(uint **)(unaff_EBP + -0x24) = &uStack_5c;
        iStack_64 = 0x810563;
        uStack_5c = extraout_ECX_01;
        FUN_00424dbc();
        iStack_64 = iVar1 + 0x11;
        iStack_68 = 7;
        iStack_70 = unaff_EBP + 8;
        *(int **)(unaff_EBP + -0x24) = &iStack_6c;
        piStack_74 = (int *)0x810579;
        iStack_6c = extraout_ECX_02;
        FUN_0046fc23();
        iStack_70 = 0x81057e;
        FUN_007d3201();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
    }
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x1c;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x28;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
  } while (*(int *)(unaff_EBP + -0x10) < 0x119);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    uStack_5c = 0x8105b6;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


