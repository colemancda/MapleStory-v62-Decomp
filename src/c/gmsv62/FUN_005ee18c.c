/* FUN_005ee18c - 0x005ee18c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005ee18c(void)

{
  int *piVar1;
  IBinding *pIVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int extraout_ECX;
  int unaff_EBP;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  
  FUN_00879bb8();
  uVar3 = FUN_0042452b();
  *(undefined4 *)(extraout_ECX + 0xcc) = 0xffffffff;
  *(uint *)(extraout_ECX + 0x124) = uVar3 & 0xff;
  FUN_005ea930();
  iStack_60 = 0x5ee1c8;
  FUN_0051548c();
  if (*(int *)(extraout_ECX + 0x124) == 0) {
    iStack_60 = 0x5ee1e0;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xd8),
               (IBinding *)0x0);
    iStack_60 = 0x5ee1ec;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xdc),
               (IBinding *)0x0);
    iStack_60 = 0x5ee1f4;
    FUN_005c9c3b();
    iStack_60 = 0xff;
    uStack_64 = 0xc00614a4;
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_68;
    uStack_6c = 0;
    uStack_70 = 0x5ee20b;
    FUN_00424e0a();
    uStack_6c = 0;
    uStack_70 = 0;
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_74;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00433bdf(extraout_ECX + 0x80);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00679d86(unaff_EBP + -0x10,0x1100);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uVar4 = FUN_00411641(0);
    puVar5 = (undefined4 *)FUN_0042e3f0(unaff_EBP + 8,uVar4);
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xe0);
    iStack_60 = 0x5ee261;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar5);
    FUN_00412600();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    iStack_60 = 0x5ee283;
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -4) = 4;
    iStack_60 = 0x5ee293;
    FUN_00403191();
    iVar6 = *(int *)this;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (iVar6 == 0) {
      iStack_60 = 0x5ee2a5;
      FUN_00878dfb();
    }
    piVar1 = *(int **)this;
    uStack_68 = *(undefined4 *)(unaff_EBP + -0x58);
    uStack_64 = *(undefined4 *)(unaff_EBP + -0x54);
    iVar6 = *piVar1;
    iStack_60 = *(undefined4 *)(unaff_EBP + -0x50);
    uStack_74 = *(undefined4 *)(unaff_EBP + -0x44);
    uStack_70 = *(undefined4 *)(unaff_EBP + -0x40);
    *(int **)(unaff_EBP + 8) = piVar1;
    uStack_6c = *(undefined4 *)(unaff_EBP + -0x3c);
    iVar6 = (**(code **)(iVar6 + 0x110))(piVar1,0,*(undefined4 *)(unaff_EBP + -0x48));
    if (iVar6 < 0) {
      FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar6 = FUN_00402bc3(unaff_EBP + -0x48);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar6 = unaff_EBP + -0x58;
  }
  else {
    FUN_005ee46d();
    iStack_60 = 0xff;
    uStack_64 = 0xc00614a4;
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_68;
    uStack_6c = 0;
    uStack_70 = 0x5ee320;
    FUN_00424e0a();
    uStack_6c = 0;
    uStack_70 = 0;
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_74;
    *(undefined4 *)(unaff_EBP + -4) = 6;
    FUN_00433bdf(extraout_ECX + 0x80);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00679d86(unaff_EBP + -0x10,0x10ff);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    uVar4 = FUN_00411641(0);
    puVar5 = (undefined4 *)FUN_0042e3f0(unaff_EBP + 8,uVar4);
    pIVar2 = (IBinding *)*puVar5;
    *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x14) =
         (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xe0);
    iStack_60 = 0x5ee37b;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0xe0),pIVar2);
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      iStack_60 = 0x5ee388;
      (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    iStack_60 = 0x5ee3a0;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_60 = unaff_EBP + -0x38;
    uStack_64 = 0x5ee3af;
    iVar6 = FUN_00402e32();
    if (iVar6 < 0) {
      iStack_60 = 0x5ee3bb;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 10;
    iStack_60 = 0x5ee3c8;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
    iStack_60 = unaff_EBP + -0x28;
    uStack_64 = 0x5ee3d2;
    iVar6 = FUN_00402e32();
    if (iVar6 < 0) {
      iStack_60 = 0x5ee3de;
      FUN_00878dfb();
    }
    piVar1 = *(int **)(unaff_EBP + -0x14);
    iVar6 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (iVar6 == 0) {
      iStack_60 = 0x5ee3f3;
      FUN_00878dfb();
    }
    piVar1 = (int *)*piVar1;
    uStack_68 = *(undefined4 *)(unaff_EBP + -0x38);
    uStack_64 = *(undefined4 *)(unaff_EBP + -0x34);
    iVar6 = *piVar1;
    iStack_60 = *(undefined4 *)(unaff_EBP + -0x30);
    uStack_74 = *(undefined4 *)(unaff_EBP + -0x24);
    uStack_70 = *(undefined4 *)(unaff_EBP + -0x20);
    *(int **)(unaff_EBP + 8) = piVar1;
    uStack_6c = *(undefined4 *)(unaff_EBP + -0x1c);
    iVar6 = (**(code **)(iVar6 + 0x110))(piVar1,0,*(undefined4 *)(unaff_EBP + -0x28));
    if (iVar6 < 0) {
      FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iVar6 = FUN_00402bc3(unaff_EBP + -0x28);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar6 = unaff_EBP + -0x38;
  }
  iVar6 = FUN_00402bc3(iVar6);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


