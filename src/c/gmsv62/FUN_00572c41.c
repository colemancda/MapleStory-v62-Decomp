/* FUN_00572c41 - 0x00572c41 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00572c41(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar7;
  int iStack_b8;
  int iStack_b4;
  int *piStack_ac;
  undefined *puStack_a8;
  int *piStack_a4;
  undefined1 *puStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int *piStack_78;
  int *piStack_74;
  
  FUN_00879bb8();
  if (**(int **)(unaff_EBP + 0xc) == 0) {
    piVar6 = *(int **)(unaff_EBP + 8);
    FUN_0056a7a6();
    piStack_74 = (int *)0x572c7c;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (extraout_ECX + 0x98 + (int)piVar6 * 4),(IBinding *)0x0);
    if ((int)piVar6 + *(int *)(extraout_ECX + 0xf8) * 3 < *(int *)(extraout_ECX + 0xf4)) {
      piStack_74 = (int *)0x572c9e;
      puVar3 = (undefined4 *)FUN_004489f5();
      *(undefined4 *)(unaff_EBP + 0xc) = *puVar3;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      piStack_74 = (int *)0x572cb1;
      puVar3 = (undefined4 *)FUN_004489f5();
      piStack_74 = (int *)0xff;
      piStack_78 = (int *)0x0;
      *(undefined4 *)(unaff_EBP + -0x10) = *puVar3;
      iStack_80 = unaff_EBP + 0xc;
      *(int **)(unaff_EBP + -0x28) = &iStack_7c;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_84 = 0x572cd0;
      FUN_0052359e();
      iStack_80 = 0x50;
      iStack_84 = (int)piVar6 * 0x7d + 0xaa;
      *(int *)(unaff_EBP + -0x24) = iStack_84;
      *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_88;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00523572();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_004091f9();
      puVar3 = (undefined4 *)FUN_0042e3f0();
      p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (extraout_ECX + 0xb0 + (int)piVar6 * 4);
      piStack_74 = (int *)0x572d33;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar3);
      FUN_00412600();
      FUN_00402fa6();
      FUN_00412600();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00412600();
      if (*(int *)p_Var1 == 0) {
        piStack_74 = (int *)0x572d65;
        FUN_00878dfb();
      }
      piStack_74 = *(int **)p_Var1;
      iVar4 = *piStack_74;
      *(int **)(unaff_EBP + 0xc) = piStack_74;
      piStack_78 = (int *)0x572d75;
      iVar4 = (**(code **)(iVar4 + 0xe0))();
      if (iVar4 < 0) {
        piStack_78 = (int *)&DAT_00963df8;
        iStack_7c = *(int *)(unaff_EBP + 0xc);
        iStack_84 = 0x572d87;
        iStack_80 = iVar4;
        FUN_00878e09();
      }
      piStack_78 = &DAT_00980690;
      iStack_7c = 0x572d94;
      FUN_00403191();
      piStack_78 = &DAT_00980690;
      *(undefined4 *)(unaff_EBP + -4) = 6;
      iStack_7c = 0x572da8;
      FUN_00403191();
      iVar4 = *(int *)p_Var1;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (iVar4 == 0) {
        piStack_78 = (int *)0x80004003;
        iStack_7c = 0x572dba;
        FUN_00878dfb();
      }
      iStack_84 = *(int *)(unaff_EBP + -0x3c);
      iStack_80 = *(undefined4 *)(unaff_EBP + -0x38);
      iVar4 = **(int **)p_Var1;
      iStack_7c = *(int *)(unaff_EBP + -0x34);
      piStack_78 = *(int **)(unaff_EBP + -0x30);
      *(int **)(unaff_EBP + 0xc) = *(int **)p_Var1;
      puStack_88 = *(undefined1 **)(unaff_EBP + -0x40);
      iVar4 = (**(code **)(iVar4 + 0x110))();
      if (iVar4 < 0) {
        piStack_a4 = *(int **)(unaff_EBP + 0xc);
        piStack_ac = (int *)0x572df6;
        puStack_a8 = (undefined *)iVar4;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      piStack_a4 = (int *)0x572e03;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_a4 = (int *)0x572e0e;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piStack_a4 = (int *)0x572e1b;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_a4 = (int *)0x572e26;
        FUN_00878dfb();
      }
      piStack_a4 = (int *)0x572e31;
      puVar3 = (undefined4 *)FUN_004489f5();
      *(undefined4 *)(unaff_EBP + 0xc) = *puVar3;
      *(undefined4 *)(unaff_EBP + -4) = 8;
      piStack_a4 = (int *)0x572e48;
      puVar3 = (undefined4 *)FUN_004489f5();
      piStack_a4 = (int *)0xff;
      puStack_a8 = (undefined *)0x0;
      *(undefined4 *)(unaff_EBP + -0x20) = *puVar3;
      *(int ***)(unaff_EBP + -0x2c) = &piStack_ac;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_b4 = 0x572e67;
      FUN_0052359e();
      iStack_b4 = *(undefined4 *)(unaff_EBP + -0x24);
      *(int **)(unaff_EBP + -0x28) = &iStack_b8;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_00523572(unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00679e4e(unaff_EBP + -0x18,0x526);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      uVar5 = FUN_004091f9(0);
      puVar3 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x1c,uVar5);
      p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (extraout_ECX + 0xa4 + *(int *)(unaff_EBP + 8) * 4);
      piStack_a4 = (int *)0x572ec2;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar3);
      FUN_00412600();
      FUN_00402fa6();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        piStack_a4 = (int *)0x572ee3;
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        piStack_a4 = (int *)0x572ef4;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      if (*(int *)p_Var1 == 0) {
        piStack_a4 = (int *)0x572f02;
        FUN_00878dfb();
      }
      piVar6 = *(int **)p_Var1;
      puStack_a8 = (undefined *)0x572f0f;
      piStack_a4 = piVar6;
      iVar4 = (**(code **)(*piVar6 + 0xe0))();
      if (iVar4 < 0) {
        puStack_a8 = &DAT_00963df8;
        iStack_b4 = 0x572f23;
        piStack_ac = piVar6;
        FUN_00878e09();
      }
      goto LAB_00573394;
    }
  }
  else {
    FUN_004497c2();
    iStack_7c = *(int *)(unaff_EBP + 8) * 0x7d;
    piStack_74 = (int *)0x64;
    piStack_78 = (int *)0x50;
    *(int *)(unaff_EBP + -0x20) = iStack_7c;
    iStack_7c = iStack_7c + 0xaa;
    iStack_80 = 1;
    puStack_88 = (undefined1 *)&iStack_84;
    *(int **)(unaff_EBP + -0x2c) = &iStack_84;
    FUN_004489f5();
    puStack_88 = (undefined1 *)(unaff_EBP + -0x24);
    *(undefined4 *)(unaff_EBP + -4) = 0xe;
    FUN_004489f5();
    *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_88;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_0048bccf();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_0044972c();
    FUN_0043f082();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      piStack_74 = (int *)0x572fb2;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    piStack_74 = (int *)0x572fc0;
    FUN_00403191();
    piStack_78 = (int *)(*(int *)(unaff_EBP + 0xc) + 4);
    *(int ***)(unaff_EBP + 0xc) = &piStack_74;
    *(undefined4 *)(unaff_EBP + -4) = 0x12;
    iStack_7c = 0x572fdd;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    piStack_78 = (int *)0x572fec;
    FUN_0044974c();
    piStack_78 = (int *)0x572ff3;
    uVar5 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + 0xc) = uVar5;
    piStack_74 = (int *)0x573003;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_74 = (int *)0x57300e;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 0xc) < 0x29) {
      *(undefined4 *)(unaff_EBP + 0xc) = 0x3a;
    }
    else {
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 0x12;
    }
    piStack_74 = (int *)0x57302b;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
    piStack_74 = (int *)(unaff_EBP + -0x4c);
    piStack_78 = (int *)0x573035;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      piStack_74 = (int *)0x573041;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0x14;
    piStack_74 = (int *)0x573052;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
    piStack_74 = (int *)(unaff_EBP + -0x3c);
    piStack_78 = (int *)0x57305c;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      piStack_74 = (int *)0x573068;
      FUN_00878dfb();
    }
    bVar7 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (bVar7) {
      piStack_74 = (int *)0x57307e;
      FUN_00878dfb();
    }
    piStack_74 = (int *)(unaff_EBP + -0x3c);
    piStack_78 = (int *)0x0;
    iStack_7c = 0x16;
    iStack_80 = *(int *)(unaff_EBP + 0xc);
    iStack_84 = 0;
    puStack_88 = (undefined1 *)0xffffff9c;
    puVar3 = (undefined4 *)FUN_0042a39f();
    p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
             (extraout_ECX + 0x98 + *(int *)(unaff_EBP + 8) * 4);
    piStack_74 = (int *)0x5730b1;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar3);
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      piStack_74 = (int *)0x5730be;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    piStack_74 = (int *)0x5730cb;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_74 = (int *)0x5730d6;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piStack_74 = (int *)0x5730e3;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_74 = (int *)0x5730ee;
      FUN_00878dfb();
    }
    if (*(int *)p_Var1 == 0) {
      piStack_74 = (int *)0x5730fc;
      FUN_00878dfb();
    }
    piStack_74 = *(int **)p_Var1;
    iVar4 = *piStack_74;
    *(int **)(unaff_EBP + 0xc) = piStack_74;
    piStack_78 = (int *)0x57310c;
    iVar4 = (**(code **)(iVar4 + 0xe0))();
    if (iVar4 < 0) {
      piStack_78 = (int *)&DAT_00963df8;
      iStack_7c = *(int *)(unaff_EBP + 0xc);
      iStack_84 = 0x57311e;
      iStack_80 = iVar4;
      FUN_00878e09();
    }
    piStack_78 = (int *)(unaff_EBP + -0x24);
    iStack_7c = 0x573129;
    puVar3 = (undefined4 *)FUN_004489f5();
    piStack_78 = (int *)*puVar3;
    *(undefined2 *)(unaff_EBP + -0x4c) = 0xd;
    *(int **)(unaff_EBP + -0x44) = piStack_78;
    iVar4 = *piStack_78;
    *(undefined4 *)(unaff_EBP + -4) = 0x16;
    iStack_7c = 0x573141;
    (**(code **)(iVar4 + 4))();
    iVar4 = *(int *)p_Var1;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    if (iVar4 == 0) {
      iStack_7c = -0x7fffbffd;
      iStack_80 = 0x573153;
      FUN_00878dfb();
    }
    iVar4 = **(int **)p_Var1;
    puStack_88 = *(undefined1 **)(unaff_EBP + -0x4c);
    iStack_84 = *(int *)(unaff_EBP + -0x48);
    iStack_80 = *(undefined4 *)(unaff_EBP + -0x44);
    *(int **)(unaff_EBP + 0xc) = *(int **)p_Var1;
    iStack_7c = *(int *)(unaff_EBP + -0x40);
    iVar4 = (**(code **)(iVar4 + 0xfc))();
    if (iVar4 < 0) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    piVar6 = (int *)(extraout_ECX + 0x98 + *(int *)(unaff_EBP + 8) * 4);
    if (*(int *)(extraout_ECX + 0x98 + *(int *)(unaff_EBP + 8) * 4) == 0) {
      FUN_00878dfb();
    }
    iVar4 = (**(code **)(*(int *)*piVar6 + 0xb4))();
    if (iVar4 < 0) {
      piStack_a4 = (int *)0x5731e3;
      FUN_00878e09();
    }
    puVar3 = (undefined4 *)FUN_004489f5();
    piVar2 = (int *)*puVar3;
    *(undefined2 *)(unaff_EBP + -0x4c) = 0xd;
    *(int **)(unaff_EBP + -0x44) = piVar2;
    iVar4 = *piVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0x18;
    (**(code **)(iVar4 + 4))();
    iVar4 = *piVar6;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    if (iVar4 == 0) {
      FUN_00878dfb();
    }
    piStack_ac = (int *)*piVar6;
    iVar4 = *piStack_ac;
    puStack_a8 = *(undefined **)(unaff_EBP + -0x4c);
    piStack_a4 = *(int **)(unaff_EBP + -0x48);
    *(int **)(unaff_EBP + 0xc) = piStack_ac;
    iVar4 = (**(code **)(iVar4 + 100))();
    if (iVar4 < 0) {
      iStack_b4 = *(undefined4 *)(unaff_EBP + 0xc);
      iStack_b8 = iVar4;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_b4 = 0x57324f;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_b4 = 0x57325a;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      iStack_b4 = 0x57326b;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    iStack_b4 = 0x573277;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
    iStack_b4 = unaff_EBP + -0x6c;
    iStack_b8 = 0x573286;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_b4 = 0x573292;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0x1a;
    iStack_b4 = 0x57329f;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
    iStack_b4 = unaff_EBP + -0x5c;
    iStack_b8 = 0x5732a9;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_b4 = 0x5732b5;
      FUN_00878dfb();
    }
    iVar4 = *(int *)(extraout_ECX + 0x98 + *(int *)(unaff_EBP + 8) * 4);
    piVar6 = (int *)(extraout_ECX + 0x98 + *(int *)(unaff_EBP + 8) * 4);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    if (iVar4 == 0) {
      iStack_b4 = 0x5732d7;
      FUN_00878dfb();
    }
    if (*piVar6 == 0) {
      iStack_b4 = 0x5732e7;
      FUN_00878dfb();
    }
    piVar6 = (int *)*piVar6;
    *(int **)(unaff_EBP + 0xc) = piVar6;
    iVar4 = FUN_0042fb0a();
    iStack_b8 = *(int *)(unaff_EBP + -0x68);
    iStack_b4 = *(undefined4 *)(unaff_EBP + -100);
    piVar6 = (int *)(**(code **)(*piVar6 + 0x90))
                              (*(undefined4 *)(unaff_EBP + 0xc),
                               (*(int *)(unaff_EBP + -0x20) - iVar4 / 2) + 0xb0,0x50,
                               *(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58)
                               ,*(undefined4 *)(unaff_EBP + -0x54),
                               *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x6c)
                              );
    if ((int)piVar6 < 0) {
      piStack_74 = *(int **)(unaff_EBP + 0xc);
      iStack_7c = 0x57333e;
      piStack_78 = piVar6;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    piStack_74 = (int *)0x57334b;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_74 = (int *)0x573356;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piStack_74 = (int *)0x573363;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_74 = (int *)0x57336e;
      FUN_00878dfb();
    }
    piVar6 = *(int **)(unaff_EBP + 8);
    piStack_78 = (int *)0x57337a;
    piStack_74 = piVar6;
    FUN_00571ba9();
  }
  piStack_74 = (int *)0x573387;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
             (extraout_ECX + 0xa4 + (int)piVar6 * 4),(IBinding *)0x0);
  piStack_74 = (int *)0x573394;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
             (extraout_ECX + 0xb0 + (int)piVar6 * 4),(IBinding *)0x0);
LAB_00573394:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


