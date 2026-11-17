/* FUN_00778f8e - 0x00778f8e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00778f8e(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  int *piVar4;
  int unaff_EBP;
  undefined4 uVar5;
  undefined1 *puStack_114;
  int iStack_110;
  int *piStack_10c;
  IBinding *pIVar6;
  int *piStack_104;
  undefined4 uStack_100;
  int iStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined *puStack_e8;
  int *piStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined *puStack_c8;
  int *piStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  
  FUN_00879bb8();
  iStack_a0 = *(undefined4 *)(unaff_EBP + 8);
  uStack_a4 = 0x778fab;
  FUN_0081622a();
  iStack_a0 = unaff_EBP + 8;
  uStack_a4 = 0x778fb6;
  FUN_00448dc6();
  iVar1 = DAT_00978368;
  uVar2 = *(undefined4 *)(*(int *)(extraout_ECX + 0x8c) + 0x838);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x24) = uVar2;
  iStack_a0 = 0x778fdc;
  FUN_0045e787();
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(*(int *)(extraout_ECX + 0x8c) + 0x834);
  iStack_a0 = 0x778ff4;
  FUN_0045e787();
  iVar1 = *(int *)(iVar1 + 0x2cd2);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 == 0) {
    piVar4 = (int *)(extraout_ECX + 0x68);
    iVar1 = 2;
    do {
      iStack_a0 = 0;
      uStack_a4 = 0x779535;
      (**(code **)(*(int *)(*piVar4 + 4) + 0x1c))();
      piVar4 = piVar4 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iStack_a0 = 0x779543;
    FUN_004497b5();
    iStack_a0 = 0x77954b;
    FUN_004497b5();
    iStack_a0 = 0x779553;
    FUN_004125e6();
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(*(int *)(extraout_ECX + 0x68) + 4);
    iStack_a0 = 0x779017;
    iStack_a0 = FUN_008582fe();
    uStack_a4 = 0x779020;
    (**(code **)(*(int *)(unaff_EBP + -0x14) + 0x1c))();
    iVar1 = *(int *)(*(int *)(extraout_ECX + 0x70) + 4);
    uStack_a4 = 0x779031;
    uStack_a4 = FUN_008582fe();
    uStack_a8 = 0x779037;
    (**(code **)(iVar1 + 0x1c))();
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x24);
    uStack_a8 = 0x779045;
    FUN_0045e787();
    uStack_a8 = 3;
    uStack_ac = 0xff;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_b0 = 0x779058;
    FUN_004031b7();
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x78);
    piStack_c4 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (piStack_c4 == (int *)0x0) {
      uStack_a8 = 0x80004003;
      uStack_ac = 0x779073;
      FUN_00878dfb();
      piStack_c4 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piStack_c4;
    uStack_b8 = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_b4 = *(undefined4 *)(unaff_EBP + -0x3c);
    uStack_b0 = *(undefined4 *)(unaff_EBP + -0x38);
    uStack_bc = 8;
    uStack_ac = *(undefined4 *)(unaff_EBP + -0x34);
    uStack_c0 = 6;
    *(int **)(unaff_EBP + -0x10) = piStack_c4;
    uStack_a8 = *(undefined4 *)(unaff_EBP + -0x30);
    puStack_c8 = (undefined *)0x779095;
    iVar1 = (**(code **)(iVar1 + 0x80))();
    if (iVar1 < 0) {
      puStack_c8 = &DAT_00963cc8;
      uStack_cc = *(undefined4 *)(unaff_EBP + -0x10);
      uStack_d4 = 0x7790a7;
      iStack_d0 = iVar1;
      FUN_00878e09();
    }
    puStack_c8 = (undefined *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_cc = 0x7790b4;
    puStack_c8 = (undefined *)FUN_00402bc3();
    if ((int)puStack_c8 < 0) {
      uStack_cc = 0x7790bf;
      FUN_00878dfb();
    }
    if (*(int *)(extraout_ECX + 0x78) == 0) {
      puStack_c8 = (undefined *)0x80004003;
      uStack_cc = 0x7790cf;
      FUN_00878dfb();
    }
    puStack_c8 = (undefined *)0x7790d7;
    iVar1 = FUN_0040e53d();
    puStack_c8 = (undefined *)0x3;
    uStack_cc = 0xff;
    *(int *)(unaff_EBP + -0x1c) = iVar1 + 0x12;
    iStack_d0 = 0x7790ec;
    FUN_004031b7();
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x7c);
    piStack_e4 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (piStack_e4 == (int *)0x0) {
      puStack_c8 = (undefined *)0x80004003;
      uStack_cc = 0x779107;
      FUN_00878dfb();
      piStack_e4 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piStack_e4;
    uStack_d8 = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_dc = *(undefined4 *)(unaff_EBP + -0x1c);
    uStack_d4 = *(undefined4 *)(unaff_EBP + -0x3c);
    iStack_d0 = *(undefined4 *)(unaff_EBP + -0x38);
    uStack_cc = *(undefined4 *)(unaff_EBP + -0x34);
    uStack_e0 = 6;
    *(int **)(unaff_EBP + -0x10) = piStack_e4;
    puStack_c8 = *(undefined **)(unaff_EBP + -0x30);
    puStack_e8 = (undefined *)0x77912a;
    iVar1 = (**(code **)(iVar1 + 0x80))();
    if (iVar1 < 0) {
      puStack_e8 = &DAT_00963cc8;
      uStack_ec = *(undefined4 *)(unaff_EBP + -0x10);
      uStack_f4 = 0x77913c;
      iStack_f0 = iVar1;
      FUN_00878e09();
    }
    puStack_e8 = (undefined *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_ec = 0x779149;
    puStack_e8 = (undefined *)FUN_00402bc3();
    if ((int)puStack_e8 < 0) {
      uStack_ec = 0x779154;
      FUN_00878dfb();
    }
    if (*(int *)(extraout_ECX + 0x7c) == 0) {
      puStack_e8 = (undefined *)0x80004003;
      uStack_ec = 0x779164;
      FUN_00878dfb();
    }
    puStack_e8 = (undefined *)0x77916c;
    iVar1 = FUN_0040e53d();
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + iVar1;
    puStack_e8 = (undefined *)0x3;
    uStack_ec = 0xff;
    iStack_f0 = 0x77917e;
    FUN_004031b7();
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(extraout_ECX + 0x80);
    piStack_104 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (piStack_104 == (int *)0x0) {
      puStack_e8 = (undefined *)0x80004003;
      uStack_ec = 0x77919c;
      FUN_00878dfb();
      piStack_104 = *(int **)(unaff_EBP + 8);
    }
    iVar1 = *piStack_104;
    uStack_f8 = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_f4 = *(undefined4 *)(unaff_EBP + -0x3c);
    iStack_f0 = *(undefined4 *)(unaff_EBP + -0x38);
    uStack_ec = *(undefined4 *)(unaff_EBP + -0x34);
    puStack_e8 = *(undefined **)(unaff_EBP + -0x30);
    iVar3 = *(int *)(unaff_EBP + -0x1c);
    uStack_100 = 6;
    *(int **)(unaff_EBP + -0x10) = piStack_104;
    iStack_fc = iVar3;
    iVar1 = (**(code **)(iVar1 + 0x80))();
    if (iVar1 < 0) {
      piStack_10c = *(int **)(unaff_EBP + -0x10);
      puStack_114 = (undefined1 *)0x7791d2;
      iStack_110 = iVar1;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_10c = (int *)0x7791df;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_10c = (int *)0x7791ea;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x20) = iVar3 + 4;
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    *(int *)(unaff_EBP + -0x10) = extraout_ECX + 0x90;
    do {
      if (*(int *)(extraout_ECX + 0x74) == *(int *)(unaff_EBP + -0x14)) {
        if (*(int *)(unaff_EBP + 8) == 0) {
          piStack_10c = (int *)0x77921d;
          FUN_00878dfb();
        }
        piVar4 = *(int **)(unaff_EBP + 8);
        piStack_10c = (int *)0x12;
        iStack_110 = 0xdd;
        puStack_114 = *(undefined1 **)(unaff_EBP + -0x1c);
        iVar1 = (**(code **)(*piVar4 + 0x8c))(piVar4,6);
        if (iVar1 < 0) {
          puStack_114 = (undefined1 *)0x77924a;
          iStack_110 = iVar1;
          piStack_10c = piVar4;
          FUN_00878e09();
        }
        pIVar6 = *(IBinding **)(unaff_EBP + -0x28);
      }
      else {
        pIVar6 = *(IBinding **)(unaff_EBP + -0x24);
      }
      piStack_10c = (int *)0x77925a;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),pIVar6);
      piStack_10c = (int *)0x779263;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_10c = (int *)0x779273;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_0087a1b0();
      piStack_10c = (int *)(unaff_EBP + -0x8c);
      iStack_110 = 0x779294;
      iStack_110 = FUN_00449749();
      puStack_114 = (undefined1 *)&piStack_104;
      uVar2 = FUN_00412335(*(undefined4 *)(unaff_EBP + -0x14));
      *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_114;
      FUN_004033a1(uVar2);
      uVar2 = *(undefined4 *)(unaff_EBP + -0x20);
      uVar5 = 0x1a;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_004115d9(0x1a,uVar2);
      FUN_00448e3a(uVar5,uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_10c = (int *)0x7792d2;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_10c = (int *)0x7792dd;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      piStack_10c = (int *)0x7792ea;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_10c = (int *)0x7792f5;
        FUN_00878dfb();
      }
      piStack_10c = (int *)0x7792fe;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      piStack_10c = (int *)0x77930b;
      FUN_00403191();
      piStack_10c = (int *)(unaff_EBP + -0x6c);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_110 = 0x77931f;
      iStack_110 = FUN_00449749();
      puStack_114 = (undefined1 *)0x77932a;
      uVar2 = FUN_00449713();
      *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_114;
      FUN_00448a17(uVar2);
      uVar2 = *(undefined4 *)(unaff_EBP + -0x20);
      uVar5 = 0x42;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_004115d9(0x42,uVar2);
      FUN_00448e3a(uVar5,uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      piStack_10c = (int *)0x77935b;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_10c = (int *)0x779366;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      piStack_10c = (int *)0x779373;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_10c = (int *)0x77937e;
        FUN_00878dfb();
      }
      piStack_10c = (int *)0x77938a;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      piStack_10c = (int *)0x77939d;
      iStack_110 = FUN_00449713();
      *(int ***)(unaff_EBP + -0x2c) = &piStack_10c;
      puStack_114 = (undefined1 *)0x7793a9;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_110 = 0x7793b5;
      FUN_0044974c();
      iStack_110 = 0x7793bc;
      iVar1 = FUN_00448ebb();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      piStack_10c = (int *)0x7793d3;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_10c = (int *)0x7793de;
        FUN_00878dfb();
      }
      if (((char *)**(undefined4 **)(unaff_EBP + -0x10) == (char *)0x0) ||
         (*(char *)**(undefined4 **)(unaff_EBP + -0x10) == '\0')) {
        piStack_10c = (int *)0x779405;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),
                   *(IBinding **)(*(int *)(extraout_ECX + 0x8c) + 0x83c));
      }
      piStack_10c = (int *)0x77940f;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
      piStack_10c = (int *)(unaff_EBP + -0x3c);
      iStack_110 = 0x779419;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_10c = (int *)0x779425;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      piStack_10c = (int *)0x779433;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
      piStack_10c = (int *)(unaff_EBP + -0x4c);
      iStack_110 = 0x77943d;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_10c = (int *)0x779449;
        FUN_00878dfb();
      }
      piStack_10c = (int *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iStack_110 = 0x77945d;
      iStack_110 = FUN_00449749();
      puStack_114 = (undefined1 *)0x779469;
      uVar2 = FUN_00449713();
      *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_114;
      puStack_114 = extraout_ECX_00;
      FUN_00448a17(uVar2);
      uVar2 = *(undefined4 *)(unaff_EBP + -0x20);
      iVar1 = (0x56U - iVar1 >> 1) + 0x92;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_004115d9(iVar1,uVar2);
      FUN_00448e3a(iVar1,uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      piStack_10c = (int *)0x77949f;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_10c = (int *)0x7794aa;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      piStack_10c = (int *)0x7794b7;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_10c = (int *)0x7794c2;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x12;
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 0x12;
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 4;
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    } while (*(int *)(unaff_EBP + -0x14) + -1 < 5);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      piStack_10c = (int *)0x7794ef;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
      piStack_10c = (int *)0x779500;
      (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      piStack_10c = (int *)0x779511;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      piStack_10c = (int *)0x779522;
      (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


