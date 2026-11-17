/* FUN_006e682c - 0x006e682c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006e682c(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  int unaff_EBP;
  undefined *puStack_22c;
  int *piStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  int iStack_214;
  int *piStack_210;
  undefined4 *puStack_20c;
  int *piStack_208;
  undefined *puStack_204;
  int *piStack_200;
  undefined *puStack_1fc;
  int iStack_1f8;
  int *piStack_1f4;
  int *piStack_1f0;
  int *piStack_1ec;
  undefined1 *puStack_1e8;
  wchar_t *pwStack_1e4;
  undefined4 *puStack_1e0;
  int iStack_1dc;
  undefined1 *puStack_1d8;
  int iStack_1d4;
  int *piStack_1cc;
  undefined1 *puStack_1c8;
  int iStack_1c4;
  undefined4 uStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int *piStack_1b4;
  undefined4 *puStack_1b0;
  int *piStack_1ac;
  undefined *puStack_1a8;
  int *piStack_1a4;
  undefined *puStack_1a0;
  int *piStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 *puStack_174;
  
  FUN_00879bb8();
  iVar3 = *(int *)(extraout_ECX + 0xa74);
  *(int *)(unaff_EBP + -0x8c) = extraout_ECX;
  iVar3 = *(int *)(iVar3 + 0x34);
  *(int *)(unaff_EBP + -0xa0) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(uint *)(unaff_EBP + -0x10) = (uint)(iVar3 == 9);
  puStack_174 = (undefined4 *)0x3af;
  iStack_178 = unaff_EBP + -0x28;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_17c = 0x6e687c;
  puVar2 = (undefined4 *)FUN_00679d86();
  uStack_17c = *puVar2;
  puStack_174 = (undefined4 *)0x0;
  iStack_178 = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_180 = 0x6e688d;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    puStack_174 = (undefined4 *)(*(int *)(unaff_EBP + -0x28) + -0xc);
    iStack_178 = 0x6e68a4;
    FUN_00403384();
  }
  puStack_174 = &DAT_00980690;
  iStack_178 = 0x6e68b6;
  FUN_00403191();
  puStack_174 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_178 = 0x6e68c3;
  FUN_00403191();
  piStack_19c = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piStack_19c == (int *)0x0) {
    puStack_174 = (undefined4 *)0x80004003;
    iStack_178 = 0x6e68d8;
    FUN_00878dfb();
    piStack_19c = *(int **)(unaff_EBP + -0x18);
  }
  uStack_180 = *(undefined4 *)(unaff_EBP + -0x88);
  uStack_17c = *(undefined4 *)(unaff_EBP + -0x84);
  iVar3 = *piStack_19c;
  iStack_178 = *(undefined4 *)(unaff_EBP + -0x80);
  puStack_174 = *(undefined4 **)(unaff_EBP + -0x7c);
  uStack_190 = *(undefined4 *)(unaff_EBP + -0x74);
  uStack_18c = *(undefined4 *)(unaff_EBP + -0x70);
  uStack_194 = 0x100;
  uStack_188 = *(undefined4 *)(unaff_EBP + -0x6c);
  uStack_198 = 0xae;
  *(int **)(unaff_EBP + -0x28) = piStack_19c;
  uStack_184 = *(undefined4 *)(unaff_EBP + -0x68);
  puStack_1a0 = (undefined *)0x6e6909;
  iVar3 = (**(code **)(iVar3 + 0x2c))();
  if (iVar3 < 0) {
    puStack_1a0 = &DAT_00963cc8;
    piStack_1a4 = *(int **)(unaff_EBP + -0x28);
    piStack_1ac = (int *)0x6e691c;
    puStack_1a8 = (undefined *)iVar3;
    FUN_00878e09();
  }
  puStack_1a0 = (undefined *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_1a4 = (int *)0x6e6929;
  puStack_1a0 = (undefined *)FUN_00402bc3();
  if ((int)puStack_1a0 < 0) {
    piStack_1a4 = (int *)0x6e6934;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_1a0 = (undefined *)(unaff_EBP + -0x88);
  piStack_1a4 = (int *)0x6e6944;
  puStack_1a0 = (undefined *)FUN_00402bc3();
  if ((int)puStack_1a0 < 0) {
    piStack_1a4 = (int *)0x6e694f;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    puStack_1a0 = (undefined *)0x80004003;
    piStack_1a4 = (int *)0x6e695f;
    FUN_00878dfb();
  }
  piVar5 = *(int **)(unaff_EBP + -0x18);
  puStack_1a0 = (undefined *)0x0;
  puStack_1a8 = (undefined *)0x6e696a;
  piStack_1a4 = piVar5;
  iVar3 = (**(code **)(*piVar5 + 0x70))();
  if (iVar3 < 0) {
    puStack_1a8 = &DAT_00963cc8;
    piStack_1b4 = (int *)0x6e6976;
    puStack_1b0 = (undefined4 *)iVar3;
    piStack_1ac = piVar5;
    FUN_00878e09();
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    puStack_1a8 = (undefined *)0x80004003;
    piStack_1ac = (int *)0x6e6986;
    FUN_00878dfb();
  }
  piVar5 = *(int **)(unaff_EBP + -0x18);
  puStack_1a8 = (undefined *)0x0;
  puStack_1b0 = (undefined4 *)0x6e6991;
  piStack_1ac = piVar5;
  iVar3 = (**(code **)(*piVar5 + 0x78))();
  if (iVar3 < 0) {
    puStack_1b0 = (undefined4 *)&DAT_00963cc8;
    iStack_1bc = 0x6e699d;
    iStack_1b8 = iVar3;
    piStack_1b4 = piVar5;
    FUN_00878e09();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    puStack_1b0 = &DAT_00980690;
    piStack_1b4 = (int *)0x6e719a;
    FUN_00403191();
    puStack_1b0 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    piStack_1b4 = (int *)0x6e71a7;
    FUN_00403191();
    puStack_1b0 = (undefined4 *)0x0;
    piStack_1b4 = (int *)0x0;
    iStack_1b8 = unaff_EBP + -0x60;
    iStack_1bc = unaff_EBP + -0x50;
    puStack_1c8 = (undefined1 *)&uStack_1c0;
    *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_1c0;
    iStack_1c4 = 0x9f0;
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    piStack_1cc = (int *)0x6e71cd;
    FUN_00679e4e();
    iStack_1c4 = unaff_EBP + -0x140;
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    puStack_1c8 = (undefined1 *)0x6e71dd;
    FUN_00405a1d();
    puStack_1c8 = (undefined1 *)0x6e71e4;
    FUN_00402660();
    puStack_1c8 = (undefined1 *)0x6e71eb;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    iStack_1b8 = 0x6e71f6;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x90) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    if (iVar3 != 0) {
      puStack_1b0 = (undefined4 *)(unaff_EBP + -0x90);
      piStack_1b4 = (int *)0x6e7212;
      puStack_1b0 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_1b0 < 0) && (puStack_1b0 != (undefined4 *)0x80004002)) {
        piStack_1b4 = (int *)0x6e7223;
        FUN_00878dfb();
      }
    }
    puStack_1b0 = (undefined4 *)(unaff_EBP + -0x140);
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    piStack_1b4 = (int *)0x6e7233;
    puStack_1b0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_1b0 < 0) {
      piStack_1b4 = (int *)0x6e723e;
      FUN_00878dfb();
    }
    puStack_1b0 = (undefined4 *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    piStack_1b4 = (int *)0x6e724b;
    puStack_1b0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_1b0 < 0) {
      piStack_1b4 = (int *)0x6e7256;
      FUN_00878dfb();
    }
    puStack_1b0 = (undefined4 *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    piStack_1b4 = (int *)0x6e7263;
    puStack_1b0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_1b0 < 0) {
      piStack_1b4 = (int *)0x6e726e;
      FUN_00878dfb();
    }
    puStack_1b0 = &DAT_00980690;
    piStack_1b4 = (int *)0x6e7277;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      puStack_1b0 = (undefined4 *)0x80004003;
      piStack_1b4 = (int *)0x6e728b;
      FUN_00878dfb();
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        puStack_1b0 = (undefined4 *)0x80004003;
        piStack_1b4 = (int *)0x6e7296;
        FUN_00878dfb();
      }
    }
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x1c);
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      puStack_1b0 = (undefined4 *)0x80004003;
      piStack_1b4 = (int *)0x6e72a6;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x1c);
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      puStack_1b0 = (undefined4 *)0x80004003;
      piStack_1b4 = (int *)0x6e72b6;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x1c);
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      puStack_1b0 = (undefined4 *)0x80004003;
      piStack_1b4 = (int *)0x6e72c8;
      FUN_00878dfb();
    }
    piVar5 = *(int **)(unaff_EBP + -0x18);
    *(int **)(unaff_EBP + -0x24) = piVar5;
    puStack_1b0 = (undefined4 *)0x6e72d6;
    iVar3 = FUN_0040e53d();
    *(int *)(unaff_EBP + -0x34) = iVar3 + -0x17;
    puStack_1b0 = (undefined4 *)0x6e72e4;
    uVar6 = FUN_0040e48b();
    *(undefined4 *)(unaff_EBP + -0x28) = uVar6;
    puStack_1b0 = (undefined4 *)0x6e72ef;
    iVar3 = FUN_0040e53d();
    *(int *)(unaff_EBP + -0x10) = iVar3 + -0x17;
    puStack_1b0 = (undefined4 *)0x6e72fc;
    iStack_1d4 = FUN_0040e48b();
    uStack_1c0 = *(undefined4 *)(unaff_EBP + -0x34);
    iStack_1c4 = *(undefined4 *)(unaff_EBP + -0x28);
    iStack_1bc = *(undefined4 *)(unaff_EBP + -0x74);
    puStack_1c8 = (undefined1 *)0x17;
    piStack_1cc = (int *)0x0;
    iStack_1b8 = *(undefined4 *)(unaff_EBP + -0x70);
    puStack_1d8 = (undefined1 *)0xffffffff;
    iStack_1dc = *(int *)(unaff_EBP + -0x40);
    piStack_1b4 = *(int **)(unaff_EBP + -0x6c);
    puStack_1e0 = (undefined4 *)0x17;
    pwStack_1e4 = (wchar_t *)0x0;
    puStack_1e8 = *(undefined1 **)(unaff_EBP + -0x24);
    puStack_1b0 = *(undefined4 **)(unaff_EBP + -0x68);
    piStack_1ec = (int *)0x6e732a;
    puVar4 = (undefined1 *)(**(code **)(*piVar5 + 0x84))();
    if ((int)puVar4 < 0) {
      iStack_1d4 = *(int *)(unaff_EBP + -0x24);
      iStack_1dc = 0x6e733c;
      puStack_1d8 = puVar4;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    iStack_1d4 = 0x6e7349;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x6e7354;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    do {
      iVar3 = *(int *)(unaff_EBP + -0x8c);
      iStack_1d4 = *(int *)(iVar3 + 0x578);
      iStack_1dc = unaff_EBP + -0x3c;
      puStack_1d8 = *(undefined1 **)(unaff_EBP + -0xa0);
      puStack_1e0 = (undefined4 *)0x6e7378;
      FUN_006ea71c();
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      if (*(int *)(unaff_EBP + -0x38) == 0) {
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        FUN_005e05bf();
        break;
      }
      *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x30) * 0x10 + 0xac8 + iVar3;
      iStack_1d4 = 0x6e73a0;
      iVar3 = FUN_007b3eda();
      *(int *)(unaff_EBP + -0x28) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        iStack_1d4 = unaff_EBP + -0x9c;
        *(undefined1 *)(unaff_EBP + -4) = 0x39;
        puStack_1d8 = (undefined1 *)0x6e73c9;
        puVar2 = (undefined4 *)FUN_00679d86();
        puStack_1d8 = (undefined1 *)*puVar2;
        iStack_1d4 = unaff_EBP + -0x14;
        *(undefined1 *)(unaff_EBP + -4) = 0x3a;
        iStack_1dc = 0x6e73da;
        FUN_0040381b();
        *(undefined1 *)(unaff_EBP + -4) = 0x39;
        if (*(int *)(unaff_EBP + -0x9c) != 0) {
          iStack_1d4 = 0x6e73f4;
          FUN_00403384();
        }
        iStack_1d4 = 0x6e7401;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x3b;
        iStack_1d4 = 0x6e7411;
        FUN_00403191();
        iVar3 = *(int *)(unaff_EBP + -0x38);
        iVar7 = *(int *)(iVar3 + 0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        if (iVar7 == 0) {
          iStack_1d4 = 0x6e742a;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar3 + 0x10);
        if (*(int *)(*(int *)(unaff_EBP + -0x38) + 0x10) == 0) {
          iStack_1d4 = 0x6e7444;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          iStack_1d4 = 0x6e7456;
          FUN_00878dfb();
        }
        piVar5 = *(int **)(unaff_EBP + -0x14);
        *(int **)(unaff_EBP + -0x10) = piVar5;
        uVar6 = FUN_0040e53d();
        *(undefined4 *)(unaff_EBP + -0x20) = uVar6;
        piStack_1f4 = (int *)FUN_0040e48b();
        iStack_1dc = *(int *)(unaff_EBP + -0xc0);
        puStack_1d8 = *(undefined1 **)(unaff_EBP + -0xbc);
        iStack_1d4 = *(int *)(unaff_EBP + -0xb8);
        piStack_1f0 = *(int **)(unaff_EBP + -0x20);
        piStack_1ec = *(int **)(unaff_EBP + -0xf0);
        puStack_1e8 = *(undefined1 **)(unaff_EBP + -0xec);
        pwStack_1e4 = *(wchar_t **)(unaff_EBP + -0xe8);
        iStack_1f8 = *(int *)(unaff_EBP + -0x10);
        puStack_1e0 = *(undefined4 **)(unaff_EBP + -0xe4);
        puStack_1fc = (undefined *)0x6e7498;
        iVar3 = (**(code **)(*piVar5 + 0x2c))();
        if (iVar3 < 0) {
          puStack_1fc = &DAT_00963cc8;
          piStack_200 = *(int **)(unaff_EBP + -0x10);
          piStack_208 = (int *)0x6e74ab;
          puStack_204 = (undefined *)iVar3;
          FUN_00878e09();
        }
        puStack_1fc = (undefined *)(unaff_EBP + -0xf0);
        *(undefined1 *)(unaff_EBP + -4) = 0x3b;
        piStack_200 = (int *)0x6e74bb;
        puStack_1fc = (undefined *)FUN_00402bc3();
        if ((int)puStack_1fc < 0) {
          piStack_200 = (int *)0x6e74c6;
          FUN_00878dfb();
        }
        puStack_1fc = (undefined *)(unaff_EBP + -0xc0);
        *(undefined1 *)(unaff_EBP + -4) = 0x39;
        piStack_200 = (int *)0x6e74d6;
        puStack_1fc = (undefined *)FUN_00402bc3();
        if ((int)puStack_1fc < 0) {
          piStack_200 = (int *)0x6e74e1;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          puStack_1fc = (undefined *)0x80004003;
          piStack_200 = (int *)0x6e74f1;
          FUN_00878dfb();
        }
        piVar5 = *(int **)(unaff_EBP + -0x14);
        puStack_1fc = (undefined *)0x0;
        puStack_204 = (undefined *)0x6e74fc;
        piStack_200 = piVar5;
        iVar3 = (**(code **)(*piVar5 + 0x70))();
        if (iVar3 < 0) {
          puStack_204 = &DAT_00963cc8;
          piStack_210 = (int *)0x6e7508;
          puStack_20c = (undefined4 *)iVar3;
          piStack_208 = piVar5;
          FUN_00878e09();
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          puStack_204 = (undefined *)0x80004003;
          piStack_208 = (int *)0x6e7518;
          FUN_00878dfb();
        }
        piVar5 = *(int **)(unaff_EBP + -0x14);
        puStack_204 = (undefined *)0x0;
        puStack_20c = (undefined4 *)0x6e7523;
        piStack_208 = piVar5;
        iVar3 = (**(code **)(*piVar5 + 0x78))();
        if (iVar3 < 0) {
          puStack_20c = (undefined4 *)&DAT_00963cc8;
          uStack_218 = 0x6e752f;
          iStack_214 = iVar3;
          piStack_210 = piVar5;
          FUN_00878e09();
        }
        puStack_20c = &DAT_00980690;
        piStack_210 = (int *)0x6e753b;
        FUN_00403191();
        *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(*(int *)(unaff_EBP + -0x38) + 0x10);
        piVar5 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0x3d;
        if (piVar5 == (int *)0x0) {
          puStack_20c = (undefined4 *)0x80004003;
          piStack_210 = (int *)0x6e7559;
          FUN_00878dfb();
          piVar5 = *(int **)(unaff_EBP + -0x14);
        }
        iVar3 = *piVar5;
        uStack_21c = *(undefined4 *)(unaff_EBP + -0x20);
        uStack_218 = *(undefined4 *)(unaff_EBP + -0xe0);
        iStack_214 = *(int *)(unaff_EBP + -0xdc);
        uStack_220 = 0;
        piStack_210 = *(int **)(unaff_EBP + -0xd8);
        uStack_224 = 0;
        *(int **)(unaff_EBP + -0x10) = piVar5;
        puStack_20c = *(undefined4 **)(unaff_EBP + -0xd4);
        puStack_22c = (undefined *)0x6e757e;
        piStack_228 = piVar5;
        iVar3 = (**(code **)(iVar3 + 0x80))();
        if (iVar3 < 0) {
          puStack_22c = &DAT_00963cc8;
          FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10));
        }
        puStack_22c = (undefined *)(unaff_EBP + -0xe0);
        *(undefined1 *)(unaff_EBP + -4) = 0x39;
        puStack_22c = (undefined *)FUN_00402bc3();
        if ((int)puStack_22c < 0) {
          FUN_00878dfb();
        }
        if (*(int *)(*(int *)(unaff_EBP + -0x38) + 0x10) == 0) {
          puStack_22c = (undefined *)0x80004003;
          FUN_00878dfb();
        }
        puStack_22c = (undefined *)0x6e75c8;
        iVar3 = FUN_006e7c85();
        if (iVar3 == 1) {
          puStack_22c = *(undefined **)(unaff_EBP + -0x14);
          *(undefined ***)(unaff_EBP + -0x20) = &puStack_22c;
          FUN_004125f3();
          FUN_007d7ac7();
        }
        puStack_22c = (undefined *)0x3;
        FUN_004031b7(0x55);
        piVar5 = *(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x3e;
        if (piVar5 == (int *)0x0) {
          puStack_22c = (undefined *)0x80004003;
          FUN_00878dfb();
          piVar5 = *(int **)(unaff_EBP + -0x18);
        }
        uVar6 = (*(undefined4 **)(unaff_EBP + -0x40))[1];
        *(undefined4 *)(unaff_EBP + -0x20) = **(undefined4 **)(unaff_EBP + -0x40);
        iVar3 = *piVar5;
        *(int **)(unaff_EBP + -0x10) = piVar5;
        puStack_22c = *(undefined **)(unaff_EBP + -0x104);
        puVar4 = (undefined1 *)
                 (**(code **)(iVar3 + 0x80))
                           (piVar5,*(undefined4 *)(unaff_EBP + -0x20),uVar6,
                            *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x110),
                            *(undefined4 *)(unaff_EBP + -0x10c),*(undefined4 *)(unaff_EBP + -0x108))
        ;
        if ((int)puVar4 < 0) {
          iStack_1d4 = *(int *)(unaff_EBP + -0x10);
          iStack_1dc = 0x6e7649;
          puStack_1d8 = puVar4;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x39;
        iStack_1d4 = 0x6e7659;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_1d4 = 0x6e7664;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
        if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
          iStack_1d4 = 0x6e7679;
          (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
        }
      }
      else {
        iStack_1d4 = 0xff;
        puStack_1d8 = (undefined1 *)0x6e7690;
        FUN_004031b7();
        *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(*(int *)(unaff_EBP + -0x38) + 0x10);
        piVar5 = *(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x3f;
        if (piVar5 == (int *)0x0) {
          iStack_1d4 = 0x6e76ae;
          FUN_00878dfb();
          piVar5 = *(int **)(unaff_EBP + -0x18);
        }
        pwStack_1e4 = (wchar_t *)(*(undefined4 **)(unaff_EBP + -0x40))[1];
        puStack_1e0 = *(undefined4 **)(unaff_EBP + -0x20);
        iStack_1dc = *(int *)(unaff_EBP + -0x100);
        puStack_1d8 = *(undefined1 **)(unaff_EBP + -0xfc);
        *(undefined4 *)(unaff_EBP + -0x10) = **(undefined4 **)(unaff_EBP + -0x40);
        iVar3 = *piVar5;
        puStack_1e8 = *(undefined1 **)(unaff_EBP + -0x10);
        iStack_1d4 = *(int *)(unaff_EBP + -0xf8);
        *(int **)(unaff_EBP + -0x14) = piVar5;
        piStack_1f0 = (int *)0x6e76de;
        piStack_1ec = piVar5;
        puVar4 = (undefined1 *)(**(code **)(iVar3 + 0x80))();
        if ((int)puVar4 < 0) {
          iStack_1d4 = *(int *)(unaff_EBP + -0x14);
          iStack_1dc = 0x6e76f0;
          puStack_1d8 = puVar4;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
        iStack_1d4 = 0x6e7700;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_1d4 = 0x6e770b;
          FUN_00878dfb();
        }
      }
      iStack_1d4 = 0x6e7715;
      iVar3 = FUN_007b3f2c();
      if (iVar3 == 0) {
        if (*(int *)(unaff_EBP + -0x28) != 0) {
          iStack_1d4 = 0x6e78c8;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
          iStack_1d4 = unaff_EBP + -0x74;
          puStack_1d8 = (undefined1 *)0x6e78d2;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            iStack_1d4 = 0x6e78e0;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x49;
          iStack_1d4 = 0x6e78ed;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x88));
          iStack_1d4 = unaff_EBP + -0x88;
          puVar2 = &DAT_00980690;
          puStack_1d8 = (undefined1 *)0x6e78fa;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            iStack_1d4 = 0x6e7906;
            FUN_00878dfb();
            puVar2 = extraout_ECX_02;
          }
          iStack_1d4 = 0;
          puStack_1d8 = (undefined1 *)(unaff_EBP + -0x74);
          iStack_1dc = unaff_EBP + -0x88;
          puStack_1e8 = (undefined1 *)&puStack_1e0;
          *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_1e0;
          pwStack_1e4 = (wchar_t *)0x4e9;
          *(undefined1 *)(unaff_EBP + -4) = 0x4a;
          piStack_1ec = (int *)0x6e792d;
          puStack_1e0 = puVar2;
          FUN_00679e4e();
          pwStack_1e4 = (wchar_t *)(unaff_EBP + -0x150);
          *(undefined1 *)(unaff_EBP + -4) = 0x4a;
          puStack_1e8 = (undefined1 *)0x6e793d;
          FUN_00405a1d();
          puStack_1e8 = (undefined1 *)0x6e7944;
          FUN_00402660();
          puStack_1e8 = (undefined1 *)0x6e794b;
          FUN_00404a02();
          *(undefined1 *)(unaff_EBP + -4) = 0x4c;
          puStack_1d8 = (undefined1 *)0x6e7956;
          iVar3 = FUN_004032b4();
          *(int *)(unaff_EBP + -0x98) = iVar3;
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
          if (iVar3 != 0) {
            iStack_1d4 = 0x6e7972;
            iVar3 = FUN_00404b30();
            if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
              iStack_1d4 = 0x6e7983;
              FUN_00878dfb();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x50;
          iStack_1d4 = 0x6e7993;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_1d4 = 0x6e799e;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x4f;
          iStack_1d4 = 0x6e79ae;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_1d4 = 0x6e79b9;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x4e;
          iStack_1d4 = 0x6e79c6;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_1d4 = 0x6e79d1;
            FUN_00878dfb();
          }
          FUN_0087a1b0();
          iStack_1d4 = 0;
          iStack_1dc = *(int *)(unaff_EBP + -0x28);
          puStack_1e0 = (undefined4 *)0x6e79e6;
          puStack_1d8 = (undefined1 *)&piStack_1cc;
          iStack_1dc = FUN_00412335();
          *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_1d8;
          puStack_1e0 = (undefined4 *)0x6e79f2;
          FUN_004033a1();
          iStack_1dc = unaff_EBP + -0x170;
          *(undefined1 *)(unaff_EBP + -4) = 0x4e;
          puStack_1e0 = (undefined4 *)0x6e7a05;
          FUN_0040263d();
          puStack_1e0 = (undefined4 *)0x6e7a0c;
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x52;
          puStack_1d8 = (undefined1 *)0x6e7a17;
          iVar3 = FUN_004032b4();
          *(int *)(unaff_EBP + -0x2c) = iVar3;
          *(undefined4 *)(unaff_EBP + -0x34) = 0;
          if (iVar3 != 0) {
            iStack_1d4 = 0x6e7a2d;
            iVar3 = FUN_0041a581();
            if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
              iStack_1d4 = 0x6e7a3e;
              FUN_00878dfb();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x54;
          iStack_1d4 = 0x6e7a4e;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_1d4 = 0x6e7a59;
            FUN_00878dfb();
          }
          iStack_1d4 = 0xff;
          puStack_1d8 = (undefined1 *)0x6e7a6b;
          FUN_004031b7();
          *(undefined1 *)(unaff_EBP + -4) = 0x55;
          if (*(int *)(unaff_EBP + -0x34) == 0) {
            iStack_1d4 = 0x6e7a7e;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            iStack_1d4 = 0x6e7a8d;
            FUN_00878dfb();
          }
          piVar5 = *(int **)(unaff_EBP + -0x18);
          *(int **)(unaff_EBP + -0x28) = piVar5;
          *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x34);
          iVar3 = FUN_0040e53d();
          puStack_1e0 = *(undefined4 **)(unaff_EBP + -0x20);
          iStack_1dc = *(int *)(unaff_EBP + -0xb0);
          puStack_1d8 = *(undefined1 **)(unaff_EBP + -0xac);
          pwStack_1e4 = (wchar_t *)(((*(int **)(unaff_EBP + -0x40))[3] - iVar3) + -1);
          puStack_1e8 = (undefined1 *)(**(int **)(unaff_EBP + -0x40) + 1);
          iStack_1d4 = *(int *)(unaff_EBP + -0xa8);
          piStack_1ec = *(int **)(unaff_EBP + -0x28);
          piStack_1f0 = (int *)0x6e7acb;
          puVar4 = (undefined1 *)(**(code **)(*piVar5 + 0x80))();
          if ((int)puVar4 < 0) {
            iStack_1d4 = *(int *)(unaff_EBP + -0x28);
            iStack_1dc = 0x6e7add;
            puStack_1d8 = puVar4;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x54;
          iStack_1d4 = 0x6e7aed;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            iStack_1d4 = 0x6e7af8;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x4e;
          if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
            iStack_1d4 = 0x6e7b09;
            (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
          }
          piVar5 = *(int **)(unaff_EBP + -0x24);
          *(undefined1 *)(unaff_EBP + -4) = 0x38;
          goto LAB_006e7b10;
        }
      }
      else {
        iStack_1d4 = 0x6e772a;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x40;
        iStack_1d4 = 0x6e773a;
        FUN_00403191();
        iStack_1d4 = 0;
        puStack_1d8 = (undefined1 *)(unaff_EBP + -0x120);
        iStack_1dc = unaff_EBP + -0x130;
        *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_1e0;
        pwStack_1e4 = u_UI_UIWindow_img_MonsterBook_full_0096b02c;
        *(undefined1 *)(unaff_EBP + -4) = 0x41;
        puStack_1e8 = (undefined1 *)0x6e7760;
        FUN_004033a1();
        pwStack_1e4 = (wchar_t *)(unaff_EBP + -0x160);
        *(undefined1 *)(unaff_EBP + -4) = 0x41;
        puStack_1e8 = (undefined1 *)0x6e7770;
        FUN_00405a1d();
        puStack_1e8 = (undefined1 *)0x6e7777;
        FUN_00402660();
        puStack_1e8 = (undefined1 *)0x6e777e;
        FUN_00404a02();
        *(undefined1 *)(unaff_EBP + -4) = 0x43;
        puStack_1d8 = (undefined1 *)0x6e7789;
        iVar3 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x94) = iVar3;
        *(undefined4 *)(unaff_EBP + -100) = 0;
        if (iVar3 != 0) {
          iStack_1d4 = 0x6e77a5;
          iVar3 = FUN_0041a581();
          if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
            iStack_1d4 = 0x6e77b6;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x47;
        iStack_1d4 = 0x6e77c6;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_1d4 = 0x6e77d1;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x46;
        iStack_1d4 = 0x6e77e1;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_1d4 = 0x6e77ec;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x45;
        iStack_1d4 = 0x6e77fc;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_1d4 = 0x6e7807;
          FUN_00878dfb();
        }
        iStack_1d4 = 0xff;
        puStack_1d8 = (undefined1 *)0x6e7819;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x48;
        if (*(int *)(unaff_EBP + -100) == 0) {
          iStack_1d4 = 0x6e782c;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          iStack_1d4 = 0x6e783b;
          FUN_00878dfb();
        }
        piVar5 = *(int **)(unaff_EBP + -0x18);
        *(int **)(unaff_EBP + -0x10) = piVar5;
        *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -100);
        iVar3 = FUN_0040e53d();
        puStack_1e0 = *(undefined4 **)(unaff_EBP + -0x20);
        iStack_1dc = *(int *)(unaff_EBP + -0xd0);
        puStack_1d8 = *(undefined1 **)(unaff_EBP + -0xcc);
        pwStack_1e4 = (wchar_t *)(((*(int **)(unaff_EBP + -0x40))[3] - iVar3) + -1);
        puStack_1e8 = (undefined1 *)(**(int **)(unaff_EBP + -0x40) + 1);
        iStack_1d4 = *(int *)(unaff_EBP + -200);
        piStack_1ec = *(int **)(unaff_EBP + -0x10);
        piStack_1f0 = (int *)0x6e7879;
        puVar4 = (undefined1 *)(**(code **)(*piVar5 + 0x80))();
        if ((int)puVar4 < 0) {
          iStack_1d4 = *(int *)(unaff_EBP + -0x10);
          iStack_1dc = 0x6e788b;
          puStack_1d8 = puVar4;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x45;
        iStack_1d4 = 0x6e789b;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_1d4 = 0x6e78a6;
          FUN_00878dfb();
        }
        piVar5 = *(int **)(unaff_EBP + -100);
        *(undefined1 *)(unaff_EBP + -4) = 0x38;
LAB_006e7b10:
        if (piVar5 != (int *)0x0) {
          iStack_1d4 = 0x6e7b1a;
          (**(code **)(*piVar5 + 8))();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      if (*(int *)(unaff_EBP + -0x38) != 0) {
        iStack_1d4 = 0x6e7b2e;
        FUN_005e064d();
        *(undefined4 *)(unaff_EBP + -0x38) = 0;
      }
      *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 1;
    } while (*(int *)(unaff_EBP + -0x30) < 0x19);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      iStack_1d4 = 0x6e7b5d;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
  }
  else {
    puStack_1b0 = (undefined4 *)(unaff_EBP + -0x3c);
    piStack_1b4 = (int *)0x6e69b0;
    FUN_007b3fce();
    puStack_1b0 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_1b4 = (int *)0x6e69c1;
    FUN_00403191();
    puStack_1b0 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piStack_1b4 = (int *)0x6e69ce;
    FUN_00403191();
    puStack_1b0 = (undefined4 *)0x0;
    piStack_1b4 = (int *)0x0;
    iStack_1b8 = unaff_EBP + -0x88;
    iStack_1bc = unaff_EBP + -0x74;
    puStack_1c8 = (undefined1 *)&uStack_1c0;
    *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_1c0;
    iStack_1c4 = 0x9ef;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    piStack_1cc = (int *)0x6e69f7;
    FUN_00679e4e();
    iStack_1c4 = unaff_EBP + -0xb0;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_1c8 = (undefined1 *)0x6e6a07;
    FUN_00405a1d();
    puStack_1c8 = (undefined1 *)0x6e6a0e;
    FUN_00402660();
    puStack_1c8 = (undefined1 *)0x6e6a15;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_1b8 = 0x6e6a20;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x28) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    if (iVar3 != 0) {
      puStack_1b0 = (undefined4 *)(unaff_EBP + -0x28);
      piStack_1b4 = (int *)0x6e6a36;
      puStack_1b0 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_1b0 < 0) && (puStack_1b0 != (undefined4 *)0x80004002)) {
        piStack_1b4 = (int *)0x6e6a47;
        FUN_00878dfb();
      }
    }
    puStack_1b0 = (undefined4 *)(unaff_EBP + -0xb0);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_1b4 = (int *)0x6e6a57;
    puStack_1b0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_1b0 < 0) {
      piStack_1b4 = (int *)0x6e6a62;
      FUN_00878dfb();
    }
    puStack_1b0 = (undefined4 *)(unaff_EBP + -0x74);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_1b4 = (int *)0x6e6a6f;
    puStack_1b0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_1b0 < 0) {
      piStack_1b4 = (int *)0x6e6a7a;
      FUN_00878dfb();
    }
    puStack_1b0 = (undefined4 *)(unaff_EBP + -0x88);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    piStack_1b4 = (int *)0x6e6a8a;
    puStack_1b0 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_1b0 < 0) {
      piStack_1b4 = (int *)0x6e6a95;
      FUN_00878dfb();
    }
    puStack_1b0 = (undefined4 *)0x3;
    piStack_1b4 = (int *)0xff;
    iStack_1b8 = 0x6e6aa4;
    FUN_004031b7();
    piVar5 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (piVar5 == (int *)0x0) {
      puStack_1b0 = (undefined4 *)0x80004003;
      piStack_1b4 = (int *)0x6e6ab9;
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + -0x18);
    }
    iVar3 = *piVar5;
    uStack_1c0 = *(undefined4 *)(unaff_EBP + -0x34);
    iStack_1bc = *(undefined4 *)(unaff_EBP + -0x60);
    iStack_1b8 = *(undefined4 *)(unaff_EBP + -0x5c);
    iStack_1c4 = 5;
    piStack_1b4 = *(int **)(unaff_EBP + -0x58);
    puStack_1c8 = (undefined1 *)0x0;
    *(int **)(unaff_EBP + -0x10) = piVar5;
    puStack_1b0 = *(undefined4 **)(unaff_EBP + -0x54);
    piStack_1cc = piVar5;
    puVar4 = (undefined1 *)(**(code **)(iVar3 + 0x80))();
    if ((int)puVar4 < 0) {
      iStack_1d4 = *(int *)(unaff_EBP + -0x10);
      iStack_1dc = 0x6e6aed;
      puStack_1d8 = puVar4;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_1d4 = 0x6e6afa;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x6e6b05;
      FUN_00878dfb();
    }
    if (DAT_00979168 != 0) {
      iStack_1d4 = 0xff;
      puStack_1d8 = (undefined1 *)0x6e6b21;
      FUN_004031b7();
      iStack_1d4 = unaff_EBP + -0x40;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      puStack_1d8 = (undefined1 *)0x6e6b3a;
      puVar2 = (undefined4 *)FUN_005e01b7();
      *(undefined4 *)(unaff_EBP + -0x10) = *puVar2;
      piStack_1ec = *(int **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (piStack_1ec == (int *)0x0) {
        iStack_1d4 = 0x6e6b54;
        FUN_00878dfb();
        piStack_1ec = *(int **)(unaff_EBP + -0x18);
      }
      iVar3 = *piStack_1ec;
      puStack_1e0 = *(undefined4 **)(unaff_EBP + -0x10);
      iStack_1dc = *(int *)(unaff_EBP + -0x60);
      puStack_1d8 = *(undefined1 **)(unaff_EBP + -0x5c);
      pwStack_1e4 = (wchar_t *)0x12;
      iStack_1d4 = *(int *)(unaff_EBP + -0x58);
      puStack_1e8 = (undefined1 *)0x4d;
      *(int **)(unaff_EBP + -0x24) = piStack_1ec;
      piStack_1f0 = (int *)0x6e6b76;
      puVar4 = (undefined1 *)(**(code **)(iVar3 + 0x80))();
      if ((int)puVar4 < 0) {
        iStack_1d4 = *(int *)(unaff_EBP + -0x24);
        iStack_1dc = 0x6e6b88;
        puStack_1d8 = puVar4;
        FUN_00878e09();
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_1d4 = 0x6e6b9d;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_1d4 = 0x6e6ba8;
        FUN_00878dfb();
      }
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    iStack_1d4 = unaff_EBP + -0x1c;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_1d8 = (undefined1 *)0x6e6bbb;
    FUN_007d4a9a();
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x38);
    iStack_1d4 = unaff_EBP + -0x24;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    puStack_1d8 = (undefined1 *)0x6e6bdd;
    piVar5 = (int *)FUN_00679d22();
    iStack_1d4 = *piVar5;
    puStack_1d8 = (undefined1 *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_1dc = 0x6e6bf3;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      iStack_1d4 = 0x6e6c0a;
      FUN_00434e38();
    }
    iStack_1d4 = 0x6e6c14;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_1d4 = 0x6e6c24;
    puStack_1d8 = (undefined1 *)FUN_00449713();
    *(int **)(unaff_EBP + -0x2c) = &iStack_1d4;
    iStack_1dc = 0x6e6c30;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    puStack_1d8 = (undefined1 *)0x6e6c3c;
    FUN_0044974c();
    puStack_1d8 = (undefined1 *)0x6e6c43;
    uVar6 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x30) = uVar6;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_1d4 = 0x6e6c53;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x6e6c5e;
      FUN_00878dfb();
    }
    iStack_1d4 = 0x6e6c67;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_1d4 = 0x6e6c74;
    FUN_00403191();
    iStack_1d4 = unaff_EBP + -0x60;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    puStack_1d8 = (undefined1 *)0x6e6c88;
    puStack_1d8 = (undefined1 *)FUN_00449749();
    iStack_1dc = 0x6e6c91;
    puStack_1e0 = (undefined4 *)FUN_00449713();
    *(int **)(unaff_EBP + -0x2c) = &iStack_1dc;
    pwStack_1e4 = L"貸";
    FUN_00448a17();
    pwStack_1e4 = (wchar_t *)(0x8c - *(int *)(unaff_EBP + -0x30));
    puStack_1e0 = (undefined4 *)0x54;
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    puStack_1e8 = (undefined1 *)0x6e6cb4;
    FUN_004115d9();
    puStack_1e8 = (undefined1 *)0x6e6cbb;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_1d4 = 0x6e6cc8;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x6e6cd3;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_1d4 = 0x6e6ce0;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x6e6ceb;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x38);
    iStack_1d4 = unaff_EBP + -0x24;
    puStack_1d8 = (undefined1 *)0x6e6cfd;
    piVar5 = (int *)FUN_00679d22();
    iStack_1d4 = *piVar5;
    puStack_1d8 = (undefined1 *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_1dc = 0x6e6d13;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      iStack_1d4 = 0x6e6d2a;
      FUN_00434e38();
    }
    iStack_1d4 = 0x6e6d34;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_1d4 = 0x6e6d44;
    puStack_1d8 = (undefined1 *)FUN_00449713();
    *(int **)(unaff_EBP + -0x2c) = &iStack_1d4;
    iStack_1dc = 0x6e6d50;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    puStack_1d8 = (undefined1 *)0x6e6d5c;
    FUN_0044974c();
    puStack_1d8 = (undefined1 *)0x6e6d63;
    uVar6 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x30) = uVar6;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_1d4 = 0x6e6d73;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x6e6d7e;
      FUN_00878dfb();
    }
    iStack_1d4 = 0x6e6d87;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_1d4 = 0x6e6d94;
    FUN_00403191();
    iStack_1d4 = unaff_EBP + -0x50;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    puStack_1d8 = (undefined1 *)0x6e6da8;
    puStack_1d8 = (undefined1 *)FUN_00449749();
    iStack_1dc = 0x6e6db1;
    puStack_1e0 = (undefined4 *)FUN_00449713();
    *(int **)(unaff_EBP + -0x2c) = &iStack_1dc;
    pwStack_1e4 = L"貸";
    FUN_00448a17();
    pwStack_1e4 = (wchar_t *)(0x8c - *(int *)(unaff_EBP + -0x30));
    puStack_1e0 = (undefined4 *)0x87;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    puStack_1e8 = (undefined1 *)0x6e6dd7;
    FUN_004115d9();
    puStack_1e8 = (undefined1 *)0x6e6dde;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    iStack_1d4 = 0x6e6deb;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x6e6df6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_1d4 = 0x6e6e03;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x6e6e0e;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x38);
    iStack_1d4 = unaff_EBP + -0x24;
    puStack_1d8 = (undefined1 *)0x6e6e20;
    piVar5 = (int *)FUN_00679d22();
    iStack_1d4 = *piVar5;
    puStack_1d8 = (undefined1 *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    iStack_1dc = 0x6e6e36;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      iStack_1d4 = 0x6e6e4d;
      FUN_00434e38();
    }
    iStack_1d4 = 0x6e6e57;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    iStack_1d4 = 0x6e6e67;
    puStack_1d8 = (undefined1 *)FUN_00449713();
    *(int **)(unaff_EBP + -0x2c) = &iStack_1d4;
    iStack_1dc = 0x6e6e73;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    puStack_1d8 = (undefined1 *)0x6e6e7f;
    FUN_0044974c();
    puStack_1d8 = (undefined1 *)0x6e6e86;
    uVar6 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x30) = uVar6;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_1d4 = 0x6e6e96;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x6e6ea1;
      FUN_00878dfb();
    }
    iStack_1d4 = 0x6e6eaa;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    iStack_1d4 = 0x6e6eb7;
    FUN_00403191();
    iStack_1d4 = unaff_EBP + -0x50;
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    puStack_1d8 = (undefined1 *)0x6e6ecb;
    puStack_1d8 = (undefined1 *)FUN_00449749();
    iStack_1dc = 0x6e6ed4;
    puStack_1e0 = (undefined4 *)FUN_00449713();
    *(int **)(unaff_EBP + -0x2c) = &iStack_1dc;
    pwStack_1e4 = L"貸";
    FUN_00448a17();
    pwStack_1e4 = (wchar_t *)(0x8c - *(int *)(unaff_EBP + -0x30));
    puStack_1e0 = (undefined4 *)0xa8;
    *(undefined1 *)(unaff_EBP + -4) = 0x22;
    puStack_1e8 = (undefined1 *)0x6e6efa;
    FUN_004115d9();
    puStack_1e8 = (undefined1 *)0x6e6f01;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    iStack_1d4 = 0x6e6f0e;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x6e6f19;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_1d4 = 0x6e6f26;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x6e6f31;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x38);
    iStack_1d4 = unaff_EBP + -0x24;
    puStack_1d8 = (undefined1 *)0x6e6f43;
    piVar5 = (int *)FUN_00679d22();
    iStack_1d4 = *piVar5;
    puStack_1d8 = (undefined1 *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    iStack_1dc = 0x6e6f59;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      iStack_1d4 = 0x6e6f70;
      FUN_00434e38();
    }
    iStack_1d4 = 0x6e6f7a;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_1d4 = 0x6e6f8a;
    puStack_1d8 = (undefined1 *)FUN_00449713();
    *(int **)(unaff_EBP + -0x2c) = &iStack_1d4;
    iStack_1dc = 0x6e6f96;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    puStack_1d8 = (undefined1 *)0x6e6fa2;
    FUN_0044974c();
    puStack_1d8 = (undefined1 *)0x6e6fa9;
    iVar3 = FUN_00448ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_1d4 = 0x6e6fb8;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      iStack_1d4 = 0x6e6fc3;
      FUN_00878dfb();
    }
    iStack_1d4 = 0x6e6fcc;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    iStack_1d4 = 0x6e6fd9;
    FUN_00403191();
    iStack_1d4 = unaff_EBP + -0x50;
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    puStack_1d8 = (undefined1 *)0x6e6fed;
    puStack_1d8 = (undefined1 *)FUN_00449749();
    iStack_1dc = 0x6e6ff6;
    puStack_1e0 = (undefined4 *)FUN_00449713();
    *(int **)(unaff_EBP + -0x2c) = &iStack_1dc;
    pwStack_1e4 = L"貾";
    iStack_1dc = extraout_ECX_00;
    FUN_00448a17();
    puStack_1e0 = (undefined4 *)0xbb;
    pwStack_1e4 = (wchar_t *)(0x8c - iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    puStack_1e8 = (undefined1 *)0x6e701d;
    FUN_004115d9();
    puStack_1e8 = (undefined1 *)0x6e7024;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    iStack_1d4 = 0x6e7031;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x6e703c;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_1d4 = 0x6e7049;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_1d4 = 0x6e7054;
      FUN_00878dfb();
    }
    pcVar1 = *(char **)(*(int *)(unaff_EBP + -0x38) + 0x20);
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      iStack_1d4 = 0x6e7074;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      iStack_1d4 = 0x6e7084;
      FUN_006ea9f9();
      iStack_1d4 = 0x6e708e;
      puStack_1d8 = (undefined1 *)FUN_00449713();
      *(int **)(unaff_EBP + -0x2c) = &iStack_1d4;
      iStack_1dc = 0x6e709a;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      puStack_1d8 = (undefined1 *)0x6e70a6;
      FUN_0044974c();
      puStack_1d8 = (undefined1 *)0x6e70ad;
      iVar3 = FUN_00448ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_1d4 = 0x6e70bc;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        iStack_1d4 = 0x6e70c7;
        FUN_00878dfb();
      }
      iStack_1d4 = 0x6e70d0;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      iStack_1d4 = 0x6e70dd;
      FUN_00403191();
      iStack_1d4 = unaff_EBP + -0x50;
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      puStack_1d8 = (undefined1 *)0x6e70f1;
      puStack_1d8 = (undefined1 *)FUN_00449749();
      iStack_1dc = 0x6e70fa;
      FUN_006ea9f9();
      iStack_1dc = 0x6e7104;
      puStack_1e0 = (undefined4 *)FUN_00449713();
      *(int **)(unaff_EBP + -0x2c) = &iStack_1dc;
      pwStack_1e4 = L"\xe168";
      iStack_1dc = extraout_ECX_01;
      FUN_00448a17();
      puStack_1e0 = (undefined4 *)0xe1;
      pwStack_1e4 = (wchar_t *)(0x8c - iVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      puStack_1e8 = (undefined1 *)0x6e7124;
      FUN_004115d9();
      puStack_1e8 = (undefined1 *)0x6e712b;
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      iStack_1d4 = 0x6e7138;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_1d4 = 0x6e7143;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_1d4 = 0x6e7150;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_1d4 = 0x6e715b;
        FUN_00878dfb();
      }
    }
    FUN_004497b5();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      iStack_1d4 = 0x6e7177;
      FUN_00434e38();
    }
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_006eabaf();
  }
  iStack_1d4 = 0x6e7b69;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x74));
  iStack_1d4 = unaff_EBP + -0x74;
  puStack_1d8 = (undefined1 *)0x6e7b73;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1d4 = 0x6e7b7f;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x8c) + 0xab4);
  *(undefined1 *)(unaff_EBP + -4) = 0x56;
  if (iVar3 == 0) {
    iStack_1d4 = 0x6e7ba2;
    FUN_00878dfb();
  }
  iStack_1d4 = unaff_EBP + -0x78;
  puStack_1d8 = (undefined1 *)0x6e7bb3;
  FUN_00425067();
  *(undefined1 *)(unaff_EBP + -4) = 0x58;
  iStack_1d4 = 0x6e7bc0;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_1d4 = 0x6e7bcb;
    FUN_00878dfb();
  }
  iStack_1d4 = 0x6e7bd4;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x88));
  iStack_1d4 = unaff_EBP + -0x88;
  puStack_1d8 = (undefined1 *)0x6e7be1;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_1d4 = 0x6e7bed;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x59;
  if (*(int *)(unaff_EBP + -0x78) == 0) {
    iStack_1d4 = 0x6e7c01;
    FUN_00878dfb();
  }
  piVar5 = *(int **)(unaff_EBP + -0x78);
  puStack_1e0 = *(undefined4 **)(unaff_EBP + -0x18);
  iStack_1dc = *(int *)(unaff_EBP + -0x88);
  puStack_1d8 = *(undefined1 **)(unaff_EBP + -0x84);
  pwStack_1e4 = (wchar_t *)0x0;
  iStack_1d4 = *(int *)(unaff_EBP + -0x80);
  puStack_1e8 = (undefined1 *)0x0;
  piStack_1f0 = (int *)0x6e7c23;
  piStack_1ec = piVar5;
  iVar3 = (**(code **)(*piVar5 + 0x80))();
  if (iVar3 < 0) {
    piStack_1f0 = (int *)&DAT_00963cc8;
    puStack_1fc = (undefined *)0x6e7c33;
    iStack_1f8 = iVar3;
    piStack_1f4 = piVar5;
    FUN_00878e09();
  }
  piStack_1f0 = (int *)(unaff_EBP + -0x88);
  *(undefined1 *)(unaff_EBP + -4) = 0x58;
  piStack_1f4 = (int *)0x6e7c43;
  piStack_1f0 = (int *)FUN_00402bc3();
  if ((int)piStack_1f0 < 0) {
    piStack_1f4 = (int *)0x6e7c4e;
    FUN_00878dfb();
  }
  piStack_1f0 = *(int **)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_1f0 != (int *)0x0) {
    piStack_1f4 = (int *)0x6e7c5f;
    (**(code **)(*piStack_1f0 + 8))();
  }
  piStack_1f0 = *(int **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_1f0 != (int *)0x0) {
    piStack_1f4 = (int *)0x6e7c70;
    (**(code **)(*piStack_1f0 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


