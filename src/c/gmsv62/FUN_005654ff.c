/* FUN_005654ff - 0x005654ff in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005654ff(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var8;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  
  FUN_00879bb8();
  iVar4 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  if (iVar4 < 0) {
    iStack_48 = 0x565529;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x188),
               (IBinding *)0x0);
    iStack_48 = 0x565535;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x184),
               (IBinding *)0x0);
  }
  else {
    if (*(int *)(extraout_ECX + 0x13c) == 4) {
      iVar5 = *(int *)(unaff_EBP + -0x10);
      iStack_48 = 0x565803;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar5 + 0x188),(IBinding *)0x0)
      ;
      iStack_48 = 0xff;
      uStack_4c = 10;
      *(undefined4 **)(unaff_EBP + -0x20) = &uStack_50;
      iStack_54 = 0;
      iStack_58 = 0x565819;
      FUN_00424e0a();
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_5c;
      *(undefined4 *)(unaff_EBP + -4) = 0xc;
      iStack_58 = (iVar4 % 3) * 0x75 + -199;
      iStack_54 = (iVar4 / 3) * 0x75 + -0x8c;
      FUN_0056a764();
      FUN_004458c1();
      FUN_00429328();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      FUN_00411641();
      piVar7 = (int *)FUN_0042e3f0();
      piVar7 = (int *)*piVar7;
      piVar2 = *(int **)(iVar5 + 0x184);
      piVar1 = (int *)(iVar5 + 0x184);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      if (piVar2 != piVar7) {
        *piVar1 = (int)piVar7;
        FUN_00424ed4();
        if (piVar2 != (int *)0x0) {
          iStack_48 = 0x565896;
          (**(code **)(*piVar2 + 8))();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
        iStack_48 = 0x5658a7;
        (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      iStack_48 = 0x5658bf;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
      iStack_48 = unaff_EBP + -0x30;
      uStack_4c = 0x5658ce;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        iStack_48 = 0x5658da;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0x11;
      iStack_48 = 0x5658e7;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
      iStack_48 = unaff_EBP + -0x40;
      uStack_4c = 0x5658f1;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        iStack_48 = 0x5658fd;
        FUN_00878dfb();
      }
      iVar4 = *piVar1;
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      if (iVar4 == 0) {
        iStack_48 = 0x565910;
        FUN_00878dfb();
      }
      piVar1 = (int *)*piVar1;
      uStack_50 = *(undefined4 *)(unaff_EBP + -0x30);
      uStack_4c = *(undefined4 *)(unaff_EBP + -0x2c);
      iStack_48 = *(undefined4 *)(unaff_EBP + -0x28);
      uStack_5c = *(undefined4 *)(unaff_EBP + -0x3c);
      iStack_58 = *(undefined4 *)(unaff_EBP + -0x38);
      iStack_54 = *(undefined4 *)(unaff_EBP + -0x34);
      iVar4 = (**(code **)(*piVar1 + 0x110))();
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x40);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar4 = unaff_EBP + -0x30;
    }
    else {
      iStack_48 = 0xff;
      uStack_4c = 0xc00614a4;
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_50;
      iStack_54 = 0;
      iStack_58 = 0x56555e;
      FUN_00424e0a();
      iStack_54 = 0xfffffed4;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iStack_58 = (iVar4 % 3) * 0x7d + -0x8c;
      uStack_5c = 3;
      *(int *)(unaff_EBP + -0x18) = iStack_58;
      *(undefined4 **)(unaff_EBP + -0x20) = &uStack_5c;
      FUN_0056a764();
      FUN_004458c1();
      FUN_00429328();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00411641();
      puVar3 = (undefined4 *)FUN_0042e3f0();
      p_Var8 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x188);
      iStack_48 = 0x5655d4;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var8,(IBinding *)*puVar3);
      FUN_00412600();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      iStack_48 = 0x5655f6;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -4) = 4;
      iStack_48 = 0x565606;
      FUN_00403191();
      iVar4 = *(int *)p_Var8;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (iVar4 == 0) {
        iStack_48 = 0x565618;
        FUN_00878dfb();
      }
      uStack_50 = *(undefined4 *)(unaff_EBP + -0x30);
      uStack_4c = *(undefined4 *)(unaff_EBP + -0x2c);
      iVar4 = **(int **)p_Var8;
      iStack_48 = *(undefined4 *)(unaff_EBP + -0x28);
      uStack_5c = *(undefined4 *)(unaff_EBP + -0x3c);
      iStack_58 = *(undefined4 *)(unaff_EBP + -0x38);
      *(int **)(unaff_EBP + 8) = *(int **)p_Var8;
      iStack_54 = *(undefined4 *)(unaff_EBP + -0x34);
      iVar4 = (**(code **)(iVar4 + 0x110))();
      if (iVar4 < 0) {
        iStack_70 = *(undefined4 *)(unaff_EBP + 8);
        iStack_78 = 0x565654;
        iStack_74 = iVar4;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_70 = 0x565661;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        iStack_70 = 0x56566c;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar4 = unaff_EBP + -0x30;
      iStack_70 = 0x565679;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_70 = 0x565684;
        FUN_00878dfb();
        iVar4 = extraout_ECX_00;
      }
      iStack_70 = 0xff;
      iStack_74 = 0xc00614a4;
      *(int **)(unaff_EBP + -0x20) = &iStack_78;
      uStack_7c = 0;
      uStack_80 = 0x56569b;
      iStack_78 = iVar4;
      FUN_00424e0a();
      uStack_7c = 0xfffffed4;
      uStack_80 = *(undefined4 *)(unaff_EBP + -0x18);
      *(undefined4 *)(unaff_EBP + -4) = 6;
      puVar3 = &uStack_84;
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_84;
      FUN_0056a764(&uStack_84);
      FUN_004458c1();
      FUN_00429328(puVar3);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00679d86(unaff_EBP + -0x14,0x522);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      uVar6 = FUN_00411641(0);
      puVar3 = (undefined4 *)FUN_0042e3f0(unaff_EBP + 8,uVar6);
      p_Var8 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (*(int *)(unaff_EBP + -0x10) + 0x184);
      iStack_70 = 0x565706;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var8,(IBinding *)*puVar3);
      if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
        iStack_70 = 0x565713;
        (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      iStack_70 = 0x56572b;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
      iStack_70 = unaff_EBP + -0x40;
      iStack_74 = 0x565735;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        iStack_70 = 0x565741;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 10;
      iStack_70 = 0x56574e;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
      iStack_70 = unaff_EBP + -0x30;
      iStack_74 = 0x565758;
      iVar4 = FUN_00402e32();
      if (iVar4 < 0) {
        iStack_70 = 0x565764;
        FUN_00878dfb();
      }
      iVar4 = *(int *)p_Var8;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      if (iVar4 == 0) {
        iStack_70 = 0x565777;
        FUN_00878dfb();
      }
      piVar1 = *(int **)p_Var8;
      iStack_78 = *(int *)(unaff_EBP + -0x40);
      iStack_74 = *(int *)(unaff_EBP + -0x3c);
      iStack_70 = *(undefined4 *)(unaff_EBP + -0x38);
      uStack_84 = *(undefined4 *)(unaff_EBP + -0x2c);
      uStack_80 = *(undefined4 *)(unaff_EBP + -0x28);
      uStack_7c = *(undefined4 *)(unaff_EBP + -0x24);
      iVar4 = (**(code **)(*piVar1 + 0x110))(piVar1,0,*(undefined4 *)(unaff_EBP + -0x30));
      if (iVar4 < 0) {
        FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x30);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar4 = unaff_EBP + -0x40;
    }
    iVar4 = FUN_00402bc3(iVar4);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x4d9);
    uVar6 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0x13;
    FUN_007d3cdd(uVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


