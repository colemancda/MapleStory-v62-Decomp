/* FUN_0068531f - 0x0068531f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0068531f(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 *_Dst;
  int *extraout_ECX;
  int unaff_EBP;
  bool bVar9;
  undefined *puStack_210;
  int *piStack_20c;
  undefined1 *puStack_208;
  int *piStack_204;
  int *piStack_200;
  int *piStack_1fc;
  int *piStack_1f8;
  int *piStack_1f4;
  undefined4 *puStack_1f0;
  int *piStack_1ec;
  int iStack_1e8;
  int *piStack_1e4;
  int *piStack_1d4;
  undefined1 *puStack_1d0;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x20) = _Dst;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *_Dst = &PTR_LAB_008e84a0;
  puStack_1d0 = (undefined1 *)0x68534e;
  _memset(_Dst,0,0xc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_006f5512();
  iVar3 = *(int *)(unaff_EBP + 8);
  _Dst[8] = *(undefined4 *)(unaff_EBP + 0xc);
  _Dst[7] = iVar3;
  _Dst[9] = 0;
  FUN_00414f8b();
  _Dst[10] = 0;
  _Dst[0xb] = 0;
  uVar4 = *(undefined4 *)(unaff_EBP + 0x10);
  _Dst[0xc] = 0xffffffff;
  _Dst[0xd] = 0;
  _Dst[0xe] = 0;
  _Dst[0xf] = 0;
  *_Dst = &PTR_FUN_008ee9b0;
  *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar3 == 1) {
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_1d0 = (undefined1 *)0x68583b;
    FUN_0040381b();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int *)(unaff_EBP + -0x74) != 0) {
      FUN_00403384();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00403191();
    piStack_1ec = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (piStack_1ec == (int *)0x0) {
      FUN_00878dfb();
      piStack_1ec = *(int **)(unaff_EBP + -0x14);
    }
    puStack_1d0 = *(undefined1 **)(unaff_EBP + -0x140);
    iVar3 = *piStack_1ec;
    piStack_1e4 = (int *)0x20;
    iStack_1e8 = 0x20;
    *(int **)(unaff_EBP + -0x10) = piStack_1ec;
    piStack_1d4 = *(int **)(unaff_EBP + -0xf4);
    puStack_1f0 = (undefined4 *)0x6858b2;
    iVar3 = (**(code **)(iVar3 + 0x2c))();
    if (iVar3 < 0) {
      puStack_1f0 = (undefined4 *)&DAT_00963cc8;
      piStack_1f4 = *(int **)(unaff_EBP + -0x10);
      piStack_1fc = (int *)0x6858c4;
      piStack_1f8 = (int *)iVar3;
      FUN_00878e09();
    }
    puStack_1f0 = (undefined4 *)(unaff_EBP + -0x100);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_1f4 = (int *)0x6858d4;
    puStack_1f0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_1f0 < 0) {
      piStack_1f4 = (int *)0x6858df;
      FUN_00878dfb();
    }
    puStack_1f0 = (undefined4 *)(unaff_EBP + -0x140);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piStack_1f4 = (int *)0x6858ef;
    puStack_1f0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_1f0 < 0) {
      piStack_1f4 = (int *)0x6858fa;
      FUN_00878dfb();
    }
    puStack_1f0 = (undefined4 *)0x3;
    piStack_1f4 = (int *)0xff;
    piStack_1f8 = (int *)0x685909;
    FUN_004031b7();
    puStack_1f0 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_1f4 = (int *)0x68591e;
    FUN_00403191();
    puStack_1f0 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    piStack_1f4 = (int *)0x68592e;
    FUN_00403191();
    puStack_1f0 = (undefined4 *)0x0;
    piStack_1f4 = (int *)0x0;
    piStack_1f8 = (int *)(unaff_EBP + -0xa0);
    piStack_1fc = (int *)(unaff_EBP + -0xe0);
    puStack_208 = (undefined1 *)&piStack_200;
    *(int ***)(unaff_EBP + -0x10) = &piStack_200;
    piStack_204 = (int *)0xb12;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_20c = (int *)0x685958;
    FUN_00679e4e();
    piStack_204 = (int *)(unaff_EBP + -0x1b0);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_208 = (undefined1 *)0x685968;
    FUN_00405a1d();
    puStack_208 = (undefined1 *)0x68596f;
    FUN_00402660();
    puStack_208 = (undefined1 *)0x685976;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    piStack_1f8 = (int *)0x685981;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
    puStack_1f0 = (undefined4 *)0x68598c;
    piStack_20c = (int *)FUN_004115d9();
    iVar3 = *piStack_20c;
    piStack_200 = *(int **)(unaff_EBP + -0x10);
    piStack_1fc = *(int **)(unaff_EBP + -0x68);
    piStack_1f8 = *(int **)(unaff_EBP + -100);
    piStack_204 = (int *)0x0;
    piStack_1f4 = *(int **)(unaff_EBP + -0x60);
    puStack_208 = (undefined1 *)0x0;
    *(int **)(unaff_EBP + -0x28) = piStack_20c;
    puStack_1f0 = *(undefined4 **)(unaff_EBP + -0x5c);
    puStack_210 = (undefined *)0x6859a9;
    iVar3 = (**(code **)(iVar3 + 0x80))();
    if (iVar3 < 0) {
      puStack_210 = &DAT_00963cc8;
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x28));
    }
    puStack_210 = (undefined *)(unaff_EBP + -0x1b0);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_210 = (undefined *)FUN_00402bc3();
    if ((int)puStack_210 < 0) {
      FUN_00878dfb();
    }
    puStack_210 = (undefined *)(unaff_EBP + -0xe0);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_210 = (undefined *)FUN_00402bc3();
    if ((int)puStack_210 < 0) {
      FUN_00878dfb();
    }
    puStack_210 = (undefined *)(unaff_EBP + -0xa0);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_210 = (undefined *)FUN_00402bc3();
    if ((int)puStack_210 < 0) {
      FUN_00878dfb();
    }
    puStack_210 = (undefined *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_210 = (undefined *)FUN_00402bc3();
    if ((int)puStack_210 < 0) {
      FUN_00878dfb();
    }
    puStack_210 = *(undefined **)(unaff_EBP + 0xc);
    FUN_004497f5(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      puStack_210 = (undefined *)0x2710;
      if (*(int *)(unaff_EBP + 0xc) / 10000 == 0xee) {
        *(undefined ***)(unaff_EBP + -0x10) = &puStack_210;
        FUN_00679e4e(&puStack_210,0x916);
        iVar3 = unaff_EBP + -400;
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        FUN_0040263d(iVar3);
        puStack_210 = (undefined *)FUN_004048a4(iVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        puStack_210 = (undefined *)FUN_00412348(unaff_EBP + -0x70);
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        puStack_210 = (undefined *)FUN_0041a485();
        if (((int)puStack_210 < 0) && (puStack_210 != (undefined *)0x80004002)) {
          FUN_00878dfb();
        }
        puStack_210 = (undefined *)0x685abe;
        FUN_004027b3();
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        puStack_210 = (undefined *)(unaff_EBP + -400);
      }
      else {
        *(undefined ***)(unaff_EBP + -0x10) = &puStack_210;
        FUN_00679e4e(&puStack_210,0x63a);
        iVar3 = unaff_EBP + -0x170;
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        FUN_0040263d(iVar3);
        puStack_210 = (undefined *)FUN_004048a4(iVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        puStack_210 = (undefined *)FUN_00412348(unaff_EBP + -0x80);
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        puStack_210 = (undefined *)FUN_0041a485();
        if (((int)puStack_210 < 0) && (puStack_210 != (undefined *)0x80004002)) {
          FUN_00878dfb();
        }
        puStack_210 = (undefined *)0x685b2d;
        FUN_004027b3();
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        puStack_210 = (undefined *)(unaff_EBP + -0x170);
      }
      puStack_210 = (undefined *)FUN_00402bc3();
      if ((int)puStack_210 < 0) {
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 8) != 0) {
        puStack_210 = (undefined *)0x3;
        FUN_004031b7(0xff);
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        if (*(int *)(unaff_EBP + 8) == 0) {
          puStack_210 = (undefined *)0x80004003;
          FUN_00878dfb();
        }
        puStack_210 = (undefined *)0x685b7c;
        iVar3 = FUN_0040e53d();
        iVar3 = (0x20 - iVar3) / 2;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        if (-1 < iVar3) {
          *(int *)(unaff_EBP + -0x18) = iVar3;
        }
        if (*(int *)(unaff_EBP + 8) == 0) {
          puStack_210 = (undefined *)0x80004003;
          FUN_00878dfb();
        }
        puStack_210 = (undefined *)0x685ba3;
        iVar3 = FUN_0040e48b();
        iVar3 = (0x20 - iVar3) / 2;
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
        if (-1 < iVar3) {
          *(int *)(unaff_EBP + -0x24) = iVar3;
        }
        piVar7 = *(int **)(unaff_EBP + -0x14);
        if (piVar7 == (int *)0x0) {
          puStack_210 = (undefined *)0x80004003;
          FUN_00878dfb();
          piVar7 = *(int **)(unaff_EBP + -0x14);
        }
        iVar3 = *piVar7;
        *(int **)(unaff_EBP + -0x10) = piVar7;
        puStack_210 = *(undefined **)(unaff_EBP + -0x38);
        iVar3 = (**(code **)(iVar3 + 0x80))
                          (piVar7,*(undefined4 *)(unaff_EBP + -0x24),
                           *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + 8),
                           *(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                           *(undefined4 *)(unaff_EBP + -0x3c));
        if (iVar3 < 0) {
          puStack_210 = &DAT_00963cc8;
          FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10));
        }
        puStack_210 = (undefined *)(unaff_EBP + -0x44);
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        puStack_210 = (undefined *)FUN_00402bc3();
        if ((int)puStack_210 < 0) {
          FUN_00878dfb();
        }
      }
    }
    puStack_210 = (undefined *)(unaff_EBP + -0x88);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -0x58) = 0;
    iVar3 = FUN_00455c59();
    uVar4 = *(undefined4 *)(iVar3 + 4);
    puStack_210 = (undefined *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    puVar5 = (undefined *)FUN_00650dae(uVar4,0x3eb6b0);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_210 = (undefined *)0x685c5a;
    FUN_0045e4a2();
    if ((*(int *)(unaff_EBP + -0x58) != 0) && (puVar5 != (undefined *)0x0)) {
      puStack_210 = puVar5;
      iVar3 = FUN_006509a1();
      puStack_210 = *(undefined **)(iVar3 + 0x150);
      uVar4 = FUN_00413367(iVar3 + 0x148);
      *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
      puStack_210 = (undefined *)0x685c8f;
      uVar4 = __ftol();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
    }
    puStack_210 = *(undefined **)(unaff_EBP + 0xc);
    FUN_00552e70(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
    }
    else {
      piStack_1d4 = (int *)&stack0xfffffe34;
      *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xfffffe34;
      puStack_1d0 = (undefined1 *)0x8e8;
      FUN_00679e4e();
      puStack_1d0 = (undefined1 *)(unaff_EBP + -0x180);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      piStack_1d4 = (int *)0x685cda;
      FUN_0040263d();
      piStack_1d4 = (int *)0x685ce1;
      FUN_004048a4();
      *(undefined4 *)(unaff_EBP + -0x2c) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      uVar4 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x34) = uVar4;
    }
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if (*(int *)(unaff_EBP + -0x34) != 0) {
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0x1c;
    if ((*(byte *)(unaff_EBP + -0x2c) & 1) != 0) {
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
    }
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      puStack_1d0 = &stack0xfffffe38;
      *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xfffffe38;
      piStack_1d4 = (int *)0x685d60;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      puStack_1d0 = (undefined1 *)0x685d73;
      FUN_0040263d();
      puStack_1d0 = (undefined1 *)0x685d7a;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      uVar4 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      puStack_1d0 = (undefined1 *)0x685d97;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
    }
    FUN_004497f5();
    puStack_1d0 = &stack0xfffffe38;
    *(undefined1 **)(unaff_EBP + 0xc) = &stack0xfffffe38;
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    piStack_1d4 = (int *)0x685dce;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    puStack_1d0 = (undefined1 *)0x685de1;
    FUN_0040263d();
    puStack_1d0 = (undefined1 *)0x685de8;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    iVar3 = FUN_00412550();
    *(uint *)(*(int *)(unaff_EBP + -0x20) + 0x34) = (uint)(iVar3 != 0);
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    puStack_1d0 = (undefined1 *)0x685e0e;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    FUN_004027eb();
    FUN_004027eb();
    FUN_004027eb();
    *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x10) * *(int *)(unaff_EBP + -0x30);
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_004027eb();
  }
  else if (iVar3 == 2) {
    iVar3 = FUN_0064d61f();
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
               *(IBinding **)(iVar3 + 0x90));
  }
  else if (iVar3 == 3) {
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    puStack_1d0 = (undefined1 *)0x6853e4;
    FUN_0040381b();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int *)(unaff_EBP + -0x6c) != 0) {
      FUN_00403384();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    FUN_00403191();
    piStack_1ec = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    if (piStack_1ec == (int *)0x0) {
      FUN_00878dfb();
      piStack_1ec = *(int **)(unaff_EBP + -0x14);
    }
    puStack_1d0 = *(undefined1 **)(unaff_EBP + -0xc0);
    iVar3 = *piStack_1ec;
    piStack_1e4 = (int *)0x20;
    iStack_1e8 = 0x20;
    *(int **)(unaff_EBP + -0x10) = piStack_1ec;
    piStack_1d4 = *(int **)(unaff_EBP + -0x48);
    puStack_1f0 = (undefined4 *)0x685455;
    iVar3 = (**(code **)(iVar3 + 0x2c))();
    if (iVar3 < 0) {
      puStack_1f0 = (undefined4 *)&DAT_00963cc8;
      piStack_1f4 = *(int **)(unaff_EBP + -0x10);
      piStack_1fc = (int *)0x685467;
      piStack_1f8 = (int *)iVar3;
      FUN_00878e09();
    }
    puStack_1f0 = (undefined4 *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    piStack_1f4 = (int *)0x685474;
    puStack_1f0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_1f0 < 0) {
      piStack_1f4 = (int *)0x68547f;
      FUN_00878dfb();
    }
    puStack_1f0 = (undefined4 *)(unaff_EBP + -0xc0);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piStack_1f4 = (int *)0x68548f;
    puStack_1f0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_1f0 < 0) {
      piStack_1f4 = (int *)0x68549a;
      FUN_00878dfb();
    }
    puStack_1f0 = (undefined4 *)0x3;
    piStack_1f4 = (int *)0xff;
    piStack_1f8 = (int *)0x6854ac;
    FUN_004031b7();
    puStack_1f0 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    piStack_1f4 = (int *)0x6854c1;
    FUN_00403191();
    puStack_1f0 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    piStack_1f4 = (int *)0x6854d1;
    FUN_00403191();
    puStack_1f0 = (undefined4 *)0x0;
    piStack_1f4 = (int *)0x0;
    piStack_1f8 = (int *)(unaff_EBP + -0x110);
    piStack_1fc = (int *)(unaff_EBP + -0xf0);
    puStack_208 = (undefined1 *)&piStack_200;
    *(int ***)(unaff_EBP + -0x10) = &piStack_200;
    piStack_204 = (int *)0xb12;
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    piStack_20c = (int *)0x6854fb;
    FUN_00679e4e();
    piStack_204 = (int *)(unaff_EBP + -0x160);
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    puStack_208 = (undefined1 *)0x68550b;
    FUN_00405a1d();
    puStack_208 = (undefined1 *)0x685512;
    FUN_00402660();
    puStack_208 = (undefined1 *)0x685519;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    piStack_1f8 = (int *)0x685524;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
    puStack_1f0 = (undefined4 *)0x68552f;
    piStack_20c = (int *)FUN_004115d9();
    iVar3 = *piStack_20c;
    piStack_200 = *(int **)(unaff_EBP + -0x10);
    piStack_1fc = *(int **)(unaff_EBP + -0xd0);
    piStack_1f8 = *(int **)(unaff_EBP + -0xcc);
    piStack_204 = (int *)0x0;
    piStack_1f4 = *(int **)(unaff_EBP + -200);
    puStack_208 = (undefined1 *)0x0;
    *(int **)(unaff_EBP + -0x28) = piStack_20c;
    puStack_1f0 = *(undefined4 **)(unaff_EBP + -0xc4);
    puStack_210 = (undefined *)0x68554f;
    iVar3 = (**(code **)(iVar3 + 0x80))();
    if (iVar3 < 0) {
      puStack_1d0 = (undefined1 *)0x685561;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    puStack_1d0 = (undefined1 *)0x6855fd;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    if (*(int *)(unaff_EBP + -0x78) != 0) {
      FUN_00403384();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    FUN_00403191();
    puStack_1d0 = (undefined1 *)(unaff_EBP + -0x120);
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    piStack_1d4 = (int *)0x685652;
    FUN_00411641();
    *(int ***)(unaff_EBP + 0xc) = &piStack_1d4;
    piStack_1d4 = extraout_ECX;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    uVar4 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x7c) = uVar4;
    iVar3 = FUN_0041a581();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 8) != 0) {
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      if (*(int *)(unaff_EBP + 8) == 0) {
        FUN_00878dfb();
      }
      iVar3 = FUN_0040e53d();
      iVar3 = (0x20 - iVar3) / 2;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      if (-1 < iVar3) {
        *(int *)(unaff_EBP + 0xc) = iVar3;
      }
      if (*(int *)(unaff_EBP + 8) == 0) {
        FUN_00878dfb();
      }
      iVar3 = FUN_0040e48b();
      iVar3 = (0x20 - iVar3) / 2;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      if (-1 < iVar3) {
        *(int *)(unaff_EBP + -0x18) = iVar3;
      }
      piVar7 = *(int **)(unaff_EBP + -0x14);
      if (piVar7 == (int *)0x0) {
        FUN_00878dfb();
        piVar7 = *(int **)(unaff_EBP + -0x14);
      }
      iVar3 = *piVar7;
      piStack_1d4 = *(int **)(unaff_EBP + 8);
      puStack_1d0 = *(undefined1 **)(unaff_EBP + -0x150);
      *(int **)(unaff_EBP + -0x10) = piVar7;
      piStack_1e4 = (int *)0x68579e;
      iVar3 = (**(code **)(iVar3 + 0x80))();
      if (iVar3 < 0) {
        puStack_1d0 = (undefined1 *)0x6857b0;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    FUN_00402676();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
    }
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  FUN_004031b7();
  bVar9 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  if (bVar9) {
    FUN_00878dfb();
  }
  puStack_1d0 = (undefined1 *)0x0;
  piStack_1d4 = (int *)0x0;
  piStack_1e4 = (int *)0x685ea4;
  puVar6 = (undefined4 *)FUN_0042a39f();
  p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x20) + 0x28);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar6);
  if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x32;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  if (DAT_0097c1ac == 0) {
    FUN_00878dfb();
  }
  FUN_00429328();
  FUN_0040ee87();
  iVar3 = *(int *)p_Var1;
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  if (iVar3 == 0) {
    FUN_00878dfb();
  }
  puStack_1d0 = *(undefined1 **)(unaff_EBP + -0x44);
  piStack_1d4 = *(int **)(*(int *)(unaff_EBP + -0x20) + 0x28);
  iVar3 = *piStack_1d4;
  *(int **)(unaff_EBP + 0xc) = piStack_1d4;
  iVar3 = (**(code **)(iVar3 + 100))();
  if (iVar3 < 0) {
    piStack_1e4 = (int *)0x685f57;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x34;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  piVar7 = (int *)(*(int *)(unaff_EBP + -0x20) + 0x28);
  if (*(int *)(*(int *)(unaff_EBP + -0x20) + 0x28) == 0) {
    FUN_00878dfb();
  }
  piVar2 = (int *)*piVar7;
  iVar3 = (**(code **)(*piVar2 + 0xe0))();
  if (iVar3 < 0) {
    piStack_1ec = (int *)0x685fb5;
    iStack_1e8 = iVar3;
    piStack_1e4 = piVar2;
    FUN_00878e09();
  }
  piStack_1e4 = (int *)0x685fbf;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
  piStack_1e4 = (int *)(unaff_EBP + -0x54);
  iStack_1e8 = 0x685fce;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    piStack_1e4 = (int *)0x685fda;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  piStack_1e4 = (int *)0x685feb;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
  piStack_1e4 = (int *)(unaff_EBP + -0x90);
  iStack_1e8 = 0x685ff8;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    piStack_1e4 = (int *)0x686004;
    FUN_00878dfb();
  }
  piStack_1e4 = (int *)0x40;
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  iStack_1e8 = 0x686017;
  FUN_004031b7();
  piStack_1e4 = (int *)0xd2;
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  iStack_1e8 = 0x68602a;
  FUN_004031b7();
  piStack_1e4 = (int *)0x1f4;
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  iStack_1e8 = 0x68603d;
  FUN_004031b7();
  iVar3 = *piVar7;
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  if (iVar3 == 0) {
    piStack_1e4 = (int *)0x68604f;
    FUN_00878dfb();
  }
  piStack_1e4 = (int *)(unaff_EBP + -0x90);
  iStack_1e8 = unaff_EBP + -0xa0;
  piStack_1ec = (int *)(unaff_EBP + -0x68);
  puStack_1f0 = (undefined4 *)(unaff_EBP + -0x44);
  piStack_1f4 = *(int **)(unaff_EBP + -0x14);
  piStack_1f8 = (int *)(unaff_EBP + -0xb0);
  piStack_1fc = (int *)0x68607c;
  FUN_004250ac();
  piStack_1e4 = (int *)0x686088;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_1e4 = (int *)0x686093;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  piStack_1e4 = (int *)0x6860a0;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_1e4 = (int *)0x6860ab;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  piStack_1e4 = (int *)0x6860b8;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_1e4 = (int *)0x6860c3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  piStack_1e4 = (int *)0x6860d3;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_1e4 = (int *)0x6860de;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x36;
  piStack_1e4 = (int *)0x6860ee;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_1e4 = (int *)0x6860f9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_1e4 = (int *)0x686106;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_1e4 = (int *)0x686111;
    FUN_00878dfb();
  }
  piStack_1e4 = (int *)0x68611b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
  piStack_1e4 = (int *)(unaff_EBP + -0x54);
  iStack_1e8 = 0x686125;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    piStack_1e4 = (int *)0x686131;
    FUN_00878dfb();
  }
  piStack_1e4 = (int *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 0x3b;
  iStack_1e8 = 0x686140;
  FUN_004031b7();
  bVar9 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x3c;
  if (bVar9) {
    piStack_1e4 = (int *)0x686156;
    FUN_00878dfb();
  }
  piStack_1e4 = (int *)(unaff_EBP + -0x44);
  iStack_1e8 = 0xc006156c;
  piStack_1ec = (int *)0x0;
  puStack_1f0 = (undefined4 *)0x0;
  piStack_1f4 = (int *)0x0;
  piStack_1f8 = (int *)0x0;
  piStack_1fc = (int *)(unaff_EBP + 0xc);
  piStack_200 = (int *)0x686176;
  puVar6 = (undefined4 *)FUN_0042a39f();
  p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x20) + 0x2c);
  piStack_1e4 = (int *)0x686185;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar6);
  if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
    piStack_1e4 = (int *)0x686192;
    (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3b;
  piStack_1e4 = (int *)0x68619f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_1e4 = (int *)0x6861aa;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_1e4 = (int *)0x6861b7;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_1e4 = (int *)0x6861c2;
    FUN_00878dfb();
  }
  if (DAT_0097c1ac == 0) {
    piStack_1e4 = (int *)0x6861d4;
    FUN_00878dfb();
  }
  piStack_1e4 = (int *)0x6861e3;
  puVar6 = (undefined4 *)FUN_00429328();
  piVar7 = (int *)*puVar6;
  *(undefined2 *)(unaff_EBP + -0x54) = 0xd;
  *(int **)(unaff_EBP + -0x4c) = piVar7;
  iVar3 = *piVar7;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  piStack_1e4 = (int *)0x6861f8;
  (**(code **)(iVar3 + 4))();
  iVar3 = *(int *)p_Var1;
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  if (iVar3 == 0) {
    piStack_1e4 = (int *)0x80004003;
    iStack_1e8 = 0x68620a;
    FUN_00878dfb();
  }
  puStack_1f0 = *(undefined4 **)(unaff_EBP + -0x54);
  piStack_1ec = *(int **)(unaff_EBP + -0x50);
  piStack_1f4 = *(int **)(*(int *)(unaff_EBP + -0x20) + 0x2c);
  iVar3 = *piStack_1f4;
  iStack_1e8 = *(undefined4 *)(unaff_EBP + -0x4c);
  *(int **)(unaff_EBP + 0xc) = piStack_1f4;
  piStack_1e4 = *(int **)(unaff_EBP + -0x48);
  piStack_1f8 = (int *)0x686227;
  piVar7 = (int *)(**(code **)(iVar3 + 100))();
  if ((int)piVar7 < 0) {
    piStack_1f8 = (int *)&DAT_00963de8;
    piStack_1fc = *(int **)(unaff_EBP + 0xc);
    piStack_204 = (int *)0x686239;
    piStack_200 = piVar7;
    FUN_00878e09();
  }
  piStack_1f8 = (int *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  piStack_1fc = (int *)0x686246;
  piStack_1f8 = (int *)FUN_00402bc3();
  if ((int)piStack_1f8 < 0) {
    piStack_1fc = (int *)0x686251;
    FUN_00878dfb();
  }
  piStack_1f8 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piStack_1f8 != (int *)0x0) {
    piStack_1fc = (int *)0x686262;
    (**(code **)(*piStack_1f8 + 8))();
  }
  iVar3 = *(int *)(unaff_EBP + -0x20);
  if (*(int *)(iVar3 + 0x2c) == 0) {
    piStack_1f8 = (int *)0x80004003;
    piStack_1fc = (int *)0x686274;
    FUN_00878dfb();
  }
  piVar7 = *(int **)(iVar3 + 0x2c);
  piStack_1f8 = (int *)0xd2ffffff;
  piStack_200 = (int *)0x686285;
  piStack_1fc = piVar7;
  iVar8 = (**(code **)(*piVar7 + 0xe0))();
  if (iVar8 < 0) {
    piStack_200 = (int *)&DAT_00963df8;
    piStack_20c = (int *)0x686295;
    puStack_208 = (undefined1 *)iVar8;
    piStack_204 = piVar7;
    FUN_00878e09();
  }
  piStack_200 = *(int **)(unaff_EBP + 0x10);
  *(int *)(iVar3 + 0x3c) = *(int *)(unaff_EBP + -0x30) / 0x10;
  piStack_204 = (int *)0x6862ab;
  FUN_0068666f();
  piStack_200 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piStack_200 != (int *)0x0) {
    piStack_204 = (int *)0x6862bc;
    (**(code **)(*piStack_200 + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_200 = (int *)0x6862c8;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


