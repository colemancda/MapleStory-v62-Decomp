/* FUN_007e8db4 - 0x007e8db4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007e8db4(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var1;
  IBinding *pIVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  undefined1 *puVar10;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  int *extraout_ECX_03;
  int extraout_ECX_04;
  int unaff_EBP;
  bool bVar11;
  undefined4 uStack_204;
  int iStack_200;
  undefined1 *puStack_1fc;
  undefined4 uStack_1f8;
  undefined4 *puStack_1f4;
  int *piStack_1f0;
  undefined4 uStack_1ec;
  int *piStack_1e8;
  undefined4 uStack_1e4;
  undefined1 *puStack_1e0;
  int iStack_1dc;
  undefined4 uStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int *piStack_1cc;
  undefined4 *puStack_1c8;
  int iStack_1b0;
  undefined1 *puStack_1ac;
  int *piStack_1a8;
  int iStack_1a4;
  undefined1 *puStack_1a0;
  int *piStack_19c;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  int iStack_188;
  int *piStack_184;
  undefined4 *puStack_180;
  int *piStack_17c;
  undefined *puStack_178;
  int *piStack_174;
  undefined4 uStack_170;
  int iStack_16c;
  undefined4 uStack_168;
  undefined *puStack_164;
  int *piStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  int iStack_154;
  
  FUN_00879bb8();
  iVar5 = *(int *)(extraout_ECX + 0x74);
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  if ((iVar5 == 5) || (*(undefined4 *)(unaff_EBP + -0x5c) = 0, iVar5 == 6)) {
    *(undefined4 *)(unaff_EBP + -0x5c) = 1;
  }
  iStack_154 = 0x7e8df4;
  FUN_00403191();
  iStack_154 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_158 = 0x7e8e02;
  FUN_004031b7();
  bVar11 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar11) {
    iStack_154 = 0x7e8e18;
    FUN_00878dfb();
  }
  iStack_154 = unaff_EBP + -0x80;
  uStack_158 = 0;
  uStack_15c = 0;
  piStack_160 = (int *)0x0;
  puStack_164 = (undefined *)0x0;
  uStack_168 = 0;
  iStack_16c = unaff_EBP + -0x10;
  uStack_170 = 0x7e8e37;
  puVar4 = (undefined4 *)FUN_0042a39f();
  pIVar2 = (IBinding *)*puVar4;
  p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x1c) + 0xfc);
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x24) = p_Var1;
  iStack_154 = 0x7e8e4c;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,pIVar2);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_154 = 0x7e8e61;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_154 = 0x7e8e6c;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_154 = 0x7e8e7c;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_154 = 0x7e8e87;
    FUN_00878dfb();
  }
  iStack_154 = 0x7e8e93;
  puVar4 = (undefined4 *)FUN_004489f5();
  iStack_154 = *puVar4;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  uStack_158 = 0x7e8ea7;
  FUN_0040ee87();
  iVar5 = *(int *)p_Var1;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar5 == 0) {
    iStack_154 = 0x7e8eb9;
    FUN_00878dfb();
  }
  piStack_160 = (int *)**(undefined4 **)(unaff_EBP + -0x24);
  iVar5 = *piStack_160;
  uStack_15c = *(undefined4 *)(unaff_EBP + -0x80);
  uStack_158 = *(undefined4 *)(unaff_EBP + -0x7c);
  iStack_154 = *(undefined4 *)(unaff_EBP + -0x78);
  *(int **)(unaff_EBP + -0x10) = piStack_160;
  puStack_164 = (undefined *)0x7e8ed6;
  iVar5 = (**(code **)(iVar5 + 0xfc))();
  if (iVar5 < 0) {
    puStack_164 = &DAT_00963df8;
    uStack_168 = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_170 = 0x7e8ee8;
    iStack_16c = iVar5;
    FUN_00878e09();
  }
  puStack_164 = (undefined *)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_168 = 0x7e8ef5;
  puStack_164 = (undefined *)FUN_00402bc3();
  if ((int)puStack_164 < 0) {
    uStack_168 = 0x7e8f00;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_164 = (undefined *)0x7e8f0c;
  FUN_00412600();
  puStack_164 = (undefined *)(unaff_EBP + -0x28);
  uStack_168 = 0x7e8f18;
  puVar4 = (undefined4 *)FUN_004489f5();
  uStack_168 = *puVar4;
  puStack_164 = (undefined *)0x1;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  iStack_16c = 0x7e8f2c;
  FUN_0040ee87();
  iVar5 = **(int **)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar5 == 0) {
    puStack_164 = (undefined *)0x80004003;
    uStack_168 = 0x7e8f42;
    FUN_00878dfb();
  }
  piStack_174 = (int *)**(undefined4 **)(unaff_EBP + -0x24);
  iVar5 = *piStack_174;
  uStack_170 = *(undefined4 *)(unaff_EBP + -0x80);
  iStack_16c = *(undefined4 *)(unaff_EBP + -0x7c);
  uStack_168 = *(undefined4 *)(unaff_EBP + -0x78);
  *(int **)(unaff_EBP + -0x10) = piStack_174;
  puStack_164 = *(undefined **)(unaff_EBP + -0x74);
  puStack_178 = (undefined *)0x7e8f5c;
  iVar5 = (**(code **)(iVar5 + 100))();
  if (iVar5 < 0) {
    puStack_178 = &DAT_00963de8;
    piStack_17c = *(int **)(unaff_EBP + -0x10);
    piStack_184 = (int *)0x7e8f6e;
    puStack_180 = (undefined4 *)iVar5;
    FUN_00878e09();
  }
  puStack_178 = (undefined *)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_17c = (int *)0x7e8f7b;
  puStack_178 = (undefined *)FUN_00402bc3();
  if ((int)puStack_178 < 0) {
    piStack_17c = (int *)0x7e8f88;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_178 = (undefined *)0x7e8f94;
  FUN_00412600();
  piVar9 = *(int **)(unaff_EBP + -0x24);
  if (*piVar9 == 0) {
    puStack_178 = (undefined *)0x80004003;
    piStack_17c = (int *)0x7e8fa5;
    FUN_00878dfb();
  }
  piVar9 = (int *)*piVar9;
  puStack_178 = (undefined *)0xffffffff;
  puStack_180 = (undefined4 *)0x7e8fb2;
  piStack_17c = piVar9;
  iStack_188 = (**(code **)(*piVar9 + 0xe0))();
  if (iStack_188 < 0) {
    puStack_180 = (undefined4 *)&DAT_00963df8;
    uStack_18c = 0x7e8fc2;
    piStack_184 = piVar9;
    FUN_00878e09();
  }
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  puStack_180 = (undefined4 *)0xa57;
  piStack_184 = (int *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 6;
  iStack_188 = 0x7e8fdf;
  puVar4 = (undefined4 *)FUN_00679d22();
  iVar5 = *(int *)(unaff_EBP + -0x1c);
  puStack_180 = *(undefined4 **)(iVar5 + 0x98);
  piStack_184 = (int *)*puVar4;
  iStack_188 = unaff_EBP + -0x68;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_18c = 0x7e8ff8;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_180 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
    piStack_184 = (int *)0x7e900f;
    FUN_00434e38();
  }
  puStack_180 = &DAT_00980690;
  piStack_184 = (int *)0x7e901c;
  FUN_00403191();
  puStack_180 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_184 = (int *)0x7e902c;
  FUN_00403191();
  puStack_180 = (undefined4 *)0x0;
  piStack_184 = (int *)0x0;
  iStack_188 = 0xffffffff;
  uStack_18c = *(undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  uStack_190 = 0;
  uStack_194 = 0;
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  piStack_19c = (int *)0x0;
  puStack_1a0 = (undefined1 *)(unaff_EBP + -0xfc);
  iStack_1a4 = unaff_EBP + -0x11c;
  piStack_1a8 = (int *)0xffffffff;
  iStack_1b0 = 0x7e9069;
  puStack_1ac = (undefined1 *)&uStack_194;
  iStack_1b0 = FUN_00449713();
  puStack_1ac = (undefined1 *)FUN_00456ad5();
  *(int ***)(unaff_EBP + -0x20) = &piStack_1a8;
  iStack_1b0 = 0x7e907c;
  FUN_004033a1();
  puStack_1ac = (undefined1 *)(unaff_EBP + -300);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_1b0 = 0x7e908c;
  FUN_00405a1d();
  iStack_1b0 = 0x7e9093;
  FUN_00402660();
  iStack_1b0 = 0x7e909a;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_1a0 = (undefined1 *)0x7e90a5;
  iVar6 = FUN_004032b4();
  *(int *)(unaff_EBP + -0xa8) = iVar6;
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  if (iVar6 != 0) {
    piStack_19c = (int *)0x7e90c1;
    iVar6 = FUN_0041a581();
    if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
      piStack_19c = (int *)0x7e90d2;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  piStack_19c = (int *)0x7e90e2;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    piStack_19c = (int *)0x7e90ed;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  piStack_19c = (int *)0x7e90fd;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    piStack_19c = (int *)0x7e9108;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  piStack_19c = (int *)0x7e9118;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    piStack_19c = (int *)0x7e9123;
    FUN_00878dfb();
  }
  piStack_19c = (int *)0x7e912e;
  uVar7 = FUN_005f3a71();
  *(undefined4 *)(unaff_EBP + -0x60) = uVar7;
  piStack_19c = (int *)0x7e9143;
  uVar7 = FUN_005f1350();
  *(undefined4 *)(unaff_EBP + -0x84) = uVar7;
  if (*(int *)(unaff_EBP + -0x70) == 0) {
    iVar6 = *(int *)(unaff_EBP + -0x60);
    if (iVar6 == 0) {
      *(undefined4 *)(iVar5 + 0x98) = 0x897b50;
      piStack_19c = (int *)0x7e916a;
      FUN_005f3a71();
      iVar6 = *(int *)(unaff_EBP + -0x60);
    }
    if (*(int *)(iVar6 + 0x9c) == 0) {
      *(undefined4 *)(unaff_EBP + -0xb4) = 0;
      *(undefined4 *)(unaff_EBP + -0xb0) = 0;
      *(undefined4 *)(unaff_EBP + -0xac) = 0;
      *(undefined ***)(unaff_EBP + -0xbc) = &PTR_FUN_008e863c;
      iVar5 = *(int *)(iVar6 + 0x60);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      if (iVar5 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(uint *)(iVar5 + -4);
      }
      piStack_19c = (int *)((2 < uVar8) + 1);
      puStack_1a0 = *(undefined1 **)(unaff_EBP + -0x60);
      iStack_1a4 = 0x7e9280;
      FUN_0040b905();
      piStack_19c = (int *)0xfffffffe;
      puStack_1a0 = (undefined1 *)0x7e928c;
      FUN_004031b7();
      iVar5 = **(int **)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      if (iVar5 == 0) {
        piStack_19c = (int *)0x7e92a1;
        FUN_00878dfb();
      }
      piStack_19c = (int *)(unaff_EBP + -0x10);
      puStack_1a0 = (undefined1 *)0x7e92b0;
      FUN_0041141a();
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      piStack_19c = (int *)0x7e92c5;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        piStack_19c = (int *)0x7e92d0;
        FUN_00878dfb();
      }
      iVar5 = *(int *)(unaff_EBP + -0xb0);
      *(int *)(unaff_EBP + -0x40) = iVar5;
      while (iVar5 != 0) {
        iVar5 = *(int *)(unaff_EBP + -0x40);
        iVar6 = *(int *)(iVar5 + 4);
        iVar5 = *(int *)((-(uint)(iVar5 != 0) & iVar5 - 0x10U) + 4);
        *(uint *)(unaff_EBP + -0x40) = -(uint)(iVar5 != 0) & iVar5 + 0x10U;
        piStack_19c = (int *)0x7e930f;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        piStack_19c = (int *)0x7e931f;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        piStack_19c = (int *)0x7e932c;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        piStack_19c = (int *)0x7e9339;
        FUN_00403191();
        piStack_19c = *(int **)(iVar6 + 0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        puStack_1a0 = (undefined1 *)0x7e934b;
        FUN_004031b7();
        iVar5 = **(int **)(unaff_EBP + -0x24);
        puVar10 = *(undefined1 **)(iVar6 + 0xc);
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        if (iVar5 == 0) {
          piStack_19c = (int *)0x7e9363;
          FUN_00878dfb();
        }
        piStack_19c = (int *)(unaff_EBP + -0xa4);
        puStack_1a0 = (undefined1 *)(unaff_EBP + -0x80);
        iStack_1a4 = unaff_EBP + -0x58;
        piStack_1a8 = (int *)(unaff_EBP + -0x3c);
        iStack_1b0 = unaff_EBP + -0xcc;
        puStack_1ac = puVar10;
        FUN_004250ac();
        piStack_19c = (int *)0x7e939b;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_19c = (int *)0x7e93a6;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        piStack_19c = (int *)0x7e93b3;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_19c = (int *)0x7e93be;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        piStack_19c = (int *)0x7e93cb;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_19c = (int *)0x7e93d6;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        piStack_19c = (int *)0x7e93e3;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_19c = (int *)0x7e93ee;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        piStack_19c = (int *)0x7e93fe;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_19c = (int *)0x7e9409;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        piStack_19c = (int *)0x7e9419;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_19c = (int *)0x7e9424;
          FUN_00878dfb();
        }
        iVar5 = *(int *)(unaff_EBP + -0x40);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      *(undefined ***)(unaff_EBP + -0xbc) = &PTR_FUN_008e863c;
      FUN_00413915();
    }
    else if (*(int *)(unaff_EBP + -0x84) != 0) {
      *(int *)(unaff_EBP + -0x14) = iVar5 + 0x110;
      FUN_004497c2();
      piStack_19c = (int *)0x7e919f;
      puVar4 = (undefined4 *)FUN_004489f5();
      *(undefined4 *)(unaff_EBP + -0x10) = *puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      piStack_19c = (int *)0x7e91b3;
      puVar4 = (undefined4 *)FUN_004489f5();
      piStack_19c = (int *)0x64;
      puStack_1a0 = (undefined1 *)0x0;
      iStack_1a4 = 0;
      piStack_1a8 = (int *)0x0;
      *(undefined4 *)(unaff_EBP + -0x28) = *puVar4;
      iStack_1b0 = unaff_EBP + -0x10;
      *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_1ac;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      puStack_1ac = extraout_ECX_00;
      FUN_0052359e();
      *(int **)(unaff_EBP + -0x44) = &iStack_1b0;
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_1b0 = extraout_ECX_01;
      FUN_00523572();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      FUN_0044972c();
      FUN_00449780();
      FUN_0063c0b3();
      FUN_00449780();
      FUN_0043f082();
      FUN_00412600();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      FUN_00412600();
    }
  }
  else {
    piStack_19c = (int *)0x7e9457;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    piStack_19c = (int *)0x7e9467;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    piStack_19c = (int *)0x7e9474;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    piStack_19c = (int *)0x7e9481;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    piStack_19c = (int *)0x7e948e;
    FUN_00403191();
    iVar5 = **(int **)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    if (iVar5 == 0) {
      piStack_19c = (int *)0x7e94a3;
      FUN_00878dfb();
    }
    piStack_19c = (int *)(unaff_EBP + -0xa4);
    puStack_1a0 = (undefined1 *)(unaff_EBP + -0x80);
    iStack_1a4 = unaff_EBP + -0x58;
    piStack_1a8 = (int *)(unaff_EBP + -0x3c);
    puStack_1ac = *(undefined1 **)(unaff_EBP + -0x70);
    iStack_1b0 = unaff_EBP + -0xcc;
    FUN_004250ac();
    piStack_19c = (int *)0x7e94da;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e94e5;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    piStack_19c = (int *)0x7e94f2;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e94fd;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    piStack_19c = (int *)0x7e950a;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e9515;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    piStack_19c = (int *)0x7e9522;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e952d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    piStack_19c = (int *)0x7e953d;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e9548;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    piStack_19c = (int *)0x7e9558;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e9563;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + -0x5c) == 0) {
    *(undefined4 *)(unaff_EBP + -0x28) = 0x79;
    *(undefined4 *)(unaff_EBP + -0x10) = 0x17;
    piStack_19c = (int *)0x7e9589;
    FUN_00403191();
    piStack_19c = (int *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    puStack_1a0 = (undefined1 *)0x7e959a;
    FUN_004031b7();
    bVar11 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    if (bVar11) {
      piStack_19c = (int *)0x7e95b0;
      FUN_00878dfb();
    }
    piStack_19c = (int *)(unaff_EBP + -0x3c);
    puStack_1a0 = (undefined1 *)0x0;
    iStack_1a4 = 0;
    piStack_1a8 = (int *)0x0;
    puStack_1ac = (undefined1 *)0x0;
    iStack_1b0 = 0;
    puVar4 = (undefined4 *)FUN_0042a39f();
    p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
             (*(int *)(unaff_EBP + -0x1c) + 0x104);
    piStack_19c = (int *)0x7e95de;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar4);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    piStack_19c = (int *)0x7e95f3;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e95fe;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    piStack_19c = (int *)0x7e960b;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e9616;
      FUN_00878dfb();
    }
    piStack_19c = (int *)0x7e9622;
    puVar4 = (undefined4 *)FUN_004489f5();
    piStack_19c = (int *)*puVar4;
    puStack_1a0 = (undefined1 *)0x7e962f;
    FUN_0040ee87();
    iVar5 = *(int *)p_Var1;
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    if (iVar5 == 0) {
      piStack_19c = (int *)0x7e9641;
      FUN_00878dfb();
    }
    iStack_1a4 = *(int *)(unaff_EBP + -0x3c);
    puStack_1a0 = *(undefined1 **)(unaff_EBP + -0x38);
    piStack_1a8 = *(int **)(*(int *)(unaff_EBP + -0x1c) + 0x104);
    iVar5 = *piStack_1a8;
    piStack_19c = *(int **)(unaff_EBP + -0x34);
    *(int **)(unaff_EBP + -0x14) = piStack_1a8;
    puStack_1ac = (undefined1 *)0x7e9663;
    iVar5 = (**(code **)(iVar5 + 0xfc))();
    if (iVar5 < 0) {
      puStack_1ac = &DAT_00963df8;
      iStack_1b0 = *(int *)(unaff_EBP + -0x14);
      FUN_00878e09();
    }
    puStack_1ac = (undefined1 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    iStack_1b0 = 0x7e9682;
    puStack_1ac = (undefined1 *)FUN_00402bc3();
    if ((int)puStack_1ac < 0) {
      iStack_1b0 = 0x7e968d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_1ac = (undefined1 *)0x7e9699;
    FUN_00412600();
    iVar5 = *(int *)(unaff_EBP + -0x1c);
    puStack_1ac = (undefined1 *)(unaff_EBP + -0x14);
    iStack_1b0 = 0x7e96a7;
    piVar9 = (int *)FUN_004489f5();
    iStack_1b0 = *piVar9;
    puStack_1ac = (undefined1 *)0x1;
    FUN_0040ee87();
    iVar5 = *(int *)(iVar5 + 0x104);
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    if (iVar5 == 0) {
      puStack_1ac = (undefined1 *)0x80004003;
      iStack_1b0 = 0x7e96d1;
      FUN_00878dfb();
    }
    piVar9 = *(int **)(*(int *)(unaff_EBP + -0x1c) + 0x104);
    iVar5 = *piVar9;
    iStack_1b0 = *(int *)(unaff_EBP + -0x34);
    *(int **)(unaff_EBP + -0x48) = piVar9;
    puStack_1ac = *(undefined1 **)(unaff_EBP + -0x30);
    iVar5 = (**(code **)(iVar5 + 100))();
    if (iVar5 < 0) {
      piStack_1cc = (int *)0x7e9702;
      puStack_1c8 = (undefined4 *)iVar5;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_00412600();
    iVar5 = *(int *)(unaff_EBP + -0x1c);
    if (*(int *)(iVar5 + 0x104) == 0) {
      FUN_00878dfb();
    }
    piVar9 = *(int **)(iVar5 + 0x104);
    puStack_1c8 = (undefined4 *)0x7e9750;
    iVar5 = (**(code **)(*piVar9 + 0xe0))();
    if (iVar5 < 0) {
      puStack_1c8 = (undefined4 *)&DAT_00963df8;
      iStack_1d4 = 0x7e9760;
      iStack_1d0 = iVar5;
      piStack_1cc = piVar9;
      FUN_00878e09();
    }
    puStack_1c8 = &DAT_00980690;
    piStack_1cc = (int *)0x7e976c;
    FUN_00403191();
    puStack_1c8 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    piStack_1cc = (int *)0x7e977c;
    FUN_00403191();
    puStack_1c8 = (undefined4 *)0x0;
    piStack_1cc = (int *)0x0;
    iStack_1d0 = unaff_EBP + -0xdc;
    iStack_1d4 = unaff_EBP + -0x10c;
    puStack_1e0 = (undefined1 *)&uStack_1d8;
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_1d8;
    iStack_1dc = 0xa59;
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    uStack_1e4 = 0x7e97a8;
    FUN_00679e4e();
    iStack_1dc = unaff_EBP + -0x14c;
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    puStack_1e0 = (undefined1 *)0x7e97b8;
    FUN_00405a1d();
    puStack_1e0 = (undefined1 *)0x7e97bf;
    FUN_00402660();
    puStack_1e0 = (undefined1 *)0x7e97c6;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    iStack_1d0 = 0x7e97d1;
    iVar5 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x48) = iVar5;
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    if (iVar5 != 0) {
      puStack_1c8 = (undefined4 *)(unaff_EBP + -0x48);
      piStack_1cc = (int *)0x7e97e7;
      puStack_1c8 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_1c8 < 0) && (puStack_1c8 != (undefined4 *)0x80004002)) {
        piStack_1cc = (int *)0x7e97f8;
        FUN_00878dfb();
      }
    }
    puStack_1c8 = (undefined4 *)(unaff_EBP + -0x14c);
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    piStack_1cc = (int *)0x7e9808;
    puStack_1c8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_1c8 < 0) {
      piStack_1cc = (int *)0x7e9813;
      FUN_00878dfb();
    }
    puStack_1c8 = (undefined4 *)(unaff_EBP + -0x10c);
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    piStack_1cc = (int *)0x7e9823;
    puStack_1c8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_1c8 < 0) {
      piStack_1cc = (int *)0x7e982e;
      FUN_00878dfb();
    }
    puStack_1c8 = (undefined4 *)(unaff_EBP + -0xdc);
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    piStack_1cc = (int *)0x7e983e;
    puStack_1c8 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_1c8 < 0) {
      piStack_1cc = (int *)0x7e9849;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    piStack_1cc = (int *)(unaff_EBP + -0x6c);
    puStack_1c8 = (undefined4 *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    iStack_1d0 = 0x7e985a;
    FUN_007d4a9a();
    puStack_1c8 = (undefined4 *)0x3af;
    piStack_1cc = (int *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    iStack_1d0 = 0x7e9870;
    puVar4 = (undefined4 *)FUN_00679d86();
    iStack_1d0 = *puVar4;
    puStack_1c8 = (undefined4 *)0x0;
    piStack_1cc = (int *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    iStack_1d4 = 0x7e9881;
    FUN_0040381b();
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    puStack_1c8 = (undefined4 *)0x7e9890;
    FUN_00402676();
    puStack_1c8 = &DAT_00980690;
    piStack_1cc = (int *)0x7e9899;
    FUN_00403191();
    puStack_1c8 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    piStack_1cc = (int *)0x7e98a6;
    FUN_00403191();
    piStack_1f0 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    if (piStack_1f0 == (int *)0x0) {
      puStack_1c8 = (undefined4 *)0x80004003;
      piStack_1cc = (int *)0x7e98bb;
      FUN_00878dfb();
      piStack_1f0 = *(int **)(unaff_EBP + -0x18);
    }
    iStack_1d4 = *(undefined4 *)(unaff_EBP + -0x58);
    iStack_1d0 = *(int *)(unaff_EBP + -0x54);
    iVar5 = *piStack_1f0;
    piStack_1cc = *(int **)(unaff_EBP + -0x50);
    puStack_1c8 = *(undefined4 **)(unaff_EBP + -0x4c);
    uStack_1e4 = *(undefined4 *)(unaff_EBP + -0x3c);
    puStack_1e0 = *(undefined1 **)(unaff_EBP + -0x38);
    piStack_1e8 = (int *)0x17;
    iStack_1dc = *(undefined4 *)(unaff_EBP + -0x34);
    uStack_1ec = 0x79;
    *(int **)(unaff_EBP + -0x14) = piStack_1f0;
    uStack_1d8 = *(undefined4 *)(unaff_EBP + -0x30);
    puStack_1f4 = (undefined4 *)0x7e98e3;
    puVar10 = (undefined1 *)(**(code **)(iVar5 + 0x2c))();
    if ((int)puVar10 < 0) {
      puStack_1f4 = (undefined4 *)&DAT_00963cc8;
      uStack_1f8 = *(undefined4 *)(unaff_EBP + -0x14);
      iStack_200 = 0x7e98f5;
      puStack_1fc = puVar10;
      FUN_00878e09();
    }
    puStack_1f4 = (undefined4 *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    uStack_1f8 = 0x7e9902;
    puStack_1f4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_1f4 < 0) {
      uStack_1f8 = 0x7e990f;
      FUN_00878dfb();
    }
    puStack_1f4 = (undefined4 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    uStack_1f8 = 0x7e991c;
    puStack_1f4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_1f4 < 0) {
      uStack_1f8 = 0x7e9927;
      FUN_00878dfb();
    }
    puStack_1f4 = &DAT_00980690;
    uStack_1f8 = 0x7e9933;
    FUN_00403191();
    puStack_1f4 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    uStack_1f8 = 0x7e9943;
    FUN_00403191();
    puStack_1f4 = (undefined4 *)0x0;
    uStack_1f8 = 0;
    puStack_1fc = (undefined1 *)(unaff_EBP + -0xcc);
    iStack_200 = unaff_EBP + -0xec;
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_204;
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    FUN_00679e4e(&uStack_204,0x684);
    iVar5 = unaff_EBP + -0x13c;
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    FUN_00405a1d(iVar5);
    FUN_00402660();
    FUN_00404a02(iVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    puStack_1fc = (undefined1 *)0x7e9998;
    iVar5 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x44) = iVar5;
    *(undefined4 *)(unaff_EBP + -100) = 0;
    if (iVar5 != 0) {
      puStack_1f4 = (undefined4 *)(unaff_EBP + -0x44);
      uStack_1f8 = 0x7e99ae;
      puStack_1f4 = (undefined4 *)FUN_00404b30();
      if (((int)puStack_1f4 < 0) && (puStack_1f4 != (undefined4 *)0x80004002)) {
        uStack_1f8 = 0x7e99bf;
        FUN_00878dfb();
      }
    }
    puStack_1f4 = (undefined4 *)(unaff_EBP + -0x13c);
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    uStack_1f8 = 0x7e99cf;
    puStack_1f4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_1f4 < 0) {
      uStack_1f8 = 0x7e99da;
      FUN_00878dfb();
    }
    puStack_1f4 = (undefined4 *)(unaff_EBP + -0xec);
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    uStack_1f8 = 0x7e99ea;
    puStack_1f4 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_1f4 < 0) {
      uStack_1f8 = 0x7e99f5;
      FUN_00878dfb();
    }
    puStack_1f4 = (undefined4 *)(unaff_EBP + -0xcc);
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
    uStack_1f8 = 0x7e9a05;
    puVar4 = (undefined4 *)FUN_00402bc3();
    if ((int)puVar4 < 0) {
      uStack_1f8 = 0x7e9a10;
      puStack_1f4 = puVar4;
      FUN_00878dfb();
      puStack_1f4 = extraout_ECX_02;
    }
    puStack_1fc = (undefined1 *)&puStack_1f4;
    *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_1f4;
    uStack_1f8 = 0x64b;
    iStack_200 = 0x7e9a23;
    FUN_00679e4e();
    uStack_1f8 = *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x98);
    iStack_200 = unaff_EBP + -100;
    *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_1fc;
    uStack_204 = 0x7e9a3b;
    FUN_00424dbc();
    iStack_200 = unaff_EBP + -0x2c;
    uStack_204 = 0x7e9a44;
    FUN_007d6c55();
    iVar5 = *(int *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x9c) != 0)) {
      puStack_1f4 = (undefined4 *)(iVar5 + 4);
      uStack_1f8 = 0x7e9a66;
      FUN_00414f8b();
    }
    puStack_1f4 = (undefined4 *)0x3;
    uStack_1f8 = 0xff;
    puStack_1fc = (undefined1 *)0x7e9a75;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x3c;
    if (*(int *)(unaff_EBP + -0x40) == 0) {
      puStack_1f4 = (undefined4 *)0x80004003;
      uStack_1f8 = 0x7e9a88;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      puStack_1f4 = (undefined4 *)0x80004003;
      uStack_1f8 = 0x7e9a97;
      FUN_00878dfb();
    }
    piVar9 = *(int **)(unaff_EBP + -0x18);
    *(int **)(unaff_EBP + -0x14) = piVar9;
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x40);
    puStack_1f4 = (undefined4 *)0x7e9aa8;
    iVar5 = FUN_0040e48b();
    uStack_204 = *(undefined4 *)(unaff_EBP + -0x20);
    iStack_200 = *(undefined4 *)(unaff_EBP + -0x3c);
    puStack_1fc = *(undefined1 **)(unaff_EBP + -0x38);
    uStack_1f8 = *(undefined4 *)(unaff_EBP + -0x34);
    puStack_1f4 = *(undefined4 **)(unaff_EBP + -0x30);
    iVar5 = (**(code **)(*piVar9 + 0x80))(*(undefined4 *)(unaff_EBP + -0x14),0x79U - iVar5 >> 1,3);
    if (iVar5 < 0) {
      piStack_19c = *(int **)(unaff_EBP + -0x14);
      iStack_1a4 = 0x7e9ae0;
      puStack_1a0 = (undefined1 *)iVar5;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    piStack_19c = (int *)0x7e9aed;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e9af8;
      FUN_00878dfb();
    }
    piStack_19c = (int *)0x7e9b01;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    piStack_19c = (int *)0x7e9b11;
    puStack_1a0 = (undefined1 *)FUN_00449713();
    *(int ***)(unaff_EBP + -0x20) = &piStack_19c;
    iStack_1a4 = 0x7e9b1d;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    puStack_1a0 = (undefined1 *)0x7e9b29;
    FUN_0044974c();
    puStack_1a0 = (undefined1 *)0x7e9b30;
    iVar5 = FUN_00448ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    piStack_19c = (int *)0x7e9b3f;
    piVar9 = (int *)(unaff_EBP + -0x3c);
    iVar6 = FUN_00402bc3();
    piStack_19c = piVar9;
    if (iVar6 < 0) {
      piStack_19c = (int *)0x7e9b4a;
      FUN_00878dfb();
      piStack_19c = extraout_ECX_03;
    }
    if (0x79 < iVar5) {
      puStack_1a0 = (undefined1 *)(unaff_EBP + -0x6c);
      *(int ***)(unaff_EBP + -0x20) = &piStack_19c;
      iStack_1a4 = 0x7e9b60;
      FUN_0046fcc9();
      puStack_1a0 = (undefined1 *)(unaff_EBP + -0x2c);
      iStack_1a4 = 0x7e9b69;
      FUN_007d3a22();
    }
    piStack_19c = (int *)0x7e9b7b;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x94));
    piStack_19c = (int *)(unaff_EBP + -0x94);
    puStack_1a0 = (undefined1 *)0x7e9b88;
    iVar6 = FUN_00402e32();
    if (iVar6 < 0) {
      piStack_19c = (int *)0x7e9b94;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    piStack_19c = (int *)0x7e9ba1;
    FUN_00403191();
    piStack_19c = (int *)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    puStack_1a0 = (undefined1 *)0x7e9bb8;
    puStack_1a0 = (undefined1 *)FUN_00449749();
    iStack_1a4 = 0x7e9bc1;
    piStack_1a8 = (int *)FUN_00449713();
    *(int **)(unaff_EBP + -0x20) = &iStack_1a4;
    puStack_1ac = (undefined1 *)0x7e9bcd;
    FUN_00448a17();
    piStack_1a8 = (int *)0x5;
    puStack_1ac = (undefined1 *)((0x79 - iVar5) / 2);
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    iStack_1b0 = 0x7e9be6;
    FUN_004115d9();
    iStack_1b0 = 0x7e9bed;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    piStack_19c = (int *)0x7e9bfa;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e9c05;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    piStack_19c = (int *)0x7e9c15;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e9c20;
      FUN_00878dfb();
    }
    piStack_19c = (int *)0x7e9c26;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
    piStack_19c = (int *)(unaff_EBP + -0x3c);
    puStack_1a0 = (undefined1 *)0x7e9c30;
    iVar5 = FUN_00402e32();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e9c3c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x42;
    piStack_19c = (int *)0x7e9c46;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
    piStack_19c = (int *)(unaff_EBP + -0x58);
    puStack_1a0 = (undefined1 *)0x7e9c50;
    iVar5 = FUN_00402e32();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e9c5c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    piStack_19c = (int *)0x7e9c66;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
    piStack_19c = (int *)(unaff_EBP + -0x80);
    puStack_1a0 = (undefined1 *)0x7e9c70;
    iVar5 = FUN_00402e32();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e9c7c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    piStack_19c = (int *)0x7e9c89;
    VariantInit((VARIANTARG *)(unaff_EBP + -0xa4));
    piStack_19c = (int *)(unaff_EBP + -0xa4);
    puStack_1a0 = (undefined1 *)0x7e9c96;
    iVar5 = FUN_00402e32();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e9ca2;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    piStack_19c = (int *)0x7e9caf;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x94));
    piStack_19c = (int *)(unaff_EBP + -0x94);
    puStack_1a0 = (undefined1 *)0x7e9cbc;
    iVar5 = FUN_00402e32();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e9cc8;
      FUN_00878dfb();
    }
    iVar5 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x104);
    *(undefined1 *)(unaff_EBP + -4) = 0x46;
    if (iVar5 == 0) {
      piStack_19c = (int *)0x7e9ce8;
      FUN_00878dfb();
    }
    piStack_19c = (int *)(unaff_EBP + -0x58);
    puStack_1a0 = (undefined1 *)(unaff_EBP + -0x80);
    iStack_1a4 = unaff_EBP + -0xa4;
    piStack_1a8 = (int *)(unaff_EBP + -0x94);
    puStack_1ac = *(undefined1 **)(unaff_EBP + -0x18);
    iStack_1b0 = unaff_EBP + -0xb8;
    FUN_004250ac();
    piStack_19c = (int *)0x7e9d1f;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e9d2a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    piStack_19c = (int *)0x7e9d3a;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e9d45;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    piStack_19c = (int *)0x7e9d55;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e9d60;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    piStack_19c = (int *)0x7e9d6d;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e9d78;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x42;
    piStack_19c = (int *)0x7e9d85;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e9d90;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3b;
    piStack_19c = (int *)0x7e9d9d;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e9da8;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    if (*(int **)(unaff_EBP + -100) != (int *)0x0) {
      piStack_19c = (int *)0x7e9dc5;
      (**(code **)(**(int **)(unaff_EBP + -100) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    if (*(int **)(unaff_EBP + -0x6c) != (int *)0x0) {
      piStack_19c = (int *)0x7e9dd6;
      (**(code **)(**(int **)(unaff_EBP + -0x6c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2b;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      piStack_19c = (int *)0x7e9de7;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
      piStack_19c = (int *)0x7e9df8;
      (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
    }
  }
  piVar9 = *(int **)(unaff_EBP + -0x24);
  if (*piVar9 == 0) {
    piStack_19c = (int *)0x7e9e0b;
    FUN_00878dfb();
  }
  uVar7 = FUN_0042fb0a();
  iVar5 = *piVar9;
  *(undefined4 *)(unaff_EBP + -0x14) = uVar7;
  if (iVar5 == 0) {
    piStack_19c = (int *)0x7e9e23;
    FUN_00878dfb();
  }
  uVar7 = FUN_0042fb34();
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar7;
  if ((*(int *)(unaff_EBP + -0x60) != 0) && (*(int *)(*(int *)(unaff_EBP + -0x60) + 0x9c) != 0)) {
    uVar7 = FUN_0043f545();
    *(undefined4 *)(unaff_EBP + -0x2c) = uVar7;
  }
  uVar7 = *(undefined4 *)(unaff_EBP + -0x14);
  if (*(int *)(unaff_EBP + -0x5c) == 0) {
    uVar7 = *(undefined4 *)(unaff_EBP + -0x28);
  }
  *(undefined4 *)(unaff_EBP + -0x28) = uVar7;
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x2c) + *(int *)(unaff_EBP + -0x10);
  if (*(int *)(unaff_EBP + -0x5c) == 0) {
    piStack_19c = (int *)0x7e9e7b;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
    piStack_19c = (int *)(unaff_EBP + -0x58);
    puStack_1a0 = (undefined1 *)0x7e9e85;
    iVar5 = FUN_00402e32();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e9e91;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    piStack_19c = (int *)0x7e9e9b;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
    piStack_19c = (int *)(unaff_EBP + -0x3c);
    puStack_1a0 = (undefined1 *)0x7e9ea5;
    iVar5 = FUN_00402e32();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e9eb1;
      FUN_00878dfb();
    }
    iVar5 = *(int *)(unaff_EBP + -0x1c);
    iVar6 = *(int *)(iVar5 + 0x84);
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    if (iVar6 < *(int *)(unaff_EBP + -0x18)) {
      iVar6 = (*(int *)(iVar5 + 0x20) - *(int *)(unaff_EBP + -0x18)) + -0x34 +
              *(int *)(unaff_EBP + -0x2c);
    }
    else {
      iVar6 = (iVar6 - *(int *)(unaff_EBP + -0x18)) / 2 + 0x1c + *(int *)(unaff_EBP + -0x2c);
    }
    iVar3 = *(int *)(iVar5 + 0x104);
    *(int *)(unaff_EBP + -0x10) = iVar6;
    if (iVar3 == 0) {
      piStack_19c = (int *)0x7e9efd;
      FUN_00878dfb();
    }
    puVar4 = *(undefined4 **)(iVar5 + 0x104);
    iStack_1a4 = *(int *)(unaff_EBP + -0x58);
    puStack_1a0 = *(undefined1 **)(unaff_EBP + -0x54);
    piStack_19c = *(int **)(unaff_EBP + -0x50);
    *(undefined4 *)(unaff_EBP + -0x20) = *puVar4;
    iStack_1b0 = *(int *)(unaff_EBP + -0x38);
    puStack_1ac = *(undefined1 **)(unaff_EBP + -0x34);
    *(undefined4 **)(unaff_EBP + -0x44) = puVar4;
    piStack_1a8 = *(int **)(unaff_EBP + -0x30);
    iVar5 = (**(code **)(*(int *)(unaff_EBP + -0x20) + 0x90))();
    if (iVar5 < 0) {
      piStack_19c = *(int **)(unaff_EBP + -0x44);
      iStack_1a4 = 0x7e9f4c;
      puStack_1a0 = (undefined1 *)iVar5;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    piStack_19c = (int *)0x7e9f59;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e9f64;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    piStack_19c = (int *)0x7e9f71;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7e9f7c;
      FUN_00878dfb();
    }
  }
  if (((*(int *)(unaff_EBP + -0x60) == 0) || (*(int *)(*(int *)(unaff_EBP + -0x60) + 0x9c) == 0)) ||
     (*(int *)(unaff_EBP + -0x84) == 0)) {
    piStack_19c = (int *)0x7ea091;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
    piStack_19c = (int *)(unaff_EBP + -0x58);
    puStack_1a0 = (undefined1 *)0x7ea09b;
    iVar5 = FUN_00402e32();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7ea0a7;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4d;
    piStack_19c = (int *)0x7ea0b1;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
    piStack_19c = (int *)(unaff_EBP + -0x3c);
    puStack_1a0 = (undefined1 *)0x7ea0bb;
    iVar5 = FUN_00402e32();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7ea0c7;
      FUN_00878dfb();
    }
    iVar5 = *(int *)(unaff_EBP + -0x1c);
    iVar6 = *(int *)(iVar5 + 0x84);
    *(undefined1 *)(unaff_EBP + -4) = 0x4e;
    if ((iVar6 < *(int *)(unaff_EBP + -0x18)) && (*(int *)(iVar5 + 0x104) != 0)) {
      iVar5 = (*(int *)(iVar5 + 0x20) - *(int *)(unaff_EBP + -0x18)) + -0x3e;
    }
    else {
      iVar5 = (iVar6 - *(int *)(unaff_EBP + -0x18)) / 2 + 0x1c;
    }
    *(int *)(unaff_EBP + -0x10) = iVar5;
    if (**(int **)(unaff_EBP + -0x24) == 0) {
      piStack_19c = (int *)0x7ea10b;
      FUN_00878dfb();
    }
    iStack_1a4 = *(int *)(unaff_EBP + -0x58);
    puStack_1a0 = *(undefined1 **)(unaff_EBP + -0x54);
    piStack_19c = *(int **)(unaff_EBP + -0x50);
    puVar4 = (undefined4 *)**(undefined4 **)(unaff_EBP + -0x24);
    iStack_1b0 = *(int *)(unaff_EBP + -0x38);
    puStack_1ac = *(undefined1 **)(unaff_EBP + -0x34);
    piStack_1a8 = *(int **)(unaff_EBP + -0x30);
    *(undefined4 *)(unaff_EBP + -0x20) = *puVar4;
    *(undefined4 **)(unaff_EBP + -0x44) = puVar4;
    iVar5 = (**(code **)(*(int *)(unaff_EBP + -0x20) + 0x90))();
    if (iVar5 < 0) {
      puStack_1c8 = *(undefined4 **)(unaff_EBP + -0x44);
      iStack_1d0 = 0x7ea174;
      piStack_1cc = (int *)iVar5;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4d;
    puStack_1c8 = (undefined4 *)0x7ea181;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      puStack_1c8 = (undefined4 *)0x7ea18c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_1c8 = (undefined4 *)0x7ea199;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      puStack_1c8 = (undefined4 *)0x7ea1a4;
      FUN_00878dfb();
    }
    puStack_1c8 = (undefined4 *)0x7ea1b0;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
    puStack_1c8 = (undefined4 *)(unaff_EBP + -0x58);
    piStack_1cc = (int *)0x7ea1ba;
    iVar5 = FUN_00402e32();
    if (iVar5 < 0) {
      puStack_1c8 = (undefined4 *)0x7ea1c6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4f;
    puStack_1c8 = (undefined4 *)0x7ea1d0;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
    puStack_1c8 = (undefined4 *)(unaff_EBP + -0x3c);
    piStack_1cc = (int *)0x7ea1da;
    iVar5 = FUN_00402e32();
    if (iVar5 < 0) {
      puStack_1c8 = (undefined4 *)0x7ea1e6;
      FUN_00878dfb();
    }
    iVar5 = **(int **)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 0x50;
    if (iVar5 == 0) {
      puStack_1c8 = (undefined4 *)0x7ea1fc;
      FUN_00878dfb();
    }
    piVar9 = (int *)**(undefined4 **)(unaff_EBP + -0x24);
    iStack_1d0 = *(int *)(unaff_EBP + -0x58);
    piStack_1cc = *(int **)(unaff_EBP + -0x54);
    puStack_1c8 = *(undefined4 **)(unaff_EBP + -0x50);
    puStack_1e0 = *(undefined1 **)(unaff_EBP + -0x3c);
    iStack_1dc = *(undefined4 *)(unaff_EBP + -0x38);
    uStack_1d8 = *(undefined4 *)(unaff_EBP + -0x34);
    uStack_1e4 = 0x20;
    iStack_1d4 = *(undefined4 *)(unaff_EBP + -0x30);
    uStack_1ec = 0x7ea224;
    piStack_1e8 = piVar9;
    puVar10 = (undefined1 *)(**(code **)(*piVar9 + 0x110))();
    if ((int)puVar10 < 0) {
      iStack_1a4 = 0x7ea234;
      puStack_1a0 = puVar10;
      piStack_19c = piVar9;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x4f;
    piStack_19c = (int *)0x7ea241;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7ea24c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    piStack_19c = (int *)0x7ea259;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_19c = (int *)0x7ea264;
      FUN_00878dfb();
    }
  }
  else {
    iVar5 = *(int *)(unaff_EBP + -0x1c);
    FUN_004497c2();
    piStack_19c = (int *)0x7e9fbe;
    puVar4 = (undefined4 *)FUN_004489f5();
    *(undefined4 *)(unaff_EBP + -0x20) = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    piStack_19c = (int *)0x7e9fd2;
    puVar4 = (undefined4 *)FUN_004489f5();
    *(undefined4 *)(unaff_EBP + -0x44) = *puVar4;
    piStack_19c = (int *)0x64;
    puStack_1ac = (undefined1 *)
                  (*(int *)(unaff_EBP + -0x2c) +
                  (*(int *)(iVar5 + 0x84) - *(int *)(unaff_EBP + -0x18)) / 2);
    puStack_1a0 = puStack_1ac + (-(uint)(*(int *)(unaff_EBP + -0x5c) != 0) & 0xfffffffc) + 0x20;
    iStack_1a4 = 0x49;
    piStack_1a8 = (int *)0x0;
    iStack_1b0 = unaff_EBP + -0x20;
    *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_1ac;
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    FUN_0052359e();
    *(int **)(unaff_EBP + -0x14) = &iStack_1b0;
    *(undefined1 *)(unaff_EBP + -4) = 0x4b;
    iStack_1b0 = extraout_ECX_04;
    FUN_00523572();
    *(undefined1 *)(unaff_EBP + -4) = 0x4a;
    FUN_0044972c();
    FUN_00449780();
    FUN_0063c0b3();
    FUN_00449780();
    FUN_0043f082();
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    if (*(int **)(unaff_EBP + -0x48) != (int *)0x0) {
      piStack_19c = (int *)0x7ea06b;
      (**(code **)(**(int **)(unaff_EBP + -0x48) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      piStack_19c = (int *)0x7ea080;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int **)(unaff_EBP + -0x70) != (int *)0x0) {
    piStack_19c = (int *)0x7ea275;
    (**(code **)(**(int **)(unaff_EBP + -0x70) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


