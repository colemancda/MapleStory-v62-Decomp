/* FUN_004fdab3 - 0x004fdab3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004fdab3(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puStack_7c;
  int *piStack_78;
  int iStack_74;
  undefined *puStack_70;
  int *piStack_6c;
  int *piStack_68;
  
  FUN_00879bb8();
  if ((*(int *)(extraout_ECX + 0x44) != 0) && (*(int *)(extraout_ECX + 0xc) == 1)) {
    if (*(int *)(extraout_ECX + 0x44) == 0) {
      FUN_00878dfb();
    }
    piVar3 = *(int **)(extraout_ECX + 0x44);
    piStack_6c = (int *)(**(code **)(*piVar3 + 0x40))();
    if ((int)piStack_6c < 0) {
      puStack_70 = (undefined *)0x4fdb0a;
      piStack_68 = piVar3;
      FUN_00878e09();
    }
    piStack_68 = (int *)0xff;
    piStack_6c = (int *)0xc0061378;
    *(undefined ***)(unaff_EBP + -0x14) = &puStack_70;
    iStack_74 = 0;
    piStack_78 = (int *)0x4fdb21;
    FUN_00424e0a();
    iStack_74 = 0;
    piStack_78 = (int *)0x0;
    *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_7c;
    puStack_7c = extraout_ECX_00;
    FUN_00433bdf(extraout_ECX + 0x44);
    uVar1 = FUN_004091f9(*(int *)(extraout_ECX + 0x24) != 0);
    puVar2 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x10,uVar1);
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x40);
    piStack_68 = (int *)0x4fdb5c;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar2);
    FUN_00412600();
    if (*(int *)this == 0) {
      piStack_68 = (int *)0x4fdb72;
      FUN_00878dfb();
    }
    piStack_68 = (int *)0x4fdb7d;
    piVar3 = (int *)FUN_004113e5();
    *(int **)(unaff_EBP + -0x10) = piVar3;
    iVar4 = *piVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar4 == 0) {
      piStack_68 = (int *)0x4fdb91;
      FUN_00878dfb();
      piVar3 = *(int **)(unaff_EBP + -0x10);
    }
    piStack_6c = (int *)*piVar3;
    iVar4 = *piStack_6c;
    piStack_68 = (int *)0x0;
    *(int **)(unaff_EBP + -0x10) = piStack_6c;
    puStack_70 = (undefined *)0x4fdba1;
    iVar4 = (**(code **)(iVar4 + 0x40))();
    if (iVar4 < 0) {
      puStack_70 = &DAT_00963d08;
      iStack_74 = *(undefined4 *)(unaff_EBP + -0x10);
      puStack_7c = (undefined4 *)0x4fdbb3;
      piStack_78 = (int *)iVar4;
      FUN_00878e09();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_70 = (undefined *)0x4fdbbf;
    FUN_004125d9();
    puStack_70 = (undefined *)0x4e8;
    iStack_74 = unaff_EBP + -0x14;
    piStack_78 = (int *)0x4fdbd2;
    puVar2 = (undefined4 *)FUN_00679d86();
    uVar1 = *puVar2;
    puStack_70 = (undefined *)0x0;
    iStack_74 = 0;
    piStack_78 = (int *)0x0;
    puStack_7c = (undefined4 *)0x1;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_0045af91(uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      puStack_70 = (undefined *)(*(int *)(unaff_EBP + -0x14) + -0xc);
      iStack_74 = 0x4fdbfe;
      FUN_00403384();
    }
    if (*(int *)(extraout_ECX + 0xc) != 0) {
      if (*(int *)this == 0) {
        puStack_70 = (undefined *)0x80004003;
        iStack_74 = 0x4fdc16;
        FUN_00878dfb();
      }
      puStack_70 = (undefined *)(unaff_EBP + -0x10);
      iStack_74 = 0x4fdc21;
      piVar3 = (int *)FUN_004113e5();
      *(int **)(unaff_EBP + -0x14) = piVar3;
      iVar4 = *piVar3;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      if (iVar4 == 0) {
        puStack_70 = (undefined *)0x80004003;
        iStack_74 = 0x4fdc39;
        FUN_00878dfb();
        piVar3 = *(int **)(unaff_EBP + -0x14);
      }
      piStack_78 = (int *)*piVar3;
      iVar4 = *piStack_78;
      puStack_70 = (undefined *)0x0;
      iStack_74 = 0;
      *(int **)(unaff_EBP + -0x14) = piStack_78;
      puStack_7c = (undefined4 *)0x4fdc49;
      iVar4 = (**(code **)(iVar4 + 0x40))();
      if (iVar4 < 0) {
        puStack_7c = (undefined4 *)&DAT_00963d08;
        FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x14));
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      puStack_7c = (undefined4 *)0x4fdc67;
      FUN_004125d9();
      puStack_7c = &DAT_00980690;
      FUN_00403191();
      iVar4 = *(int *)this;
      *(undefined4 *)(unaff_EBP + -4) = 3;
      if (iVar4 == 0) {
        puStack_7c = (undefined4 *)0x80004003;
        FUN_00878dfb();
      }
      puStack_7c = (undefined4 *)0x4fdc90;
      iVar4 = FUN_0042a378();
      puStack_7c = (undefined4 *)0x3;
      FUN_004031b7(iVar4 + *(int *)(extraout_ECX + 0x20) * 1000);
      iVar4 = *(int *)this;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (iVar4 == 0) {
        puStack_7c = (undefined4 *)0x80004003;
        FUN_00878dfb();
      }
      puStack_7c = (undefined4 *)(unaff_EBP + -0x10);
      piVar3 = (int *)FUN_004113e5();
      iVar4 = *piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (iVar4 == 0) {
        puStack_7c = (undefined4 *)0x80004003;
        FUN_00878dfb();
      }
      piVar3 = (int *)*piVar3;
      iVar4 = *piVar3;
      puStack_7c = *(undefined4 **)(unaff_EBP + -0x28);
      *(int **)(unaff_EBP + -0x14) = piVar3;
      iVar4 = (**(code **)(iVar4 + 0x90))
                        (piVar3,0xff,0xff,*(undefined4 *)(unaff_EBP + -0x24),
                         *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                         *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c));
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
      }
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x24);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x34);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      if (*(int *)(extraout_ECX + 0x44) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = *(int **)(extraout_ECX + 0x44);
      iVar4 = (**(code **)(*piVar3 + 0x40))
                        (piVar3,((-(uint)(*(int *)(extraout_ECX + 0x24) != 0) & 0xfffffffe) + 1) *
                                100 + *(int *)(extraout_ECX + 0x10),
                         *(int *)(extraout_ECX + 0x18) + -100);
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,piVar3,&DAT_00963d08);
      }
      FUN_00424aee(&DAT_00980690);
      uVar1 = 3;
      *(undefined4 *)(unaff_EBP + -4) = 6;
      FUN_00424e27(3);
      iVar4 = FUN_0042a378();
      FUN_004295f1(iVar4 + *(int *)(extraout_ECX + 0x20) * 1000,uVar1);
      iVar4 = unaff_EBP + -0x54;
      iVar6 = unaff_EBP + -0x44;
      uVar1 = *(undefined4 *)(extraout_ECX + 0x18);
      uVar5 = *(undefined4 *)(extraout_ECX + 0x10);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00424df4(uVar5,uVar1,iVar6,iVar4);
      FUN_00424f2f(uVar5,uVar1,iVar6,iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x44);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x54);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


