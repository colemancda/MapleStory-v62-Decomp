/* FUN_007980a6 - 0x007980a6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007980a6(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int iVar1;
  char *_Str;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined1 *puStack_10c;
  undefined1 *puStack_108;
  int iStack_104;
  int *piStack_100;
  int *piStack_f0;
  undefined1 *puStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0x524);
  *(int *)(unaff_EBP + -0x2c) = extraout_ECX;
  if (iVar1 == 0) {
    iVar1 = FUN_0079b949();
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(int *)(unaff_EBP + -0x24) = iVar1 + 0x14;
    *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + 8) / 10000;
    do {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x40) == 0x1ad) {
        FUN_00434e21();
      }
      else {
        FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x3c) != 0) {
          FUN_00434e38();
        }
      }
      FUN_0087a1b0();
      _Str = (char *)FUN_0087b818();
      uStack_d8 = 0x798170;
      _strlen(_Str);
      FUN_0045efbb();
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uStack_d8 = 0;
      uStack_dc = 0;
      iStack_e0 = 0x7981ae;
      (*DAT_0097b4c8)();
      iStack_e0 = 0x7981bb;
      FUN_0087a1b0();
      iStack_e0 = 0;
      iStack_e4 = 0;
      iStack_e8 = unaff_EBP + -0x84;
      puStack_ec = (undefined1 *)(unaff_EBP + -0x74);
      piStack_f0 = (int *)0xffffffff;
      FUN_00449713();
      FUN_00456ad5();
      *(int ***)(unaff_EBP + -0x18) = &piStack_f0;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00405a1d();
      FUN_00402660();
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_e8 = 0x798211;
      iVar1 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x38) = iVar1;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      if (iVar1 != 0) {
        iStack_e0 = unaff_EBP + -0x38;
        iStack_e4 = 0x798227;
        iStack_e0 = FUN_00404b30();
        if ((iStack_e0 < 0) && (iStack_e0 != -0x7fffbffe)) {
          iStack_e4 = 0x798238;
          FUN_00878dfb();
        }
      }
      iStack_e0 = unaff_EBP + -0x94;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_e4 = 0x798248;
      iStack_e0 = FUN_00402bc3();
      if (iStack_e0 < 0) {
        iStack_e4 = 0x798253;
        FUN_00878dfb();
      }
      iStack_e0 = unaff_EBP + -0x74;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_e4 = 0x798260;
      iStack_e0 = FUN_00402bc3();
      if (iStack_e0 < 0) {
        iStack_e4 = 0x79826b;
        FUN_00878dfb();
      }
      iStack_e0 = unaff_EBP + -0x84;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_e4 = 0x79827b;
      iVar2 = FUN_00402bc3();
      iVar1 = iStack_e0;
      if (iVar2 < 0) {
        iStack_e4 = 0x798286;
        iStack_e0 = iVar2;
        FUN_00878dfb();
        iVar1 = extraout_ECX_00;
      }
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        iStack_e0 = 0x798623;
        FUN_004027eb();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          iStack_e0 = *(int *)(unaff_EBP + -0x10) + -0xc;
          iStack_e4 = 0x798637;
          FUN_00434e38();
        }
        break;
      }
      iStack_e0 = 0;
      puStack_ec = (undefined1 *)&iStack_e4;
      *(int **)(unaff_EBP + -0x18) = &iStack_e4;
      iStack_e8 = 0xdbf;
      piStack_f0 = (int *)0x7982a3;
      iStack_e4 = iVar1;
      FUN_00679e4e();
      iStack_e8 = unaff_EBP + -0xb4;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      puStack_ec = (undefined1 *)0x7982b6;
      FUN_0040263d();
      puStack_ec = (undefined1 *)0x7982bd;
      iStack_e4 = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_e8 = 0x7982c7;
      uVar3 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
      iStack_e8 = unaff_EBP + -0xb4;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      puStack_ec = (undefined1 *)0x7982da;
      iStack_e0 = FUN_00402bc3();
      if (iStack_e0 < 0) {
        iStack_e4 = 0x7982e7;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      iStack_e0 = 0x3b1;
      iStack_e4 = unaff_EBP + -0x30;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_e8 = 0x7982fe;
      puVar4 = (undefined4 *)FUN_00679d86();
      iStack_e8 = *puVar4;
      iStack_e0 = 0;
      iStack_e4 = unaff_EBP + -0x14;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      puStack_ec = (undefined1 *)0x79830f;
      FUN_00437222();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_e0 = 0x79831e;
      FUN_00402676();
      iStack_e0 = unaff_EBP + -0x34;
      iStack_e4 = 0x79832d;
      piVar5 = (int *)FUN_0078ffba();
      iVar1 = *piVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      if (iVar1 == 0) {
        iStack_e0 = 0x80004003;
        iStack_e4 = 0x798341;
        FUN_00878dfb();
      }
      iStack_e0 = unaff_EBP + -0xa4;
      iStack_e4 = 0x79834f;
      puVar4 = (undefined4 *)FUN_004308ad();
      piVar5 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (piVar5 == (int *)0x0) {
        iStack_e0 = 0x80004003;
        iStack_e4 = 0x798366;
        FUN_00878dfb();
        piVar5 = *(int **)(unaff_EBP + -0x14);
      }
      iVar1 = *piVar5;
      puStack_ec = (undefined1 *)*puVar4;
      iStack_e8 = puVar4[1];
      iStack_e4 = puVar4[2];
      *(int **)(unaff_EBP + -0x20) = piVar5;
      iStack_e0 = puVar4[3];
      piStack_f0 = piVar5;
      iVar1 = (**(code **)(iVar1 + 100))();
      if (iVar1 < 0) {
        piStack_100 = (int *)0x79838d;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_004125d9();
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        FUN_00878dfb();
      }
      piVar5 = *(int **)(unaff_EBP + -0x14);
      iStack_104 = (**(code **)(*piVar5 + 0xa8))();
      if (iStack_104 < 0) {
        puStack_108 = (undefined1 *)0x7983e2;
        piStack_100 = piVar5;
        FUN_00878e09();
      }
      puStack_108 = (undefined1 *)&piStack_100;
      *(int ***)(unaff_EBP + -0x18) = &piStack_100;
      iStack_104 = 0x3d2;
      puStack_10c = (undefined1 *)0x7983f9;
      FUN_00679e4e();
      iStack_104 = unaff_EBP + -0xc4;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      puStack_108 = (undefined1 *)0x79840c;
      FUN_0040263d();
      puStack_108 = (undefined1 *)0x798413;
      piStack_100 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_104 = 0x79841d;
      uVar3 = FUN_00412550();
      this = *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x24);
      *(undefined4 *)(this + -8) = uVar3;
      iStack_104 = unaff_EBP + -0xc4;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      puStack_108 = (undefined1 *)0x798433;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_100 = (int *)0x798440;
        FUN_00878dfb();
      }
      piStack_100 = (int *)0xff;
      iStack_104 = 3;
      puStack_10c = (undefined1 *)&puStack_108;
      *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_108;
      uStack_110 = 0x79845a;
      FUN_0043f93c();
      puStack_10c = (undefined1 *)0x0;
      uStack_110 = 0;
      iStack_118 = unaff_EBP + -0x14;
      *(undefined4 **)(unaff_EBP + -0x20) = &uStack_114;
      uStack_11c = 0x79846b;
      FUN_00433bdf();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_118 = 0x79847d;
      FUN_00424e27();
      iStack_118 = 0x798484;
      iStack_118 = FUN_0043210d();
      *(undefined4 **)(unaff_EBP + -0x18) = &uStack_11c;
      FUN_00424dbc(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      puVar4 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x44);
      piStack_100 = (int *)0x7984ad;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar4);
      if (*(int **)(unaff_EBP + -0x44) != (int *)0x0) {
        piStack_100 = (int *)0x7984ba;
        (**(code **)(**(int **)(unaff_EBP + -0x44) + 8))();
      }
      if (*(int *)this == 0) {
        *(undefined1 *)(unaff_EBP + -4) = 7;
        if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
          piStack_100 = (int *)0x7985fd;
          (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
          piStack_100 = (int *)0x79860d;
          (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00414ebb();
        break;
      }
      piStack_100 = (int *)0x7984ce;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
      piStack_100 = (int *)(unaff_EBP + -0x54);
      iStack_104 = 0x7984dd;
      iVar1 = FUN_00402e32();
      if (iVar1 < 0) {
        piStack_100 = (int *)0x7984e9;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      piStack_100 = (int *)0x7984f3;
      VariantInit((VARIANTARG *)(unaff_EBP + -100));
      piStack_100 = (int *)(unaff_EBP + -100);
      iStack_104 = 0x7984fd;
      iVar1 = FUN_00402e32();
      if (iVar1 < 0) {
        piStack_100 = (int *)0x798509;
        FUN_00878dfb();
      }
      iVar1 = *(int *)(unaff_EBP + 8) / 1000;
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      if ((iVar1 == 0x1392) || (*(undefined4 *)(unaff_EBP + -0x20) = 0, iVar1 == 0x10c2)) {
        *(undefined4 *)(unaff_EBP + -0x20) = 0x20;
      }
      piVar5 = *(int **)(unaff_EBP + -0x24);
      if (*piVar5 == 0) {
        piStack_100 = (int *)0x798541;
        FUN_00878dfb();
      }
      piVar5 = (int *)*piVar5;
      puStack_108 = *(undefined1 **)(unaff_EBP + -0x54);
      iStack_104 = *(undefined4 *)(unaff_EBP + -0x50);
      iVar1 = *piVar5;
      piStack_100 = *(int **)(unaff_EBP + -0x4c);
      uStack_11c = *(undefined4 *)(unaff_EBP + -0x20);
      iStack_118 = *(undefined4 *)(unaff_EBP + -100);
      uStack_114 = *(undefined4 *)(unaff_EBP + -0x60);
      uStack_110 = *(undefined4 *)(unaff_EBP + -0x5c);
      *(int **)(unaff_EBP + -0x18) = piVar5;
      puStack_10c = *(undefined1 **)(unaff_EBP + -0x58);
      iVar1 = (**(code **)(iVar1 + 0x110))(piVar5);
      if (iVar1 < 0) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 0x18;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
    } while (*(int *)(unaff_EBP + -0x28) < 5);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


