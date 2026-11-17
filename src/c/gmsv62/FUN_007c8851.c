/* FUN_007c8851 - 0x007c8851 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c8851(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar7;
  int iStack_1c8;
  int *piStack_1c4;
  undefined1 *puStack_1c0;
  int *piStack_1bc;
  undefined4 uStack_1b4;
  int iStack_1b0;
  int *piStack_1ac;
  undefined *puStack_1a8;
  int *piStack_1a4;
  undefined4 *puStack_1a0;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x9c) = 200;
  *(undefined4 *)(unaff_EBP + -0x8c) = 200;
  *(uint *)(unaff_EBP + -0x48) =
       -(uint)(*(int *)(extraout_ECX + 0xd74) != 0) & *(int *)(extraout_ECX + 0xd74) - 0xcU;
  *(int *)(unaff_EBP + -0x40) = extraout_ECX + 4;
  *(undefined4 *)(unaff_EBP + -0x98) = 1000;
  *(undefined4 *)(unaff_EBP + -0x94) = 500;
  *(undefined4 *)(unaff_EBP + -0x90) = 300;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(int *)(unaff_EBP + -0x3c) = unaff_EBP + -0x9c;
  *(int *)(unaff_EBP + -0x18) = extraout_ECX + 0x1ea4;
  do {
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    puStack_1a0 = *(undefined4 **)(unaff_EBP + -0x34);
    puStack_1a8 = (undefined *)(unaff_EBP + -0x30);
    piStack_1a4 = (int *)s_Map_MapHelper_img_weather_squib__0096c354;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    piStack_1ac = (int *)0x7c88de;
    FUN_00434e21();
    puStack_1a0 = &DAT_00980690;
    piStack_1a4 = (int *)0x7c88ed;
    FUN_00403191();
    puStack_1a0 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_1a4 = (int *)0x7c88fd;
    FUN_00403191();
    puStack_1a0 = (undefined4 *)0x0;
    piStack_1a4 = (int *)0x0;
    puStack_1a8 = (undefined *)0xffffffff;
    piStack_1ac = *(int **)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_1b0 = 0;
    uStack_1b4 = 0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    piStack_1bc = (int *)0x0;
    puStack_1c0 = (undefined1 *)(unaff_EBP + -300);
    piStack_1c4 = (int *)(unaff_EBP + -0x10c);
    iStack_1c8 = -1;
    uVar1 = FUN_00449713(&uStack_1b4);
    uVar1 = FUN_00456ad5(uVar1);
    *(int **)(unaff_EBP + -0x28) = &iStack_1c8;
    FUN_004033a1(uVar1);
    iVar2 = unaff_EBP + -0x16c;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00405a1d(iVar2);
    FUN_00402660();
    FUN_00404a02(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_1c0 = (undefined1 *)0x7c8976;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x44) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if (iVar2 != 0) {
      piStack_1bc = (int *)0x7c898c;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        piStack_1bc = (int *)0x7c899d;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_1bc = (int *)0x7c89ad;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_1bc = (int *)0x7c89b8;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_1bc = (int *)0x7c89c8;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_1bc = (int *)0x7c89d3;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    piStack_1bc = (int *)0x7c89e3;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_1bc = (int *)0x7c89ee;
      FUN_00878dfb();
    }
    FUN_0087a1b0();
    piStack_1bc = (int *)0x0;
    piStack_1c4 = (int *)0x8;
    iStack_1c8 = 0x7c8a02;
    puStack_1c0 = (undefined1 *)&uStack_1b4;
    piStack_1c4 = (int *)FUN_00412335();
    *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_1c0;
    iStack_1c8 = 0x7c8a0e;
    FUN_004033a1();
    piStack_1c4 = (int *)(unaff_EBP + -0x19c);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_1c8 = 0x7c8a21;
    FUN_0040263d();
    iStack_1c8 = 0x7c8a28;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_1c0 = (undefined1 *)0x7c8a33;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x60) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar2 != 0) {
      piStack_1bc = (int *)0x7c8a49;
      iVar2 = FUN_0041a581();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        piStack_1bc = (int *)0x7c8a5a;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_1bc = (int *)0x7c8a6a;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_1bc = (int *)0x7c8a75;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_1bc = (int *)0x7c8a85;
      FUN_00878dfb();
    }
    uVar1 = FUN_0040e48b();
    *(undefined4 *)(unaff_EBP + -0x80) = uVar1;
    *(undefined4 *)(unaff_EBP + -0x7c) = 0;
    uVar1 = __ftol();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_1bc = (int *)0x7c8aaf;
      FUN_00878dfb();
    }
    uVar1 = FUN_0040e53d();
    *(undefined4 *)(unaff_EBP + -0x88) = uVar1;
    *(undefined4 *)(unaff_EBP + -0x84) = 0;
    uVar1 = __ftol();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar1;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_1bc = (int *)0x7c8ae2;
      FUN_00878dfb();
    }
    FUN_0040eea9();
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_1bc = (int *)0x7c8af5;
      FUN_00878dfb();
    }
    FUN_0040eed0();
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_1bc = (int *)0x7c8b08;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_1bc = (int *)0x7c8b18;
      FUN_00878dfb();
    }
    piVar3 = (int *)(**(code **)(**(int **)(unaff_EBP + -0x40) + 0x10))();
    *(double *)(unaff_EBP + -0x2c) = (double)*piVar3;
    uVar4 = FUN_0040e48b();
    *(uint *)(unaff_EBP + -0x20) = uVar4 >> 1;
    iVar2 = FUN_0040eea9();
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) - iVar2;
    *(double *)(unaff_EBP + -0x2c) =
         *(double *)(unaff_EBP + -0x2c) - (double)*(int *)(unaff_EBP + -0x20) * _DAT_008ed818;
    uVar4 = FUN_004133f0();
    *(undefined4 *)(unaff_EBP + -100) = 0;
    *(uint *)(unaff_EBP + -0x68) = uVar4 % 0x96;
    uVar1 = __ftol();
    *(undefined4 *)(unaff_EBP + -0x28) = uVar1;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_1bc = (int *)0x7c8b91;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_1bc = (int *)0x7c8ba5;
      FUN_00878dfb();
    }
    iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x40) + 0x10))();
    *(double *)(unaff_EBP + -0x5c) = (double)*(int *)(iVar2 + 4);
    iVar2 = FUN_0040eed0();
    iVar5 = FUN_0040e53d();
    *(int *)(unaff_EBP + -0x78) = iVar5 - iVar2;
    *(undefined4 *)(unaff_EBP + -0x74) = 0;
    *(double *)(unaff_EBP + -0x5c) =
         *(double *)(unaff_EBP + -0x5c) - (double)*(longlong *)(unaff_EBP + -0x78) * _DAT_008ed818;
    uVar4 = FUN_004133f0();
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
    *(uint *)(unaff_EBP + -0x70) = uVar4 % 100;
    iVar2 = __ftol();
    piStack_1bc = (int *)0x7c8c14;
    FUN_00403191();
    piStack_1bc = (int *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_1c0 = (undefined1 *)0x7c8c26;
    FUN_004031b7();
    bVar7 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (bVar7) {
      piStack_1bc = (int *)0x7c8c3c;
      FUN_00878dfb();
    }
    piStack_1bc = (int *)(unaff_EBP + -0xcc);
    piStack_1c4 = *(int **)(unaff_EBP + -0x38);
    puStack_1c0 = (undefined1 *)0x0;
    iStack_1c8 = *(int *)(unaff_EBP + -0x1c);
    puVar6 = (undefined4 *)
             FUN_0042a39f(unaff_EBP + -0x50,
                          *(int *)(unaff_EBP + -0x28) - *(int *)(unaff_EBP + -0x1c) / 2,
                          iVar2 - (int)piStack_1c4 / 2);
    piStack_1bc = (int *)0x7c8c83;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              (*(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x18),
               (IBinding *)*puVar6);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    piStack_1bc = (int *)0x7c8c9b;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_1bc = (int *)0x7c8ca6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_1bc = (int *)0x7c8cb6;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_1bc = (int *)0x7c8cc1;
      FUN_00878dfb();
    }
    iVar2 = **(int **)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(*(int *)(unaff_EBP + -0x48) + 300);
    if (iVar2 == 0) {
      piStack_1bc = (int *)0x7c8ce4;
      FUN_00878dfb();
    }
    piStack_1bc = (int *)**(undefined4 **)(unaff_EBP + -0x18);
    iVar2 = *piStack_1bc;
    *(int **)(unaff_EBP + -0x38) = piStack_1bc;
    puStack_1c0 = (undefined1 *)0x7c8d09;
    iVar2 = (**(code **)(iVar2 + 0xb4))();
    if (iVar2 < 0) {
      puStack_1c0 = &DAT_00963df8;
      piStack_1c4 = *(int **)(unaff_EBP + -0x38);
      iStack_1c8 = iVar2;
      FUN_00878e09();
    }
    piVar3 = *(int **)(unaff_EBP + -0x18);
    if (*piVar3 == 0) {
      puStack_1c0 = (undefined1 *)0x80004003;
      piStack_1c4 = (int *)0x7c8d2c;
      FUN_00878dfb();
    }
    piVar3 = (int *)*piVar3;
    puStack_1c0 = (undefined1 *)0xffffffff;
    iStack_1c8 = 0x7c8d39;
    piStack_1c4 = piVar3;
    iVar2 = (**(code **)(*piVar3 + 0xe0))();
    if (iVar2 < 0) {
      puStack_1a0 = (undefined4 *)&DAT_00963df8;
      piStack_1ac = (int *)0x7c8d49;
      puStack_1a8 = (undefined *)iVar2;
      piStack_1a4 = piVar3;
      FUN_00878e09();
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x24) == 0) {
        puStack_1a0 = (undefined4 *)0x80004003;
        piStack_1a4 = (int *)0x7c8d63;
        FUN_00878dfb();
      }
      puStack_1a0 = (undefined4 *)0x7c8d6b;
      iVar2 = FUN_0040cf4d();
      if (iVar2 - 1U <= *(uint *)(unaff_EBP + -0x1c)) break;
      puStack_1a0 = (undefined4 *)0x7c8d7d;
      FUN_0087a1b0();
      piStack_1a4 = *(int **)(unaff_EBP + -0x1c);
      puStack_1a8 = (undefined *)0x7c8d88;
      puStack_1a0 = (undefined4 *)&stack0xfffffe64;
      piStack_1a4 = (int *)FUN_00412335();
      *(undefined4 ***)(unaff_EBP + -0x28) = &puStack_1a0;
      puStack_1a8 = (undefined *)0x7c8d96;
      FUN_00402e8e();
      piStack_1a4 = (int *)(unaff_EBP + -0xbc);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      puStack_1a8 = (undefined *)0x7c8da9;
      FUN_0040263d();
      puStack_1a8 = (undefined *)0x7c8db0;
      FUN_004048a4();
      puStack_1a0 = (undefined4 *)(unaff_EBP + -0xbc);
      piStack_1a4 = (int *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      puStack_1a8 = (undefined *)0x7c8dc4;
      puStack_1a0 = (undefined4 *)FUN_00412348();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      piStack_1a4 = (int *)0x7c8dd3;
      puStack_1a0 = (undefined4 *)FUN_0041a485();
      if (((int)puStack_1a0 < 0) && (puStack_1a0 != (undefined4 *)0x80004002)) {
        piStack_1a4 = (int *)0x7c8de4;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      puStack_1a0 = (undefined4 *)0x7c8df0;
      FUN_004027b3();
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_1a0 = (undefined4 *)0x80004003;
        piStack_1a4 = (int *)0x7c8dfb;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        puStack_1a0 = (undefined4 *)0x80004003;
        piStack_1a4 = (int *)0x7c8e06;
        FUN_00878dfb();
      }
      piVar3 = *(int **)(unaff_EBP + -0x14);
      puStack_1a0 = (undefined4 *)0x7c8e11;
      puStack_1a0 = (undefined4 *)FUN_0040e48b();
      puStack_1a8 = (undefined *)0x7c8e18;
      piStack_1a4 = piVar3;
      iVar2 = (**(code **)(*piVar3 + 0x44))();
      if (iVar2 < 0) {
        puStack_1a8 = &DAT_00963cc8;
        uStack_1b4 = 0x7c8e28;
        iStack_1b0 = iVar2;
        piStack_1ac = piVar3;
        FUN_00878e09();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_1a8 = (undefined *)0x80004003;
        piStack_1ac = (int *)0x7c8e37;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        puStack_1a8 = (undefined *)0x80004003;
        piStack_1ac = (int *)0x7c8e46;
        FUN_00878dfb();
      }
      piVar3 = *(int **)(unaff_EBP + -0x14);
      puStack_1a8 = (undefined *)0x7c8e51;
      puStack_1a8 = (undefined *)FUN_0040e53d();
      iStack_1b0 = 0x7c8e58;
      piStack_1ac = piVar3;
      puStack_1a8 = (undefined *)(**(code **)(*piVar3 + 0x4c))();
      if ((int)puStack_1a8 < 0) {
        puStack_1a0 = (undefined4 *)&DAT_00963cc8;
        piStack_1ac = (int *)0x7c8e68;
        piStack_1a4 = piVar3;
        FUN_00878e09();
      }
      puStack_1a0 = (undefined4 *)**(undefined4 **)(unaff_EBP + -0x3c);
      piStack_1ac = (int *)&piStack_1a4;
      *(int ***)(unaff_EBP + -0x28) = &piStack_1a4;
      puStack_1a8 = (undefined *)0x474;
      iStack_1b0 = 0x7c8e83;
      FUN_00679e4e();
      puStack_1a8 = (undefined *)(unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      piStack_1ac = (int *)0x7c8e93;
      FUN_004115d9();
      piStack_1ac = (int *)0x7c8e9a;
      FUN_00404e7f();
      puStack_1a8 = (undefined *)(unaff_EBP + -0x18c);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      piStack_1ac = (int *)0x7c8eac;
      FUN_0040263d();
      piStack_1ac = (int *)0x7c8eb3;
      piStack_1a4 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      puStack_1a8 = (undefined *)0x7c8ebd;
      piVar3 = (int *)FUN_00412550();
      puStack_1a8 = (undefined *)(unaff_EBP + -0x18c);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      piStack_1ac = (int *)0x7c8ecf;
      puStack_1a0 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_1a0 < 0) {
        piStack_1a4 = (int *)0x7c8edc;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      puStack_1a0 = (undefined4 *)0x7c8ee8;
      FUN_004027eb();
      puStack_1a0 = &DAT_00980690;
      piStack_1a4 = (int *)0x7c8ef4;
      FUN_00403191();
      puStack_1a0 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      piStack_1a4 = (int *)0x7c8f04;
      FUN_00403191();
      puStack_1a0 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      piStack_1a4 = (int *)0x7c8f14;
      FUN_00403191();
      puStack_1a0 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      piStack_1a4 = (int *)0x7c8f24;
      FUN_00403191();
      puStack_1a0 = (undefined4 *)0x3;
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      puStack_1a8 = (undefined *)0x7c8f36;
      piStack_1a4 = piVar3;
      FUN_004031b7();
      iVar2 = **(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      if (iVar2 == 0) {
        puStack_1a0 = (undefined4 *)0x80004003;
        piStack_1a4 = (int *)0x7c8f4b;
        FUN_00878dfb();
      }
      puStack_1a0 = (undefined4 *)(unaff_EBP + -0x15c);
      piStack_1a4 = (int *)(unaff_EBP + -0x13c);
      puStack_1a8 = (undefined *)(unaff_EBP + -0xac);
      piStack_1ac = (int *)(unaff_EBP + -0x11c);
      iStack_1b0 = unaff_EBP + -0xec;
      uStack_1b4 = *(undefined4 *)(unaff_EBP + -0x14);
      piStack_1bc = (int *)0x7c8f7f;
      FUN_004250ac();
      puStack_1a0 = (undefined4 *)(unaff_EBP + -0x17c);
      piStack_1a4 = (int *)0x7c8f8b;
      puStack_1a0 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_1a0 < 0) {
        piStack_1a4 = (int *)0x7c8f96;
        FUN_00878dfb();
      }
      puStack_1a0 = (undefined4 *)(unaff_EBP + -0xec);
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      piStack_1a4 = (int *)0x7c8fa6;
      puStack_1a0 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_1a0 < 0) {
        piStack_1a4 = (int *)0x7c8fb1;
        FUN_00878dfb();
      }
      puStack_1a0 = (undefined4 *)(unaff_EBP + -0x11c);
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      piStack_1a4 = (int *)0x7c8fc1;
      puStack_1a0 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_1a0 < 0) {
        piStack_1a4 = (int *)0x7c8fcc;
        FUN_00878dfb();
      }
      puStack_1a0 = (undefined4 *)(unaff_EBP + -0xac);
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      piStack_1a4 = (int *)0x7c8fdc;
      puStack_1a0 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_1a0 < 0) {
        piStack_1a4 = (int *)0x7c8fe7;
        FUN_00878dfb();
      }
      puStack_1a0 = (undefined4 *)(unaff_EBP + -0x13c);
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      piStack_1a4 = (int *)0x7c8ff7;
      puStack_1a0 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_1a0 < 0) {
        piStack_1a4 = (int *)0x7c9002;
        FUN_00878dfb();
      }
      puStack_1a0 = (undefined4 *)(unaff_EBP + -0x15c);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      piStack_1a4 = (int *)0x7c9012;
      puStack_1a0 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_1a0 < 0) {
        piStack_1a4 = (int *)0x7c901d;
        FUN_00878dfb();
      }
      puStack_1a0 = (undefined4 *)(unaff_EBP + -0xbc);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      piStack_1a4 = (int *)0x7c902d;
      puStack_1a0 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_1a0 < 0) {
        piStack_1a4 = (int *)0x7c9038;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
    }
    puStack_1a0 = &DAT_00980690;
    piStack_1a4 = (int *)0x7c904c;
    FUN_00403191();
    puStack_1a0 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    piStack_1a4 = (int *)0x7c905c;
    FUN_00403191();
    piVar3 = *(int **)(unaff_EBP + -0x18);
    iVar2 = *piVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    if (iVar2 == 0) {
      puStack_1a0 = (undefined4 *)0x80004003;
      piStack_1a4 = (int *)0x7c9071;
      FUN_00878dfb();
    }
    puStack_1a0 = (undefined4 *)(unaff_EBP + -0xfc);
    piStack_1a4 = (int *)(unaff_EBP + -0xdc);
    puStack_1a8 = (undefined *)0x20;
    piStack_1ac = (int *)0x7c9088;
    FUN_00425139();
    puStack_1a0 = (undefined4 *)(unaff_EBP + -0xdc);
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    piStack_1a4 = (int *)0x7c9098;
    puStack_1a0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_1a0 < 0) {
      piStack_1a4 = (int *)0x7c90a3;
      FUN_00878dfb();
    }
    puStack_1a0 = (undefined4 *)(unaff_EBP + -0xfc);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    piStack_1a4 = (int *)0x7c90b3;
    puStack_1a0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_1a0 < 0) {
      piStack_1a4 = (int *)0x7c90be;
      FUN_00878dfb();
    }
    puStack_1a0 = (undefined4 *)0x7c90c6;
    FUN_004125e6();
    puStack_1a0 = (undefined4 *)0x7c90ce;
    FUN_004125e6();
    puStack_1a0 = (undefined4 *)0x7c90d6;
    FUN_004027eb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x30) != 0) {
      puStack_1a0 = (undefined4 *)(*(int *)(unaff_EBP + -0x30) + -0xc);
      piStack_1a4 = (int *)0x7c90ea;
      FUN_00434e38();
    }
    *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 1;
    *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x3c) + 4;
    *(int **)(unaff_EBP + -0x18) = piVar3 + 1;
  } while (*(int *)(unaff_EBP + -0x34) < 5);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


