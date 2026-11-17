/* ptr_005b55e8 - 0x005b55e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_005b55e8(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int param_6)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int unaff_EBP;
  int *unaff_ESI;
  bool bVar6;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined1 *puStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int *piStack_18;
  int *piStack_c;
  int iStack_8;
  int iStack_4;
  
  while( true ) {
    iStack_4 = 0x5b55ed;
    piVar4 = (int *)FUN_004032b4();
    *(int **)(unaff_EBP + -0x40) = piVar4;
    *(int **)(unaff_EBP + -0x28) = unaff_ESI;
    if (piVar4 != unaff_ESI) {
      iVar5 = FUN_0041a581();
      if ((iVar5 < (int)unaff_ESI) && (iVar5 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x28);
    if (*(int **)(unaff_EBP + -0x10) == unaff_ESI) {
      FUN_00878dfb();
    }
    iStack_4 = unaff_EBP + -0x188;
    iStack_8 = unaff_EBP + -0x168;
    piStack_c = (int *)(unaff_EBP + -0x148);
    piStack_18 = (int *)0x5b5662;
    FUN_004250ac();
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_ESI) {
      FUN_00878dfb();
    }
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_ESI) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_ESI) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_ESI) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_ESI) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_ESI) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_ESI) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_ESI) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_ESI) {
      FUN_00878dfb();
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x88));
    iStack_4 = 0x5b5773;
    iVar5 = FUN_00402e32();
    if (iVar5 < (int)unaff_ESI) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x68));
    iStack_4 = 0x5b5797;
    iVar5 = FUN_00402e32();
    if (iVar5 < (int)unaff_ESI) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    iStack_4 = 0x5b57b9;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    iStack_4 = 0x5b57cb;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    iStack_4 = 0x5b57e1;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
    FUN_00403191();
    iStack_4 = 0xffffffff;
    iStack_8 = *(undefined4 *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    piStack_c = unaff_ESI;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    iStack_1c = unaff_EBP + -0x208;
    iStack_20 = unaff_EBP + -0x1e8;
    iStack_24 = -1;
    piStack_18 = unaff_ESI;
    FUN_00449713();
    FUN_00456ad5();
    *(int **)(unaff_EBP + -0x14) = &iStack_24;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    iStack_1c = 0x5b587a;
    piVar4 = (int *)FUN_004032b4();
    *(int **)(unaff_EBP + -0x48) = piVar4;
    *(int **)(unaff_EBP + -0x1c) = unaff_ESI;
    if (piVar4 != unaff_ESI) {
      piStack_18 = (int *)0x5b5890;
      iVar5 = FUN_0041a581();
      if ((iVar5 < (int)unaff_ESI) && (iVar5 != -0x7fffbffe)) {
        piStack_18 = (int *)0x5b58a1;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3c;
    if (*(int **)(unaff_EBP + -0x10) == unaff_ESI) {
      piStack_18 = (int *)0x5b58b7;
      FUN_00878dfb();
    }
    piStack_18 = (int *)(unaff_EBP + -0x68);
    iStack_1c = unaff_EBP + -0x268;
    iStack_20 = unaff_EBP + -0x248;
    iStack_24 = unaff_EBP + -0x228;
    FUN_004250ac();
    piStack_18 = (int *)0x5b58f3;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_ESI) {
      piStack_18 = (int *)0x5b58fe;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    if (*(int **)(unaff_EBP + -0x1c) != unaff_ESI) {
      piStack_18 = (int *)0x5b590f;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    piStack_18 = (int *)0x5b591f;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_ESI) {
      piStack_18 = (int *)0x5b592a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
    piStack_18 = (int *)0x5b593a;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_ESI) {
      piStack_18 = (int *)0x5b5945;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    piStack_18 = (int *)0x5b5955;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_ESI) {
      piStack_18 = (int *)0x5b5960;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    piStack_18 = (int *)0x5b5970;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_ESI) {
      piStack_18 = (int *)0x5b597b;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    piStack_18 = (int *)0x5b598b;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_ESI) {
      piStack_18 = (int *)0x5b5996;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    piStack_18 = (int *)0x5b59a6;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_ESI) {
      piStack_18 = (int *)0x5b59b1;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    piStack_18 = (int *)0x5b59be;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_ESI) {
      piStack_18 = (int *)0x5b59c9;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_18 = (int *)0x5b59d9;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_ESI) {
      piStack_18 = (int *)0x5b59e4;
      FUN_00878dfb();
    }
    piStack_18 = (int *)0x5b59f3;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x98));
    piStack_18 = (int *)(unaff_EBP + -0x98);
    iStack_1c = 0x5b5a00;
    iVar5 = FUN_00402e32();
    if (iVar5 < (int)unaff_ESI) {
      piStack_18 = (int *)0x5b5a0c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    piStack_18 = (int *)0x5b5a16;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
    piStack_18 = (int *)(unaff_EBP + -0x78);
    iStack_1c = 0x5b5a20;
    iVar5 = FUN_00402e32();
    if (iVar5 < (int)unaff_ESI) {
      piStack_18 = (int *)0x5b5a2c;
      FUN_00878dfb();
    }
    piVar4 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    if (piVar4 == unaff_ESI) {
      piStack_18 = (int *)0x5b5a41;
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + -0x10);
    }
    iStack_20 = *(undefined4 *)(unaff_EBP + -0x98);
    iStack_1c = *(undefined4 *)(unaff_EBP + -0x94);
    iVar5 = *piVar4;
    piStack_18 = *(int **)(unaff_EBP + -0x90);
    *(int **)(unaff_EBP + -0x14) = piVar4;
    iStack_24 = *(int *)(unaff_EBP + -0x6c);
    iVar5 = (**(code **)(iVar5 + 0x110))();
    if (iVar5 < 0) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffc4;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 4))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00424e82();
    FUN_00427af9();
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
    if (1 < *(int *)(unaff_EBP + -0x20)) break;
    uVar3 = *(undefined4 *)(unaff_EBP + 8);
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
    }
    *(undefined4 *)(unaff_EBP + -0x30) = uVar3;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_004031b7();
    bVar6 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (bVar6) {
      FUN_00878dfb();
    }
    puVar2 = (undefined4 *)FUN_0042a39f();
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               (IBinding *)*puVar2);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      FUN_00878dfb();
    }
    FUN_004489f5();
    FUN_0040ee87();
    piVar4 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (piVar4 == (int *)0x0) {
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + -0x10);
    }
    iVar5 = *piVar4;
    *(int **)(unaff_EBP + -0x14) = piVar4;
    iVar5 = (**(code **)(iVar5 + 100))();
    if (iVar5 < 0) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00412600();
    FUN_004489f5();
    FUN_0040ee87();
    piVar4 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (piVar4 == (int *)0x0) {
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + -0x10);
    }
    iVar5 = *piVar4;
    *(int **)(unaff_EBP + -0x14) = piVar4;
    iVar5 = (**(code **)(iVar5 + 0xfc))();
    if (iVar5 < 0) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00412600();
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb();
    }
    iVar5 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0xe0))();
    if (iVar5 < 0) {
      FUN_00878e09();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb();
    }
    *(int **)(unaff_EBP + -0x14) = *(int **)(unaff_EBP + -0x10);
    iVar5 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x90))();
    if (iVar5 < 0) {
      uStack_9c = *(undefined4 *)(unaff_EBP + -0x14);
      uStack_a4 = 0x5b4da6;
      iStack_a0 = iVar5;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    uStack_9c = 0x5b4db6;
    iVar5 = FUN_00402bc3();
    unaff_ESI = (int *)0x0;
    if (iVar5 < 0) {
      uStack_9c = 0x5b4dc3;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_9c = 0x5b4dd3;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      uStack_9c = 0x5b4dde;
      FUN_00878dfb();
    }
    uStack_9c = 0x5b4dea;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    uStack_9c = 0x5b4dfa;
    FUN_00403191();
    uStack_9c = 0xff;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_a0 = 0x5b4e12;
    FUN_004031b7();
    uStack_9c = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_a0 = 0x5b4e23;
    FUN_004031b7();
    uStack_9c = 300;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_a0 = 0x5b4e38;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    uStack_9c = 0x5b4e48;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    uStack_9c = 0x5b4e58;
    FUN_00403191();
    uStack_9c = 0;
    iStack_a0 = -1;
    uStack_a4 = *(undefined4 *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    uStack_a8 = 0;
    uStack_ac = 0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    iStack_b4 = 0;
    iStack_b8 = unaff_EBP + -0x2e8;
    iStack_bc = unaff_EBP + -0x118;
    iStack_c0 = -1;
    puStack_c4 = (undefined1 *)&uStack_ac;
    FUN_00449713();
    iStack_cc = 0x5b4e9a;
    puStack_c4 = (undefined1 *)FUN_00456ad5();
    *(int **)(unaff_EBP + -0x14) = &iStack_c0;
    FUN_004033a1();
    puStack_c4 = (undefined1 *)(unaff_EBP + -0x338);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_b8 = 0x5b4ed0;
    iVar5 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x4c) = iVar5;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    if (iVar5 != 0) {
      iStack_b4 = 0x5b4ee6;
      iVar5 = FUN_0041a581();
      if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
        iStack_b4 = 0x5b4ef7;
        FUN_00878dfb();
      }
    }
    puVar1 = *(undefined1 **)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iStack_b4 = 0x5b4f0d;
      FUN_00878dfb();
    }
    iStack_b4 = unaff_EBP + -0x308;
    iStack_b8 = unaff_EBP + -0x158;
    iStack_bc = unaff_EBP + -0x278;
    iStack_c0 = unaff_EBP + -0x138;
    iStack_cc = 0x5b4f40;
    puStack_c4 = puVar1;
    FUN_004250ac();
    iStack_b4 = 0x5b4f4c;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_b4 = 0x5b4f57;
      FUN_00878dfb();
    }
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_b4 = 0x5b4f6f;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_b4 = 0x5b4f7a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_b4 = 0x5b4f8a;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_b4 = 0x5b4f95;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_b4 = 0x5b4fa5;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_b4 = 0x5b4fb0;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_b4 = 0x5b4fc0;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_b4 = 0x5b4fcb;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_b4 = 0x5b4fdb;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_b4 = 0x5b4fe6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_b4 = 0x5b4ff6;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_b4 = 0x5b5001;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iStack_b4 = 0x5b5011;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_b4 = 0x5b501c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_b4 = 0x5b502c;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_b4 = 0x5b5037;
      FUN_00878dfb();
    }
    iStack_b4 = 0x5b5043;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_b4 = 0x5b5053;
    FUN_00403191();
    iStack_b4 = 0x80;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_b8 = 0x5b506a;
    FUN_004031b7();
    iStack_b4 = 0xff;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_b8 = 0x5b5080;
    FUN_004031b7();
    iStack_b4 = 300;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_b8 = 0x5b5096;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_b4 = 0x5b50a6;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_b4 = 0x5b50b6;
    FUN_00403191();
    iStack_b4 = 0;
    iStack_b8 = 0xffffffff;
    iStack_bc = *(undefined4 *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_c0 = 0;
    puStack_c4 = (undefined1 *)0x0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    iStack_cc = 0;
    iStack_d0 = unaff_EBP + -0x198;
    iStack_d4 = unaff_EBP + -0x298;
    iStack_d8 = -1;
    uVar3 = FUN_00449713(&puStack_c4);
    uVar3 = FUN_00456ad5(uVar3);
    *(int **)(unaff_EBP + -0x14) = &iStack_d8;
    FUN_004033a1(uVar3);
    iVar5 = unaff_EBP + -0x358;
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    FUN_00405a1d(iVar5);
    FUN_00402660();
    FUN_00404a02(iVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    iStack_d0 = 0x5b512f;
    iVar5 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x58) = iVar5;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if (iVar5 != 0) {
      iStack_cc = 0x5b5145;
      iVar5 = FUN_0041a581();
      if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
        iStack_cc = 0x5b5156;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x24);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iStack_cc = 0x5b516f;
      FUN_00878dfb();
    }
    iStack_cc = unaff_EBP + -0x1d8;
    iStack_d0 = unaff_EBP + -0x2b8;
    iStack_d4 = unaff_EBP + -0x1b8;
    iStack_d8 = unaff_EBP + -0x2d8;
    FUN_004250ac(unaff_EBP + -0x378,*(undefined4 *)(unaff_EBP + -0x14));
    iStack_cc = 0x5b51b0;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_cc = 0x5b51bb;
      FUN_00878dfb();
    }
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_cc = 0x5b51d3;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_cc = 0x5b51de;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_cc = 0x5b51ee;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_cc = 0x5b51f9;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_cc = 0x5b5209;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_cc = 0x5b5214;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_cc = 0x5b5224;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_cc = 0x5b522f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_cc = 0x5b523f;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_cc = 0x5b524a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_cc = 0x5b525a;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_cc = 0x5b5265;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_cc = 0x5b5275;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_cc = 0x5b5280;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_cc = 0x5b5290;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_cc = 0x5b529b;
      FUN_00878dfb();
    }
    iStack_cc = 0x5b52a7;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    iStack_cc = 0x5b52b7;
    FUN_00403191();
    iStack_cc = 0xff;
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    iStack_d0 = 0x5b52cd;
    FUN_004031b7();
    iStack_cc = 0x80;
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    iStack_d0 = 0x5b52df;
    FUN_004031b7();
    iStack_cc = 300;
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    iStack_d0 = 0x5b52f5;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    iStack_cc = 0x5b5305;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    iStack_cc = 0x5b5315;
    FUN_00403191();
    iStack_cc = 0;
    iStack_d0 = 0xffffffff;
    iStack_d4 = *(undefined4 *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_d8 = 0;
    (*DAT_0097b4c8)(0);
    FUN_0087a1b0();
    param_6 = 0;
    param_5 = unaff_EBP + -0x288;
    param_4 = unaff_EBP + -0x1f8;
    param_3 = 0xffffffff;
    FUN_00449713();
    FUN_00456ad5();
    *(int **)(unaff_EBP + -0x14) = &param_3;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    param_5 = 0x5b538e;
    iVar5 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x54) = iVar5;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    if (iVar5 != 0) {
      param_6 = 0x5b53a4;
      iVar5 = FUN_0041a581();
      if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
        param_6 = 0x5b53b5;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x34);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      param_6 = 0x5b53ce;
      FUN_00878dfb();
    }
    param_6 = unaff_EBP + -200;
    param_5 = unaff_EBP + -0xb8;
    param_4 = unaff_EBP + -0x2a8;
    param_3 = unaff_EBP + -0x218;
    FUN_004250ac();
    param_6 = 0x5b540f;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      param_6 = 0x5b541a;
      FUN_00878dfb();
    }
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    param_6 = 0x5b5432;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      param_6 = 0x5b543d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    param_6 = 0x5b544d;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      param_6 = 0x5b5458;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    param_6 = 0x5b5468;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      param_6 = 0x5b5473;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    param_6 = 0x5b5483;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      param_6 = 0x5b548e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    param_6 = 0x5b549e;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      param_6 = 0x5b54a9;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    param_6 = 0x5b54b9;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      param_6 = 0x5b54c4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    param_6 = 0x5b54d4;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      param_6 = 0x5b54df;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    param_6 = 0x5b54ef;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      param_6 = 0x5b54fa;
      FUN_00878dfb();
    }
    param_6 = 0x5b5506;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    param_6 = 0x5b5516;
    FUN_00403191();
    param_6 = 0x80;
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    param_5 = 0x5b5528;
    FUN_004031b7();
    param_6 = 0xff;
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    param_5 = 0x5b553e;
    FUN_004031b7();
    param_6 = 300;
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    param_5 = 0x5b5554;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    param_6 = 0x5b5564;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    param_6 = 0x5b5574;
    FUN_00403191();
    param_6 = 0;
    param_5 = 0xffffffff;
    param_4 = *(undefined4 *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    param_3 = 0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    iStack_4 = unaff_EBP + -0x128;
    iStack_8 = unaff_EBP + -0x108;
    piStack_c = (int *)0xffffffff;
    FUN_00449713();
    piStack_18 = (int *)0x5b55b7;
    FUN_00456ad5();
    *(int ***)(unaff_EBP + -0x14) = &piStack_c;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


