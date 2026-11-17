/* FUN_00592d42 - 0x00592d42 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00592d42(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_94;
  int iStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  
  FUN_00879bb8();
  iVar4 = *(int *)(unaff_EBP + 8);
  if (*(int *)(extraout_ECX + 0xd4) != iVar4) {
    *(int *)(extraout_ECX + 0xd4) = iVar4;
    if (iVar4 < 0) {
      iStack_80 = 0x592d7d;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xe4),
                 (IBinding *)0x0);
    }
    else {
      iStack_80 = unaff_EBP + -0x48;
      uStack_84 = 0x592d8e;
      FUN_00592cf6();
      iStack_80 = 0x592d99;
      puVar1 = (undefined4 *)FUN_004489f5();
      *(undefined4 *)(unaff_EBP + 8) = *puVar1;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iStack_80 = 0x592dac;
      puVar1 = (undefined4 *)FUN_004489f5();
      iStack_80 = 0xff;
      uStack_84 = 1;
      *(undefined4 *)(unaff_EBP + -0x10) = *puVar1;
      iStack_8c = unaff_EBP + 8;
      *(undefined4 **)(unaff_EBP + -0x24) = &uStack_88;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_90 = 0x592dcc;
      FUN_0052359e();
      iStack_8c = *(int *)(unaff_EBP + -0x44) + 7;
      iStack_90 = *(int *)(unaff_EBP + -0x48) + 0x14;
      *(undefined4 **)(unaff_EBP + -0x28) = &uStack_94;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00523572(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00679d86(unaff_EBP + -0x18,0x555);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uVar2 = FUN_00411641(0);
      puVar1 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x14,uVar2);
      this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xe4);
      iStack_80 = 0x592e2c;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar1);
      FUN_00412600();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00402676();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        iStack_80 = 0x592e51;
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
        iStack_80 = 0x592e62;
        (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
      }
      iStack_80 = 0x592e70;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -4) = 6;
      iStack_80 = 0x592e80;
      FUN_00403191();
      iVar4 = *(int *)this;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (iVar4 == 0) {
        iStack_80 = 0x592e92;
        FUN_00878dfb();
      }
      iStack_80 = 0x592e9d;
      piVar3 = (int *)FUN_004113e5();
      iVar4 = *piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (iVar4 == 0) {
        iStack_80 = 0x592eb1;
        FUN_00878dfb();
      }
      piVar3 = (int *)*piVar3;
      uStack_88 = *(undefined4 *)(unaff_EBP + -0x68);
      uStack_84 = *(undefined4 *)(unaff_EBP + -100);
      iVar4 = *piVar3;
      iStack_80 = *(undefined4 *)(unaff_EBP + -0x60);
      uStack_94 = *(undefined4 *)(unaff_EBP + -0x54);
      iStack_90 = *(undefined4 *)(unaff_EBP + -0x50);
      *(int **)(unaff_EBP + 8) = piVar3;
      iStack_8c = *(undefined4 *)(unaff_EBP + -0x4c);
      iVar4 = (**(code **)(iVar4 + 0x90))(piVar3,200,0,*(undefined4 *)(unaff_EBP + -0x58));
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
      }
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x58);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x68);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
      iVar4 = FUN_00402e32(unaff_EBP + -0x38,&DAT_00980690);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined4 *)(unaff_EBP + -4) = 9;
      FUN_00403191(&DAT_00980690);
      iVar4 = *(int *)this;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      if (iVar4 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = *(int **)this;
      iVar4 = (**(code **)(*piVar3 + 0x110))
                        (piVar3,0,*(undefined4 *)(unaff_EBP + -0x78),
                         *(undefined4 *)(unaff_EBP + -0x74),*(undefined4 *)(unaff_EBP + -0x70),
                         *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x38),
                         *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                         *(undefined4 *)(unaff_EBP + -0x2c));
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,piVar3,&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x78);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x38);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


