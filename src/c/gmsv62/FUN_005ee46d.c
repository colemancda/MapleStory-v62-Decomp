/* FUN_005ee46d - 0x005ee46d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005ee46d(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  int *piStack_90;
  char *pcStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int *piStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  
  FUN_00879bb8();
  FUN_005ea2dd();
  iVar2 = extraout_ECX_00;
  if (*(int *)(*(int *)(extraout_ECX + 0x98) + 0x1c) != 0) {
    iStack_44 = 0xff;
    iStack_48 = 0;
    iStack_50 = extraout_ECX + 0xd4;
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_4c;
    uStack_54 = 0x5ee4ae;
    FUN_0041160e();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_50 = 0x5ee4b8;
    FUN_00424e27();
    iStack_50 = 0x5ee4bf;
    iStack_50 = FUN_0042fb34();
    iStack_50 = -iStack_50;
    uStack_54 = 0;
    iStack_5c = extraout_ECX + 0x80;
    *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_58;
    iStack_60 = 0x5ee4d5;
    FUN_00433bdf();
    iStack_5c = 0x683;
    iStack_60 = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_64 = (int *)0x5ee4ec;
    FUN_00679d86();
    iStack_5c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_60 = 0x5ee4f8;
    iStack_60 = FUN_00411641();
    piStack_64 = (int *)(unaff_EBP + -0x10);
    iStack_68 = 0x5ee502;
    puVar1 = (undefined4 *)FUN_0042e3f0();
    iStack_44 = 0x5ee512;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xd8),
               (IBinding *)*puVar1);
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      iStack_44 = 0x5ee51f;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    iStack_44 = 0x5ee537;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
    iStack_44 = unaff_EBP + -0x3c;
    iStack_48 = 0x5ee545;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_44 = 0x5ee551;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 4;
    iStack_44 = 0x5ee55e;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_44 = unaff_EBP + -0x2c;
    iStack_48 = 0x5ee56c;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_44 = 0x5ee578;
      FUN_00878dfb();
    }
    iVar2 = *(int *)(extraout_ECX + 0xd8);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar2 == 0) {
      iStack_44 = 0x5ee594;
      FUN_00878dfb();
    }
    piStack_64 = *(int **)(extraout_ECX + 0xd8);
    uStack_4c = *(undefined4 *)(unaff_EBP + -0x3c);
    iStack_48 = *(int *)(unaff_EBP + -0x38);
    iVar2 = *piStack_64;
    iStack_44 = *(undefined4 *)(unaff_EBP + -0x34);
    iStack_5c = *(undefined4 *)(unaff_EBP + -0x2c);
    uStack_58 = *(undefined4 *)(unaff_EBP + -0x28);
    uStack_54 = *(undefined4 *)(unaff_EBP + -0x24);
    iStack_60 = 0x20;
    *(int **)(unaff_EBP + -0x14) = piStack_64;
    iStack_50 = *(undefined4 *)(unaff_EBP + -0x20);
    iStack_68 = 0x5ee5bc;
    iVar2 = (**(code **)(iVar2 + 0x110))();
    if (iVar2 < 0) {
      iStack_44 = *(undefined4 *)(unaff_EBP + -0x14);
      uStack_4c = 0x5ee5ce;
      iStack_48 = iVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_44 = 0x5ee5db;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_44 = 0x5ee5e6;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = unaff_EBP + -0x3c;
    iStack_44 = 0x5ee5f3;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_44 = 0x5ee5fe;
      FUN_00878dfb();
      iVar2 = extraout_ECX_01;
    }
  }
  if (*(int *)(*(int *)(extraout_ECX + 0x98) + 0x18) == 0) {
    iStack_44 = 0;
    iStack_48 = 0;
    uStack_4c = 0;
    iStack_50 = 0;
    uStack_54 = 0;
    uStack_58 = 0;
    iStack_5c = 0x3e9;
    *(int **)(unaff_EBP + -0x1c) = &iStack_60;
    iStack_68 = 0x5ee62d;
    piStack_64 = (int *)(extraout_ECX + 0x80);
    iStack_60 = iVar2;
    FUN_00433bdf();
    iStack_68 = extraout_ECX + 0xd4;
    *(int ***)(unaff_EBP + -0x18) = &piStack_64;
    uStack_6c = 0x5ee63f;
    FUN_0041160e();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_68 = 0x5ee651;
    iStack_68 = FUN_00449713();
    uStack_6c = 0x5ee659;
    uStack_70 = FUN_00560272();
    pcStack_8c = *(char **)(*(int *)(extraout_ECX + 0x98) + 8);
    if ((pcStack_8c != (char *)0x0) && (*pcStack_8c != '\0')) {
      uStack_6c = 0;
      uStack_74 = 0;
      uStack_78 = 0;
      uStack_7c = 0;
      uStack_80 = 0;
      uStack_84 = 0;
      uStack_88 = 0x3ea;
      *(char ***)(unaff_EBP + -0x1c) = &pcStack_8c;
      piStack_90 = (int *)(extraout_ECX + 0x80);
      FUN_00433bdf();
      *(int ***)(unaff_EBP + -0x18) = &piStack_90;
      FUN_0041160e(extraout_ECX + 0xd4);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      uVar4 = FUN_00449713();
      FUN_00560272(uVar4);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


