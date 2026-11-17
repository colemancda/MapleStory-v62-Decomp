/* FUN_005cb02c - 0x005cb02c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_005cb02c(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined4 extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  undefined1 *extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  int unaff_EBP;
  int iVar7;
  undefined4 uStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined1 *puStack_bc;
  int iStack_b8;
  undefined1 *puStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  undefined4 *puStack_90;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  puStack_90 = (undefined4 *)0xdbe;
  iStack_94 = unaff_EBP + -0x28;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iStack_98 = 0x5cb066;
  puVar1 = (undefined4 *)FUN_00679d22();
  iStack_94 = *puVar1;
  puStack_90 = *(undefined4 **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_98 = unaff_EBP + -0x14;
  uStack_9c = 0x5cb079;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    puStack_90 = (undefined4 *)(*(int *)(unaff_EBP + -0x28) + -0xc);
    iStack_94 = 0x5cb090;
    FUN_00434e38();
  }
  puStack_90 = (undefined4 *)0x3b3;
  iStack_94 = unaff_EBP + 0xc;
  iStack_98 = 0x5cb0a1;
  piVar2 = (int *)FUN_00679d22();
  iStack_94 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iStack_94 == 0) {
    puStack_90 = (undefined4 *)0x0;
  }
  else {
    puStack_90 = *(undefined4 **)(iStack_94 + -4);
  }
  iStack_98 = 0x5cb0bc;
  FUN_0045efbb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    puStack_90 = (undefined4 *)(*(int *)(unaff_EBP + 0xc) + -0xc);
    iStack_94 = 0x5cb0d0;
    FUN_00434e38();
  }
  puStack_90 = &DAT_00980690;
  iStack_94 = 0x5cb0df;
  FUN_00403191();
  puStack_90 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_94 = 0x5cb0ec;
  FUN_00403191();
  puStack_90 = (undefined4 *)0x0;
  iStack_94 = 0;
  iStack_98 = 0xffffffff;
  uStack_9c = *(undefined4 *)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_a0 = 0;
  uStack_a4 = 0;
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  iStack_ac = 0;
  iStack_b0 = unaff_EBP + -0x7c;
  puStack_b4 = (undefined1 *)(unaff_EBP + -0x6c);
  iStack_b8 = -1;
  uStack_c0 = 0x5cb123;
  puStack_bc = (undefined1 *)&uStack_a4;
  uStack_c0 = FUN_00449713();
  iStack_c4 = 0x5cb129;
  puStack_bc = (undefined1 *)FUN_00456ad5();
  *(int **)(unaff_EBP + 0xc) = &iStack_b8;
  uStack_c0 = 0x5cb136;
  FUN_004033a1();
  puStack_bc = (undefined1 *)(unaff_EBP + -0x8c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_c0 = 0x5cb146;
  FUN_00405a1d();
  uStack_c0 = 0x5cb14d;
  FUN_00402660();
  uStack_c0 = 0x5cb154;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_b0 = 0x5cb15f;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x28) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar3 != 0) {
    iStack_ac = 0x5cb175;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      iStack_ac = 0x5cb186;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_ac = 0x5cb196;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_ac = 0x5cb1a1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_ac = 0x5cb1ae;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_ac = 0x5cb1b9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_ac = 0x5cb1c6;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_ac = 0x5cb1d1;
    FUN_00878dfb();
  }
  piVar2 = (int *)0x0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    iVar3 = FUN_0040cf4d();
    if (iVar3 != 0) {
      piVar2 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0xec);
      *(int **)(unaff_EBP + -0x20) = piVar2;
      if (piVar2 != (int *)0x0) {
        iStack_ac = 0x5cb1ff;
        (**(code **)(*piVar2 + 4))();
      }
      iStack_ac = unaff_EBP + -0x3c;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iVar7 = 0;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      iStack_b0 = 0x5cb216;
      FUN_005c5b12();
      puStack_b4 = (undefined1 *)&iStack_ac;
      *(int **)(unaff_EBP + -0x2c) = &iStack_ac;
      iStack_b0 = 0x3d2;
      iStack_b8 = 0x5cb22a;
      FUN_00679e4e();
      iStack_b0 = unaff_EBP + -0x5c;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      puStack_b4 = (undefined1 *)0x5cb23a;
      FUN_0040263d();
      puStack_b4 = (undefined1 *)0x5cb241;
      iStack_ac = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_b0 = 0x5cb24b;
      FUN_00412550();
      iStack_b0 = unaff_EBP + -0x5c;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      puStack_b4 = (undefined1 *)0x5cb258;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_ac = 0x5cb265;
        FUN_00878dfb();
      }
      puStack_b4 = (undefined1 *)&iStack_ac;
      *(int **)(unaff_EBP + -0x2c) = &iStack_ac;
      iStack_b0 = 0xa4e;
      iStack_b8 = 0x5cb279;
      FUN_00679e4e();
      iStack_b0 = unaff_EBP + -0x5c;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      puStack_b4 = (undefined1 *)0x5cb289;
      FUN_0040263d();
      puStack_b4 = (undefined1 *)0x5cb290;
      iStack_ac = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iStack_b0 = 0x5cb29a;
      iVar3 = FUN_00412550();
      iStack_b0 = unaff_EBP + -0x5c;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      puStack_b4 = (undefined1 *)0x5cb2a9;
      iVar4 = FUN_00402bc3();
      puVar6 = extraout_ECX_00;
      if (iVar4 < 0) {
        iStack_ac = 0x5cb2b6;
        FUN_00878dfb();
        puVar6 = extraout_ECX_01;
      }
      if (iVar3 == 1) {
        iStack_ac = 0x5cb35c;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x20),
                   *(IBinding **)(*(int *)(unaff_EBP + -0x18) + 0xf4));
        puVar6 = extraout_ECX_04;
LAB_005cb35c:
        iStack_ac = 0xff;
        iStack_b0 = 3;
        iStack_b8 = *(int *)(unaff_EBP + -0x18) + 0x440;
        *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_b4;
        puStack_bc = (undefined1 *)0x5cb378;
        puStack_b4 = puVar6;
        FUN_0041160e();
        iStack_b8 = *(int *)(unaff_EBP + 0xc);
        iStack_c4 = unaff_EBP + -0x20;
        *(undefined4 **)(unaff_EBP + 0xc) = &uStack_c0;
        uStack_c8 = 0x5cb38b;
        uStack_c0 = extraout_ECX_05;
        puStack_bc = (undefined1 *)iVar7;
        FUN_00433bdf();
        iStack_c4 = 0;
        *(undefined4 **)(unaff_EBP + 0xc) = &uStack_c8;
        uStack_c8 = extraout_ECX_06;
        FUN_00424dbc(unaff_EBP + -0x10);
        FUN_0042e5bf(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piVar2 = (int *)0x0;
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          iStack_ac = 0x5cb3c2;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
          iStack_ac = unaff_EBP + -0x5c;
          iStack_b0 = 0x5cb3d1;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            iStack_ac = 0x5cb3dd;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          iStack_ac = 0x5cb3e7;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
          iStack_ac = unaff_EBP + -0x4c;
          iStack_b0 = 0x5cb3f1;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            iStack_ac = 0x5cb3fd;
            FUN_00878dfb();
          }
          piVar2 = *(int **)(unaff_EBP + -0x1c);
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          if (piVar2 == (int *)0x0) {
            iStack_ac = 0x5cb412;
            FUN_00878dfb();
            piVar2 = *(int **)(unaff_EBP + -0x1c);
          }
          puStack_b4 = *(undefined1 **)(unaff_EBP + -0x5c);
          iStack_b0 = *(int *)(unaff_EBP + -0x58);
          iVar3 = *piVar2;
          iStack_ac = *(int *)(unaff_EBP + -0x54);
          iStack_c4 = *(undefined4 *)(unaff_EBP + -0x4c);
          uStack_c0 = *(undefined4 *)(unaff_EBP + -0x48);
          puStack_bc = *(undefined1 **)(unaff_EBP + -0x44);
          uStack_c8 = 0x20;
          *(int **)(unaff_EBP + 0xc) = piVar2;
          iStack_b8 = *(int *)(unaff_EBP + -0x40);
          iVar3 = (**(code **)(iVar3 + 0x110))(piVar2);
          if (iVar3 < 0) {
            iStack_ac = *(int *)(unaff_EBP + 0xc);
            puStack_b4 = (undefined1 *)0x5cb44d;
            iStack_b0 = iVar3;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          iStack_ac = 0x5cb45a;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_ac = 0x5cb465;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          iStack_ac = 0x5cb472;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_ac = 0x5cb47d;
            FUN_00878dfb();
          }
          piVar2 = *(int **)(unaff_EBP + -0x1c);
        }
        puVar1 = *(undefined4 **)(unaff_EBP + 8);
        *puVar1 = piVar2;
        piVar5 = (int *)0x0;
        if (piVar2 != (int *)0x0) {
          iStack_ac = 0x5cb48f;
          (**(code **)(*piVar2 + 4))();
          piVar5 = *(int **)(unaff_EBP + -0x1c);
        }
        *(undefined4 *)(unaff_EBP + -0x24) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        if (piVar5 != (int *)0x0) {
          iStack_ac = 0x5cb4a7;
          (**(code **)(*piVar5 + 8))();
        }
      }
      else {
        if (iVar3 != 2) {
          if (iVar3 == 3) {
            iStack_ac = 0x5cb2d5;
            puVar1 = (undefined4 *)FUN_005cb50c();
            iStack_ac = 0x5cb2df;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x20),
                       (IBinding *)*puVar1);
            puVar6 = extraout_ECX_02;
            if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
              iStack_ac = 0x5cb2ec;
              (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
              puVar6 = extraout_ECX_03;
            }
          }
          goto LAB_005cb35c;
        }
        iStack_ac = 0x5cb2f8;
        iVar3 = (*DAT_0097b5a4)();
        if (iVar3 == 0) {
          piVar2 = (int *)(*(int *)(unaff_EBP + -0x18) + 4);
          piVar5 = (int *)(**(code **)(*piVar2 + 0x10))();
          iVar7 = (*(int *)(unaff_EBP + -0x3c) + *(int *)(unaff_EBP + -0x34)) / 2 - *piVar5;
          puVar6 = (undefined1 *)(**(code **)(*piVar2 + 0x10))();
          *(int *)(unaff_EBP + 0xc) =
               (*(int *)(unaff_EBP + -0x38) + *(int *)(unaff_EBP + -0x30)) / 2 -
               *(int *)(puVar6 + 4);
          goto LAB_005cb35c;
        }
        puVar1 = *(undefined4 **)(unaff_EBP + 8);
        *puVar1 = 0;
        *(undefined4 *)(unaff_EBP + -0x24) = 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
        iStack_ac = 0x5cb4b8;
        (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        iStack_ac = 0x5cb4c9;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      goto LAB_005cb4e8;
    }
    piVar2 = *(int **)(unaff_EBP + -0x10);
  }
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *puVar1 = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar2 != (int *)0x0) {
    iStack_ac = 0x5cb4e8;
    (**(code **)(*piVar2 + 8))();
  }
LAB_005cb4e8:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


