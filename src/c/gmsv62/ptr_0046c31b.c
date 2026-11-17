/* ptr_0046c31b - 0x0046c31b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0046c31b(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int *unaff_EDI;
  bool bVar6;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  uint uStack_3c;
  int iStack_38;
  undefined1 *puStack_34;
  int iStack_30;
  int *piStack_2c;
  int *piStack_28;
  int *piStack_24;
  undefined *puStack_20;
  IBinding *pIVar7;
  
  FUN_00403384();
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00411641();
  *(undefined1 **)(unaff_EBP + 0x1c) = &stack0xffffffec;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  piVar1 = (int *)FUN_004032b4();
  *(int **)(unaff_EBP + -0x28) = piVar1;
  *(int **)(unaff_EBP + -0x18) = unaff_EDI;
  if (piVar1 != unaff_EDI) {
    iVar2 = FUN_00404b30();
    if ((iVar2 < (int)unaff_EDI) && (iVar2 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  if (*(int **)(unaff_EBP + -0x18) == unaff_EDI) {
    FUN_004027eb();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int **)(unaff_EBP + -0x14) != unaff_EDI) {
      FUN_00403384();
    }
    FUN_00412600();
    FUN_00402fa6();
    FUN_00412600();
    FUN_004125d9();
    goto LAB_0046cd6f;
  }
  *(undefined1 **)(unaff_EBP + 0x1c) = &stack0xfffffff8;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uVar3 = FUN_00412550();
  *(undefined4 *)(unaff_EBP + 0x20) = uVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_004031b7();
  bVar6 = DAT_0097c1ac == unaff_EDI;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (bVar6) {
    FUN_00878dfb();
  }
  puStack_20 = (undefined *)(unaff_EBP + 0x1c);
  piStack_24 = (int *)0x46c710;
  puVar4 = (undefined4 *)FUN_0042a39f();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
             (IBinding *)*puVar4);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EDI) {
    FUN_00878dfb();
  }
  if (999 < *(int *)(unaff_EBP + 0x18)) {
    if (*(int *)(unaff_EBP + 0x18) < 0x3eb) {
      pIVar7 = *(IBinding **)(unaff_EBP + -0x10);
      this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x1c) + 4);
    }
    else {
      if (*(int *)(unaff_EBP + 0x18) != 0x3eb) goto LAB_0046c786;
      pIVar7 = *(IBinding **)(unaff_EBP + -0x10);
      this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x1c) + 8);
    }
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,pIVar7);
  }
LAB_0046c786:
  FUN_0040ee87();
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (piVar1 == unaff_EDI) {
    FUN_00878dfb();
    piVar1 = *(int **)(unaff_EBP + -0x10);
  }
  iVar2 = *piVar1;
  *(int **)(unaff_EBP + 0x1c) = piVar1;
  iVar2 = (**(code **)(iVar2 + 100))();
  if (iVar2 < 0) {
    piStack_24 = (int *)0x46c7ce;
    puStack_20 = (undefined *)iVar2;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  puStack_20 = (undefined *)0x46c807;
  piVar5 = (int *)(**(code **)(*piVar1 + 0xb4))();
  if ((int)piVar5 < 0) {
    puStack_20 = &DAT_00963df8;
    piStack_2c = (int *)0x46c818;
    piStack_28 = piVar5;
    piStack_24 = piVar1;
    FUN_00878e09();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    puStack_20 = (undefined *)0x80004003;
    piStack_24 = (int *)0x46c828;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  puStack_20 = (undefined *)0xffffffff;
  piStack_28 = (int *)0x46c836;
  piStack_24 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0xe0))();
  if (iVar2 < 0) {
    piStack_28 = (int *)&DAT_00963df8;
    puStack_34 = (undefined1 *)0x46c842;
    iStack_30 = iVar2;
    piStack_2c = piVar1;
    FUN_00878e09();
  }
  piVar1 = (int *)0x0;
  while( true ) {
    piStack_28 = (int *)0x46c851;
    FUN_0087a1b0();
    iStack_30 = 0x46c85a;
    piStack_2c = piVar1;
    piStack_28 = (int *)&piStack_24;
    piStack_2c = (int *)FUN_00412335();
    *(int ***)(unaff_EBP + -0x20) = &piStack_28;
    iStack_30 = 0x46c868;
    FUN_00402e8e();
    piStack_2c = (int *)(unaff_EBP + -0xd0);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_30 = 0x46c87b;
    FUN_0040263d();
    iStack_30 = 0x46c882;
    piStack_28 = (int *)FUN_004048a4();
    piStack_2c = (int *)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    iStack_30 = 0x46c890;
    piStack_28 = (int *)FUN_00412348();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    piStack_2c = (int *)0x46c89f;
    FUN_00417232();
    piStack_28 = (int *)0x46c8a7;
    FUN_004027b3();
    piStack_28 = (int *)(unaff_EBP + -0xd0);
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    piStack_2c = (int *)0x46c8b7;
    piStack_28 = (int *)FUN_00402bc3();
    if ((int)piStack_28 < 0) {
      piStack_2c = (int *)0x46c8c2;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 0x1c) == 0) break;
    piStack_28 = &DAT_00980690;
    piStack_2c = (int *)0x46c8d5;
    FUN_00403191();
    piStack_28 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    piStack_2c = (int *)0x46c8e2;
    FUN_00403191();
    piStack_28 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    piStack_2c = (int *)0x46c8f2;
    FUN_00403191();
    piStack_28 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    piStack_2c = (int *)0x46c8ff;
    FUN_00403191();
    piStack_28 = (int *)0x78;
    puStack_34 = (undefined1 *)&piStack_2c;
    *(int ***)(unaff_EBP + -0x20) = &piStack_2c;
    iStack_30 = 0x474;
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_38 = 0x46c91b;
    FUN_00679e4e();
    iStack_30 = unaff_EBP + -0xa0;
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    puStack_34 = (undefined1 *)0x46c92e;
    FUN_0040263d();
    puStack_34 = (undefined1 *)0x46c935;
    piStack_2c = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    iStack_30 = 0x46c93f;
    piStack_2c = (int *)FUN_00412550();
    piStack_28 = (int *)0x3;
    iStack_30 = 0x46c94c;
    FUN_004031b7();
    piStack_28 = (int *)(unaff_EBP + -0x44);
    piStack_2c = (int *)(unaff_EBP + -0x78);
    iStack_30 = unaff_EBP + -0x90;
    puStack_34 = (undefined1 *)(unaff_EBP + -0x68);
    iStack_38 = unaff_EBP + -0x58;
    uStack_3c = (uint)(*(int *)(unaff_EBP + 0x18) == 0x3eb);
    iStack_44 = unaff_EBP + 0x1c;
    *(int **)(unaff_EBP + -0x20) = &iStack_40;
    uStack_48 = 0x46c97b;
    FUN_00424dbc();
    iStack_44 = *(undefined4 *)(unaff_EBP + 0x20);
    *(undefined4 **)(unaff_EBP + -0x48) = &uStack_48;
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    FUN_004059fd(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    FUN_0046ac3f(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    uStack_3c = 0x46c9ac;
    uStack_3c = FUN_004458be();
    iStack_40 = unaff_EBP + -0xe0;
    iStack_44 = 0x46c9bc;
    FUN_00424e27();
    iStack_44 = 0x46c9c3;
    FUN_004250ac();
    piStack_28 = (int *)(unaff_EBP + -0xe0);
    piStack_2c = (int *)0x46c9cf;
    piStack_28 = (int *)FUN_00402bc3();
    if ((int)piStack_28 < 0) {
      piStack_2c = (int *)0x46c9da;
      FUN_00878dfb();
    }
    piStack_28 = (int *)0x46c9e2;
    FUN_004125e6();
    piStack_28 = (int *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    piStack_2c = (int *)0x46c9ef;
    piStack_28 = (int *)FUN_00402bc3();
    if ((int)piStack_28 < 0) {
      piStack_2c = (int *)0x46c9fa;
      FUN_00878dfb();
    }
    piStack_28 = (int *)(unaff_EBP + -0xa0);
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    piStack_2c = (int *)0x46ca0a;
    piStack_28 = (int *)FUN_00402bc3();
    if ((int)piStack_28 < 0) {
      piStack_2c = (int *)0x46ca15;
      FUN_00878dfb();
    }
    piStack_28 = (int *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    piStack_2c = (int *)0x46ca22;
    piStack_28 = (int *)FUN_00402bc3();
    if ((int)piStack_28 < 0) {
      piStack_2c = (int *)0x46ca2d;
      FUN_00878dfb();
    }
    piStack_28 = (int *)(unaff_EBP + -0x90);
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    piStack_2c = (int *)0x46ca3d;
    piStack_28 = (int *)FUN_00402bc3();
    if ((int)piStack_28 < 0) {
      piStack_2c = (int *)0x46ca48;
      FUN_00878dfb();
    }
    piStack_28 = (int *)(unaff_EBP + -0x78);
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    piStack_2c = (int *)0x46ca55;
    piStack_28 = (int *)FUN_00402bc3();
    if ((int)piStack_28 < 0) {
      piStack_2c = (int *)0x46ca60;
      FUN_00878dfb();
    }
    piStack_28 = (int *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    piStack_2c = (int *)0x46ca6d;
    piStack_28 = (int *)FUN_00402bc3();
    if ((int)piStack_28 < 0) {
      piStack_2c = (int *)0x46ca78;
      FUN_00878dfb();
    }
    piStack_28 = *(int **)(unaff_EBP + 0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (piStack_28 != (int *)0x0) {
      piStack_2c = (int *)0x46ca89;
      (**(code **)(*piStack_28 + 8))();
    }
    piVar1 = (int *)((int)piVar1 + 1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_28 = (int *)0x46ca9b;
  FUN_004027eb();
  piStack_28 = &DAT_00980690;
  if (piVar1 == (int *)0x0) {
    piStack_2c = (int *)0x46cb2f;
    FUN_00403191();
    piStack_28 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    piStack_2c = (int *)0x46cb3c;
    FUN_00403191();
    piStack_28 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    piStack_2c = (int *)0x46cb4c;
    FUN_00403191();
    piStack_28 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    piStack_2c = (int *)0x46cb59;
    FUN_00403191();
    piStack_28 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    piStack_2c = (int *)0x46cb66;
    FUN_00403191();
    piStack_28 = (int *)(unaff_EBP + -0x68);
    piStack_2c = (int *)(unaff_EBP + -0x58);
    iStack_30 = unaff_EBP + -0x90;
    puStack_34 = (undefined1 *)(unaff_EBP + -0x78);
    iStack_38 = unaff_EBP + -0x44;
    uStack_3c = (uint)(*(int *)(unaff_EBP + 0x18) == 0x3eb);
    iStack_44 = unaff_EBP + -0x18;
    *(int **)(unaff_EBP + 0x18) = &iStack_40;
    uStack_48 = 0x46cb95;
    FUN_00424dbc();
    iStack_44 = *(undefined4 *)(unaff_EBP + 0x20);
    *(undefined4 **)(unaff_EBP + 0x20) = &uStack_48;
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    uStack_48 = extraout_ECX;
    FUN_004059fd(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    FUN_0046ac3f(unaff_EBP + 0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    uStack_3c = 0x46cbc6;
    uStack_3c = FUN_004458be();
    iStack_40 = unaff_EBP + -0xa0;
    iStack_44 = 0x46cbd6;
    FUN_00424e27();
    iStack_44 = 0x46cbdd;
    FUN_004250ac();
    piStack_28 = (int *)(unaff_EBP + -0xa0);
    piStack_2c = (int *)0x46cbe9;
    piStack_28 = (int *)FUN_00402bc3();
    if ((int)piStack_28 < 0) {
      piStack_2c = (int *)0x46cbf4;
      FUN_00878dfb();
    }
    piStack_28 = *(int **)(unaff_EBP + 0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    if (piStack_28 != (int *)0x0) {
      piStack_2c = (int *)0x46cc05;
      (**(code **)(*piStack_28 + 8))();
    }
    piStack_28 = (int *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    piStack_2c = (int *)0x46cc12;
    piStack_28 = (int *)FUN_00402bc3();
    if ((int)piStack_28 < 0) {
      piStack_2c = (int *)0x46cc1d;
      FUN_00878dfb();
    }
    piStack_28 = (int *)(unaff_EBP + -0x78);
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    piStack_2c = (int *)0x46cc2a;
    piStack_28 = (int *)FUN_00402bc3();
    if ((int)piStack_28 < 0) {
      piStack_2c = (int *)0x46cc35;
      FUN_00878dfb();
    }
    piStack_28 = (int *)(unaff_EBP + -0x90);
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    piStack_2c = (int *)0x46cc45;
    piStack_28 = (int *)FUN_00402bc3();
    if ((int)piStack_28 < 0) {
      piStack_2c = (int *)0x46cc50;
      FUN_00878dfb();
    }
    piStack_28 = (int *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    piStack_2c = (int *)0x46cc5d;
    piStack_28 = (int *)FUN_00402bc3();
    if ((int)piStack_28 < 0) {
      piStack_2c = (int *)0x46cc68;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    piStack_28 = (int *)(unaff_EBP + -0x68);
  }
  else {
    piStack_2c = (int *)0x46caac;
    FUN_00403191();
    piStack_28 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    piStack_2c = (int *)0x46cab9;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_28 = (int *)0x80004003;
      piStack_2c = (int *)0x46cacd;
      FUN_00878dfb();
    }
    piVar1 = *(int **)(unaff_EBP + -0x10);
    puStack_34 = *(undefined1 **)(unaff_EBP + -0x78);
    iStack_30 = *(int *)(unaff_EBP + -0x74);
    piStack_2c = *(int **)(unaff_EBP + -0x70);
    piStack_28 = *(int **)(unaff_EBP + -0x6c);
    iStack_44 = *(undefined4 *)(unaff_EBP + -0x44);
    iStack_40 = *(int *)(unaff_EBP + -0x40);
    uStack_3c = *(undefined4 *)(unaff_EBP + -0x3c);
    uStack_48 = 0x20;
    iStack_38 = *(int *)(unaff_EBP + -0x38);
    iVar2 = (**(code **)(*piVar1 + 0x110))(piVar1);
    if (iVar2 < 0) {
      piStack_28 = (int *)&DAT_00963df8;
      puStack_34 = (undefined1 *)0x46cb03;
      iStack_30 = iVar2;
      piStack_2c = piVar1;
      FUN_00878e09();
    }
    piStack_28 = (int *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    piStack_2c = (int *)0x46cb10;
    piStack_28 = (int *)FUN_00402bc3();
    if ((int)piStack_28 < 0) {
      piStack_2c = (int *)0x46cb1b;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    piStack_28 = (int *)(unaff_EBP + -0x78);
  }
  piStack_2c = (int *)0x46cc75;
  piStack_28 = (int *)FUN_00402bc3();
  if ((int)piStack_28 < 0) {
    piStack_2c = (int *)0x46cc80;
    FUN_00878dfb();
  }
  piStack_28 = (int *)0x46cc85;
  uVar3 = FUN_007d1e08();
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  *(undefined4 *)(iVar2 + 0x40) = uVar3;
  piStack_28 = (int *)0x3;
  piStack_2c = (int *)0x0;
  *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(unaff_EBP + 0x14);
  iStack_30 = 0x46cc9e;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    piStack_28 = (int *)0x80004003;
    piStack_2c = (int *)0x46ccb1;
    FUN_00878dfb();
  }
  piStack_28 = (int *)(unaff_EBP + -0x44);
  piStack_2c = (int *)(unaff_EBP + 0x18);
  iStack_30 = 0x46ccc1;
  piVar1 = (int *)FUN_00425067();
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  if (iVar2 == 0) {
    piStack_28 = (int *)0x80004003;
    piStack_2c = (int *)0x46ccd5;
    FUN_00878dfb();
  }
  piStack_28 = (int *)0x46ccdc;
  iVar2 = FUN_0040eed0();
  piStack_28 = (int *)(iVar2 + *(int *)(unaff_EBP + 0x24));
  piStack_2c = (int *)0x46cce7;
  FUN_0046f8b1();
  piStack_28 = *(int **)(unaff_EBP + 0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  if (piStack_28 != (int *)0x0) {
    piStack_2c = (int *)0x46ccf8;
    (**(code **)(*piStack_28 + 8))();
  }
  piStack_28 = (int *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  piStack_2c = (int *)0x46cd05;
  piStack_28 = (int *)FUN_00402bc3();
  if ((int)piStack_28 < 0) {
    piStack_2c = (int *)0x46cd10;
    FUN_00878dfb();
  }
  piStack_28 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piStack_28 != (int *)0x0) {
    piStack_2c = (int *)0x46cd21;
    (**(code **)(*piStack_28 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_28 = (int *)0x46cd2d;
  FUN_00402676();
  piStack_28 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piStack_28 != (int *)0x0) {
    piStack_2c = (int *)0x46cd3e;
    (**(code **)(*piStack_28 + 8))();
  }
  if (*(int *)(unaff_EBP + 8) != 0) {
    piStack_28 = (int *)0x46cd4a;
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + 8) = 0;
  }
  piStack_28 = *(int **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_28 != (int *)0x0) {
    piStack_2c = (int *)0x46cd5e;
    (**(code **)(*piStack_28 + 8))();
  }
  piStack_28 = *(int **)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_28 != (int *)0x0) {
    piStack_2c = (int *)0x46cd6f;
    (**(code **)(*piStack_28 + 8))();
  }
LAB_0046cd6f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


