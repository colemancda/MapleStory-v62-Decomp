/* FUN_005bd99f - 0x005bd99f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005bd99f(void)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  int unaff_EBP;
  bool bVar7;
  undefined4 uStack_fc;
  int *piStack_cc;
  undefined *puStack_c8;
  int *piStack_c4;
  undefined4 uStack_c0;
  undefined1 *puStack_bc;
  int *piStack_b8;
  undefined *puStack_b4;
  int *piStack_b0;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x28) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
  iVar3 = FUN_005be519();
  if (iVar3 == 0) {
    FUN_005be484();
    *(undefined4 *)(*(int *)(unaff_EBP + -0x40) + 0x10) = *(undefined4 *)(unaff_EBP + -0x18);
    iVar3 = *(int *)(unaff_EBP + -0x40);
    uVar2 = FUN_0042459a();
    *(undefined4 *)(iVar3 + 0x38) = uVar2;
    FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      FUN_00434e38();
    }
    FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      FUN_00434e38();
    }
    iVar3 = *(int *)(unaff_EBP + -0x40);
    sVar1 = FUN_00424561();
    *(int *)(iVar3 + 0x1c) = (int)sVar1;
    iVar3 = *(int *)(unaff_EBP + -0x40);
    sVar1 = FUN_00424561();
    *(int *)(iVar3 + 0x20) = (int)sVar1;
    *(int *)(*(int *)(unaff_EBP + -0x40) + 0x24) = *(int *)(*(int *)(unaff_EBP + -0x40) + 0x1c) + -3
    ;
    *(int *)(*(int *)(unaff_EBP + -0x40) + 0x28) =
         *(int *)(*(int *)(unaff_EBP + -0x40) + 0x20) + -100;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00437222();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      FUN_00403384();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00403191();
    piVar5 = *(int **)(unaff_EBP + -0x10);
    iVar3 = *(int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (piVar5 == (int *)0x0) {
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + -0x10);
    }
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar3 + 0x24);
    iVar3 = *piVar5;
    *(int **)(unaff_EBP + -0x24) = piVar5;
    iVar3 = (**(code **)(iVar3 + 0x90))();
    if (iVar3 < 0) {
      piStack_b0 = (int *)0x5bdb60;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00552e70();
    piStack_b0 = (int *)0x0;
    puStack_bc = (undefined1 *)&puStack_b4;
    *(undefined ***)(unaff_EBP + -0x20) = &puStack_b4;
    piStack_b8 = (int *)0x639;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_c0 = 0x5bdbc8;
    FUN_00679e4e();
    piStack_b8 = (int *)(unaff_EBP + -0x74);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_bc = (undefined1 *)0x5bdbd8;
    FUN_0040263d();
    puStack_bc = (undefined1 *)0x5bdbdf;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_b4 = (undefined *)0x5bdbea;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x24) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar3 != 0) {
      piStack_b0 = (int *)0x5bdc00;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        piStack_b0 = (int *)0x5bdc11;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_b0 = (int *)0x5bdc1e;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_b0 = (int *)0x5bdc29;
      FUN_00878dfb();
    }
    piStack_b0 = (int *)0x5bdc36;
    FUN_00403191();
    piStack_b0 = (int *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_b4 = (undefined *)0x5bdc45;
    FUN_004031b7();
    bVar7 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (bVar7) {
      piStack_b0 = (int *)0x5bdc5c;
      FUN_00878dfb();
    }
    piStack_b0 = (int *)(unaff_EBP + -0x54);
    puStack_b4 = (undefined *)0x0;
    piStack_b8 = (int *)0x0;
    puStack_bc = (undefined1 *)0x0;
    uStack_c0 = 0;
    piStack_c4 = (int *)0x0;
    puStack_c8 = (undefined *)(unaff_EBP + -0x20);
    piStack_cc = (int *)0x5bdc78;
    puVar4 = (undefined4 *)FUN_0042a39f();
    piStack_b0 = (int *)0x5bdc82;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 8),
               (IBinding *)*puVar4);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    piStack_b0 = (int *)0x5bdc97;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_b0 = (int *)0x5bdca2;
      FUN_00878dfb();
    }
    piVar5 = (int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_b0 = (int *)0x5bdcaf;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_b0 = (int *)0x5bdcba;
      FUN_00878dfb();
      piVar5 = extraout_ECX_00;
    }
    piStack_b0 = (int *)0xff;
    puStack_b4 = (undefined *)0x0;
    *(int ***)(unaff_EBP + -0x2c) = &piStack_b8;
    puStack_bc = (undefined1 *)0x0;
    uStack_c0 = 0x5bdccd;
    piStack_b8 = piVar5;
    FUN_00424e0a();
    puStack_bc = (undefined1 *)0x0;
    uStack_c0 = 0;
    *(int ***)(unaff_EBP + -0x30) = &piStack_c4;
    puStack_c8 = (undefined *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    piStack_cc = (int *)0x5bdcdf;
    FUN_00424dd7();
    puStack_c8 = (undefined *)0x0;
    *(int ***)(unaff_EBP + -0x30) = &piStack_cc;
    FUN_00424dbc();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puVar4 = (undefined4 *)FUN_0042e5bf();
    piStack_b0 = (int *)0x5bdd09;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 8),
               (IBinding *)*puVar4);
    FUN_00412600();
    if (*(int *)(unaff_EBP + 8) == 0) {
      piStack_b0 = (int *)0x5bdd1c;
      FUN_00878dfb();
    }
    piVar5 = *(int **)(unaff_EBP + 8);
    puStack_b4 = (undefined *)0x5bdd2d;
    piStack_b0 = piVar5;
    puStack_bc = (undefined1 *)(**(code **)(*piVar5 + 0xb4))();
    if ((int)puStack_bc < 0) {
      puStack_b4 = &DAT_00963df8;
      uStack_c0 = 0x5bdd3d;
      piStack_b8 = piVar5;
      FUN_00878e09();
    }
    puStack_b4 = (undefined *)0x1;
    piStack_b8 = *(int **)(unaff_EBP + -0x10);
    puStack_bc = (undefined1 *)0x5bdd4a;
    FUN_0040ee87();
    piStack_c4 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (piStack_c4 == (int *)0x0) {
      puStack_b4 = (undefined *)0x80004003;
      piStack_b8 = (int *)0x5bdd5b;
      FUN_00878dfb();
      piStack_c4 = *(int **)(unaff_EBP + 8);
    }
    iVar3 = *piStack_c4;
    uStack_c0 = *(undefined4 *)(unaff_EBP + -0x54);
    puStack_bc = *(undefined1 **)(unaff_EBP + -0x50);
    piStack_b8 = *(int **)(unaff_EBP + -0x4c);
    *(int **)(unaff_EBP + -0x20) = piStack_c4;
    puStack_b4 = *(undefined **)(unaff_EBP + -0x48);
    puStack_c8 = (undefined *)0x5bdd73;
    iVar3 = (**(code **)(iVar3 + 100))();
    if (iVar3 < 0) {
      puStack_c8 = &DAT_00963de8;
      piStack_cc = *(int **)(unaff_EBP + -0x20);
      FUN_00878e09();
    }
    puStack_c8 = (undefined *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_cc = (int *)0x5bdd92;
    puStack_c8 = (undefined *)FUN_00402bc3();
    if ((int)puStack_c8 < 0) {
      piStack_cc = (int *)0x5bdd9d;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 8) == 0) {
      puStack_c8 = (undefined *)0x80004003;
      piStack_cc = (int *)0x5bddac;
      FUN_00878dfb();
    }
    piStack_cc = *(int **)(unaff_EBP + 8);
    puStack_c8 = (undefined *)0xffffffff;
    iVar3 = (**(code **)(*piStack_cc + 0xe0))();
    if (iVar3 < 0) {
      FUN_00878e09();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_00403191();
    piVar5 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (piVar5 == (int *)0x0) {
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + 8);
    }
    iVar3 = *piVar5;
    *(int **)(unaff_EBP + -0x20) = piVar5;
    iVar3 = (**(code **)(iVar3 + 0x110))();
    if (iVar3 < 0) {
      uStack_fc = *(undefined4 *)(unaff_EBP + -0x20);
      FUN_00878e09(iVar3);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    uStack_fc = 0x5bde42;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      uStack_fc = 0x5bde4d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    uStack_fc = 0x5bde5a;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      uStack_fc = 0x5bde65;
      FUN_00878dfb();
    }
    uStack_fc = 0x5bde73;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (*(int *)(unaff_EBP + -0x40) + 0x18),*(IBinding **)(unaff_EBP + -0x10));
    uStack_fc = 0x5bde81;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (*(int *)(unaff_EBP + -0x40) + 0x14),*(IBinding **)(unaff_EBP + 8));
    uVar6 = FUN_004133f0();
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    uStack_fc = 0x168;
    *(uint *)(unaff_EBP + -0x34) = uVar6 % 0x168;
    *(undefined4 **)(unaff_EBP + -0x30) = &uStack_fc;
    *(double *)(*(int *)(unaff_EBP + -0x40) + 0x30) = (double)*(longlong *)(unaff_EBP + -0x34);
    FUN_005be4b7();
    FUN_005bdf23();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      uStack_fc = 0x5bdece;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      uStack_fc = 0x5bdedf;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      uStack_fc = 0x5bdef0;
      (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      uStack_fc = 0x5bdf00;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x40) != 0) {
      uStack_fc = 0x5bdf12;
      FUN_005be4ea();
    }
  }
  else {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_005be4d4();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


