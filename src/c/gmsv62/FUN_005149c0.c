/* FUN_005149c0 - 0x005149c0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005149c0(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  char *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puStack_ac;
  undefined *puStack_a8;
  char *pcStack_a4;
  int iStack_a0;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(DAT_00978368 + 0x2088);
  iVar2 = FUN_004f162d();
  if (iVar2 == 0x2887fa6e) {
    *(undefined4 *)(unaff_EBP + -0x2c) = 0x8c6573;
  }
  else {
    iVar2 = FUN_004f162d();
    if (iVar2 != 0x2887fad2) goto LAB_00514fed;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0x8c656a;
  }
  bVar1 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x1c) = (uint)bVar1;
  uVar3 = FUN_0042459a();
  *(undefined4 *)(extraout_ECX + 0x73c) = uVar3;
  uVar3 = FUN_0042459a();
  *(undefined4 *)(extraout_ECX + 0x740) = uVar3;
  if (*(int *)(extraout_ECX + 0x738) != 0) {
    iVar2 = FUN_004f162d();
    if ((((iVar2 == 0x2887fad2) && (*(int *)(extraout_ECX + 0x730) == 2)) &&
        (*(int *)(unaff_EBP + -0x30) != *(int *)(extraout_ECX + 0x73c))) &&
       (*(int *)(unaff_EBP + -0x30) != *(int *)(extraout_ECX + 0x740))) {
      iVar2 = **(int **)(extraout_ECX + 0x738);
    }
    else {
      iVar2 = **(int **)(extraout_ECX + 0x738);
    }
    iStack_a0 = 0x514a9a;
    (**(code **)(iVar2 + 0x20))();
    FUN_004c26e1();
  }
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  *(uint *)(extraout_ECX + 0x730) = (uint)bVar1;
  if (iVar2 == 0) {
    if (*(int *)(extraout_ECX + 0x744) != 0) {
      iStack_a0 = 0x514acd;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x744),
                 (IBinding *)0x0);
    }
    iVar2 = FUN_004f162d();
    if (iVar2 == 0x2887fa6e) {
      iStack_a0 = unaff_EBP + -0x10;
      pcStack_a4 = (char *)0x514aef;
      puVar4 = (undefined4 *)FUN_00679d86();
      puStack_ac = (undefined4 *)*puVar4;
      iStack_a0 = 0;
      pcStack_a4 = (char *)0x0;
      puStack_a8 = (undefined *)0x1;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_0045af91();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        iStack_a0 = 0x514b19;
        FUN_00403384();
      }
    }
    else {
      iVar2 = FUN_004f162d();
      if (iVar2 == 0x2887fad2) {
        iStack_a0 = unaff_EBP + -0x10;
        pcStack_a4 = (char *)0x514b3e;
        puVar4 = (undefined4 *)FUN_00679d86();
        puStack_ac = (undefined4 *)*puVar4;
        iStack_a0 = 0;
        pcStack_a4 = (char *)0x0;
        puStack_a8 = (undefined *)0x1;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        FUN_0045af91();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00402676();
      }
    }
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_004f162d();
  if ((iVar2 == 0x2887fad2) && (*(int *)(extraout_ECX + 0x730) == 2)) {
    if ((*(int *)(unaff_EBP + -0x30) != *(int *)(extraout_ECX + 0x73c)) &&
       (*(int *)(unaff_EBP + -0x30) != *(int *)(extraout_ECX + 0x740))) {
      iStack_a0 = 0x514bb9;
      iVar2 = FUN_004029b9();
      *(int *)(unaff_EBP + 8) = iVar2;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (iVar2 != 0) {
        FUN_007e62e9();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_a0 = 0x514bdc;
      uVar3 = FUN_005154ad();
      *(undefined4 *)(unaff_EBP + 8) = uVar3;
      FUN_004c26c4();
      FUN_004c26e1();
      iStack_a0 = 0;
      puStack_ac = &pcStack_a4;
      *(undefined4 *)(extraout_ECX + 0x738) = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 4);
      *(char ***)(unaff_EBP + 8) = &pcStack_a4;
      puStack_a8 = (undefined *)0x101d;
      pcStack_a4 = extraout_ECX_00;
      FUN_00679d22();
      puStack_a8 = *(undefined **)(unaff_EBP + -0x2c);
      puStack_ac = (undefined4 *)0x1;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_004c2677();
      FUN_007eddac();
      FUN_007edf40();
      FUN_007e6e3c();
      iVar2 = FUN_004bc6a2();
      if (iVar2 == 6) {
        iStack_a0 = 0;
        pcStack_a4 = (char *)0x80;
        puStack_a8 = (undefined *)0x514c59;
        FUN_0060142b();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iStack_a0 = 0x514c6c;
        FUN_004751b2();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        FUN_0045ebca();
      }
    }
  }
  else {
    iStack_a0 = 0x514c8c;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x28) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar2 != 0) {
      FUN_007e62e9();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_a0 = 0x514caf;
    uVar3 = FUN_005154ad();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    FUN_004c26c4();
    FUN_004c26e1();
    *(undefined4 *)(extraout_ECX + 0x738) = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4);
    iStack_a0 = 0x514cda;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
    iStack_a0 = unaff_EBP + -0x58;
    pcStack_a4 = (char *)0x514ce8;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_a0 = 0x514cf4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_a0 = 0x514d02;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
    iStack_a0 = unaff_EBP + -0x68;
    puVar4 = &DAT_00980690;
    pcStack_a4 = (char *)0x514d10;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_a0 = 0x514d1c;
      FUN_00878dfb();
      puVar4 = extraout_ECX_01;
    }
    iStack_a0 = 0;
    pcStack_a4 = (char *)(unaff_EBP + -0x58);
    puStack_a8 = (undefined *)(unaff_EBP + -0x68);
    *(undefined4 ***)(unaff_EBP + -0x28) = &puStack_ac;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_ac = puVar4;
    FUN_00679e4e(&puStack_ac,0x684);
    iVar2 = unaff_EBP + -0x78;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00405a1d(iVar2);
    FUN_00402660();
    FUN_00404a02(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    pcStack_a4 = (char *)0x514d63;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x10) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    if (iVar2 != 0) {
      iStack_a0 = 0x514d7e;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        iStack_a0 = 0x514d8c;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_a0 = 0x514d99;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_a0 = 0x514da4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_a0 = 0x514db1;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_a0 = 0x514dbc;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_a0 = 0x514dc9;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_a0 = 0x514dd4;
      FUN_00878dfb();
    }
    iStack_a0 = 0;
    pcStack_a4 = (char *)0x514dde;
    puStack_ac = (undefined4 *)FUN_00483ba7();
    pcStack_a4 = *(char **)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_a8 = &DAT_0096477c;
    FUN_00434e21();
    pcStack_a4 = (char *)0x514dfa;
    puStack_a8 = (undefined *)FUN_00449713();
    *(char ***)(unaff_EBP + -0x28) = &pcStack_a4;
    puStack_ac = (undefined4 *)0x514e06;
    FUN_00448a17();
    puStack_a8 = (undefined *)(unaff_EBP + -0x88);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_ac = (undefined4 *)0x514e19;
    FUN_0040263d();
    puStack_ac = (undefined4 *)0x514e20;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    pcStack_a4 = (char *)0x514e2b;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x38) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if (iVar2 != 0) {
      iStack_a0 = 0x514e41;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        iStack_a0 = 0x514e4f;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_a0 = 0x514e5f;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_a0 = 0x514e6a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_00414ebb();
    iStack_a0 = 0x514e83;
    puStack_a8 = (undefined *)FUN_00483ba7();
    iStack_a0 = *(int *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    pcStack_a4 = s_wedding_d_00964fd0;
    puStack_ac = (undefined4 *)0x514e95;
    FUN_00434e21();
    iStack_a0 = 0x514e9f;
    pcStack_a4 = (char *)FUN_00449713();
    *(int **)(unaff_EBP + -0x1c) = &iStack_a0;
    puStack_a8 = (undefined *)0x514eab;
    FUN_00448a17();
    pcStack_a4 = (char *)(unaff_EBP + -0x98);
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    puStack_a8 = (undefined *)0x514ebe;
    FUN_0040263d();
    puStack_a8 = (undefined *)0x514ec5;
    iStack_a0 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    pcStack_a4 = (char *)0x514ecf;
    iStack_a0 = FUN_004343c5();
    *(undefined4 *)(unaff_EBP + 8) = 0;
    pcStack_a4 = (char *)0x514edf;
    FUN_00454081();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_a0 = 0x514eef;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_a0 = 0x514efa;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    FUN_00414ebb();
    iStack_a0 = 0;
    puStack_a8 = (undefined *)(unaff_EBP + 8);
    *(char ***)(unaff_EBP + -0x1c) = &pcStack_a4;
    puStack_ac = (undefined4 *)0x514f17;
    FUN_00450368();
    puStack_a8 = *(undefined **)(unaff_EBP + -0x2c);
    puStack_ac = (undefined4 *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    FUN_004c2677();
    FUN_007eddac();
    iStack_a0 = 0;
    pcStack_a4 = (char *)0x514f39;
    FUN_007edf11();
    FUN_007e6e3c();
    FUN_004bc6a2();
    if (((*(int *)(unaff_EBP + -0x30) == *(int *)(extraout_ECX + 0x73c)) ||
        (*(int *)(unaff_EBP + -0x30) == *(int *)(extraout_ECX + 0x740))) &&
       ((iVar2 = FUN_004f162d(), iVar2 != 0x2887fad2 || (*(int *)(extraout_ECX + 0x730) != 2)))) {
      iStack_a0 = 0;
      pcStack_a4 = (char *)0x7f;
      puStack_a8 = (undefined *)0x514f83;
      FUN_0060142b();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      iStack_a0 = 0x514f98;
      FUN_00457cda();
      iStack_a0 = 0x514fa7;
      FUN_004751b2();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      FUN_0045ebca();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      iStack_a0 = 0x514fd0;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
      iStack_a0 = 0x514fe1;
      (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004c26e1();
LAB_00514fed:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


