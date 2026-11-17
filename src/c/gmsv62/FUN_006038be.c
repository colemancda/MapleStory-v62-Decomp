/* FUN_006038be - 0x006038be in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006038be(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  size_t sVar7;
  int *extraout_ECX;
  int extraout_ECX_00;
  wchar_t *extraout_ECX_01;
  int extraout_ECX_02;
  undefined4 *extraout_ECX_03;
  undefined4 *extraout_ECX_04;
  int unaff_EBP;
  undefined1 auStack_17c [4];
  undefined4 uStack_178;
  int *piStack_174;
  int iStack_170;
  wchar_t *pwStack_16c;
  undefined4 *puStack_168;
  int iStack_164;
  undefined1 *puStack_160;
  int *piStack_15c;
  undefined4 *puStack_148;
  int iStack_144;
  undefined1 *puStack_140;
  int *piStack_13c;
  undefined *puStack_128;
  int iStack_124;
  int iStack_120;
  int *piStack_11c;
  undefined *puStack_f8;
  int *piStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  
  FUN_00879bb8();
  *(int **)(unaff_EBP + -0x2c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00429303();
  FUN_004f0de4();
  uStack_e0 = 0x603901;
  SystemTimeToFileTime((SYSTEMTIME *)(unaff_EBP + -0xd4),(LPFILETIME)(unaff_EBP + -0x94));
  uStack_e0 = 0x603910;
  FUN_004031b7();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX[0x13e];
  piStack_f4 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piStack_f4 == (int *)0x0) {
    FUN_00878dfb();
    piStack_f4 = *(int **)(unaff_EBP + 8);
  }
  iVar3 = *piStack_f4;
  uStack_e8 = *(undefined4 *)(unaff_EBP + -0x14);
  uStack_e4 = *(undefined4 *)(unaff_EBP + -0x3c);
  uStack_e0 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_ec = 0;
  uStack_f0 = 0;
  *(int **)(unaff_EBP + -0x18) = piStack_f4;
  puStack_f8 = (undefined *)0x603950;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_f8 = &DAT_00963cc8;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_f8 = (undefined *)(unaff_EBP + -0x3c);
  puStack_f8 = (undefined *)FUN_00402bc3();
  if ((int)puStack_f8 < 0) {
    FUN_00878dfb();
  }
  extraout_ECX[2] = *(int *)(*(int *)(extraout_ECX[3] + 0xf4) + 0x38);
  if ((*extraout_ECX == 0) || (*(int *)(*extraout_ECX + -4) == 0)) {
    puStack_f8 = (undefined *)0x0;
    *(undefined ***)(unaff_EBP + -0x10) = &puStack_f8;
    FUN_00414edd();
    FUN_00609b26();
    puStack_f8 = (undefined *)0x3;
    FUN_004031b7();
    piVar6 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (piVar6 == (int *)0x0) {
      puStack_f8 = (undefined *)0x80004003;
      FUN_00878dfb();
      piVar6 = *(int **)(unaff_EBP + 8);
    }
    iVar3 = *piVar6;
    *(int **)(unaff_EBP + -0x18) = piVar6;
    puStack_f8 = *(undefined **)(unaff_EBP + -0x30);
    iVar3 = (**(code **)(iVar3 + 0x80))();
    if (iVar3 < 0) {
      piStack_11c = *(int **)(unaff_EBP + -0x18);
      iStack_124 = 0x603a15;
      iStack_120 = iVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_11c = (int *)0x603a22;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_11c = (int *)0x603a2d;
      FUN_00878dfb();
    }
    piStack_11c = (int *)0x603a3b;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_11c = (int *)0x603a48;
    FUN_00403191();
    piStack_11c = (int *)0x0;
    iStack_120 = unaff_EBP + -0x5c;
    iStack_124 = unaff_EBP + -0x3c;
    *(undefined ***)(unaff_EBP + -0x10) = &puStack_128;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_120 = 0x603a8e;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x18) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar3 != 0) {
      piStack_11c = (int *)0x603aa4;
      iVar3 = FUN_0041a581();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        piStack_11c = (int *)0x603ab5;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    piStack_11c = (int *)0x603ac2;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_11c = (int *)0x603acd;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_11c = (int *)0x603ada;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_11c = (int *)0x603ae5;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_11c = (int *)0x603af2;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_11c = (int *)0x603afd;
      FUN_00878dfb();
    }
    piStack_11c = (int *)0xff;
    iStack_120 = 0x603b0c;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (*(int *)(unaff_EBP + 8) == 0) {
      piStack_11c = (int *)0x603b1f;
      FUN_00878dfb();
    }
    piVar6 = *(int **)(unaff_EBP + 8);
    puStack_128 = *(undefined **)(unaff_EBP + -0x14);
    iStack_124 = *(int *)(unaff_EBP + -0x70);
    iStack_120 = *(undefined4 *)(unaff_EBP + -0x6c);
    piStack_11c = *(int **)(unaff_EBP + -0x68);
    iVar3 = (**(code **)(*piVar6 + 0x80))();
    if (iVar3 < 0) {
      iStack_144 = 0x603b4e;
      puStack_140 = (undefined1 *)iVar3;
      piStack_13c = piVar6;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_13c = (int *)0x603b5b;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_13c = (int *)0x603b66;
      FUN_00878dfb();
    }
    FUN_004125e6();
    FUN_004125e6();
    goto LAB_006049f4;
  }
  puStack_f8 = (undefined *)0x3;
  FUN_004031b7();
  piVar6 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (piVar6 == (int *)0x0) {
    puStack_f8 = (undefined *)0x80004003;
    FUN_00878dfb();
    piVar6 = *(int **)(unaff_EBP + 8);
  }
  iVar3 = *piVar6;
  *(int **)(unaff_EBP + -0x14) = piVar6;
  puStack_f8 = *(undefined **)(unaff_EBP + -0x30);
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    piStack_11c = *(int **)(unaff_EBP + -0x14);
    iStack_124 = 0x603bda;
    iStack_120 = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_11c = (int *)0x603be7;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_11c = (int *)0x603bf2;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0xe5;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xe8;
  do {
    piStack_11c = (int *)(unaff_EBP + -0x24);
    iStack_120 = 0x603c14;
    FUN_007d4a9a();
    iVar3 = *(int *)(unaff_EBP + -0x2c);
    iVar1 = *(int *)(iVar3 + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (iVar1 + *(int *)(unaff_EBP + -0x20) == *(int *)(iVar3 + 4)) {
      piStack_11c = (int *)(unaff_EBP + -0x84);
      iStack_120 = 0x603c36;
      puVar4 = (undefined4 *)FUN_007d4a9a();
      piStack_11c = (int *)0x603c42;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x24),
                 (IBinding *)*puVar4);
      FUN_004497b5();
      if (*(int *)(unaff_EBP + 8) == 0) {
        piStack_11c = (int *)0x603c5d;
        FUN_00878dfb();
      }
      piVar6 = *(int **)(unaff_EBP + 8);
      piStack_11c = (int *)0x12;
      iStack_120 = 0xfe;
      iStack_124 = *(int *)(unaff_EBP + -0x14);
      puStack_128 = (undefined *)0x9;
      iStack_120 = (**(code **)(*piVar6 + 0x8c))();
      if (iStack_120 < 0) {
        iStack_124 = 0x603c8a;
        piStack_11c = piVar6;
        FUN_00878e09();
      }
    }
    piStack_11c = (int *)0xff;
    iStack_120 = 0x603c99;
    FUN_004031b7();
    *(undefined4 *)(unaff_EBP + -0x88) = *(undefined4 *)(iVar3 + 0x500);
    piVar6 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (piVar6 == (int *)0x0) {
      piStack_11c = (int *)0x603cba;
      FUN_00878dfb();
      piVar6 = *(int **)(unaff_EBP + 8);
    }
    iVar3 = *piVar6;
    puStack_128 = *(undefined **)(unaff_EBP + -0x88);
    iStack_124 = *(int *)(unaff_EBP + -0x3c);
    iStack_120 = *(int *)(unaff_EBP + -0x38);
    piStack_11c = *(int **)(unaff_EBP + -0x34);
    *(int **)(unaff_EBP + -0x60) = piVar6;
    iVar3 = (**(code **)(iVar3 + 0x80))();
    if (iVar3 < 0) {
      piStack_11c = *(int **)(unaff_EBP + -0x60);
      iStack_124 = 0x603cf2;
      iStack_120 = iVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    piStack_11c = (int *)0x603cff;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_11c = (int *)0x603d0a;
      FUN_00878dfb();
    }
    piVar6 = *(int **)(unaff_EBP + -0x2c);
    uVar5 = 0;
    if (*piVar6 != 0) {
      uVar5 = *(uint *)(*piVar6 + -4);
    }
    if ((uint)(piVar6[2] + *(int *)(unaff_EBP + -0x20)) < uVar5) {
      piStack_11c = (int *)0x603d30;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      piStack_11c = (int *)0x603d3d;
      FUN_00403191();
      piStack_11c = (int *)(unaff_EBP + -0x5c);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iStack_120 = 0x603d54;
      iStack_120 = FUN_00449749();
      iStack_124 = piVar6[2] + *(int *)(unaff_EBP + -0x20);
      puStack_128 = (undefined *)0x603d63;
      FUN_00609e70();
      iStack_124 = 0x603d6a;
      iVar3 = FUN_00609bbc();
      puStack_128 = (undefined *)(iVar3 + 4);
      *(int **)(unaff_EBP + -0x60) = &iStack_124;
      FUN_00448a17();
      puStack_128 = *(undefined **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_004115d9();
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      piStack_11c = (int *)0x603d9e;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_11c = (int *)0x603da9;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      piStack_11c = (int *)0x603db9;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_11c = (int *)0x603dc4;
        FUN_00878dfb();
      }
      if (*(int *)(*(int *)(*piVar6 + 4 + (piVar6[2] + *(int *)(unaff_EBP + -0x20)) * 8) + 0x1d) !=
          0) {
        piStack_11c = (int *)0x603de6;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        piStack_11c = (int *)0x603df6;
        FUN_00403191();
        piStack_11c = (int *)(unaff_EBP + -0xa4);
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        iStack_120 = 0x603e10;
        iStack_120 = FUN_00449749();
        *(int **)(unaff_EBP + -0x60) = &iStack_124;
        puStack_128 = &DAT_00967d94;
        FUN_00448a17();
        puStack_128 = *(undefined **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        FUN_004115d9();
        FUN_00448e3a();
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        piStack_11c = (int *)0x603e49;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_11c = (int *)0x603e54;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        piStack_11c = (int *)0x603e64;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_11c = (int *)0x603e6f;
          FUN_00878dfb();
        }
      }
      iVar3 = *(int *)(*piVar6 + 4 + (piVar6[2] + *(int *)(unaff_EBP + -0x20)) * 8);
      uVar5 = *(uint *)(iVar3 + 0x15);
      iStack_124 = uVar5 - *(uint *)(unaff_EBP + -0x94);
      iStack_120 = (*(int *)(iVar3 + 0x19) - *(int *)(unaff_EBP + -0x90)) -
                   (uint)(uVar5 < *(uint *)(unaff_EBP + -0x94));
      piStack_11c = (int *)0x2a69c000;
      puStack_128 = (undefined *)0x603e9e;
      iVar3 = __aulldiv();
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      if (iVar3 < 0x1e) {
        if (0 < iVar3) {
          piStack_11c = (int *)(unaff_EBP + -100);
          iStack_120 = 0x603f09;
          puVar4 = (undefined4 *)FUN_00679d22();
          piStack_11c = (int *)*puVar4;
          iStack_120 = unaff_EBP + -0x28;
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          iStack_124 = 0x603f1a;
          FUN_00434e21();
          iVar3 = *(int *)(unaff_EBP + -100);
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          goto LAB_00603eda;
        }
        piStack_11c = (int *)(unaff_EBP + -0x1c);
        iStack_120 = 0x603f39;
        FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        piStack_11c = (int *)0x603f46;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          piStack_11c = (int *)0x603f5a;
          FUN_00434e38();
        }
        piStack_11c = (int *)(unaff_EBP + -0x10);
        iStack_120 = 0x603f66;
        puVar4 = (undefined4 *)FUN_007d4a9a();
        piStack_11c = (int *)0x603f72;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x24),
                   (IBinding *)*puVar4);
        FUN_004497b5();
      }
      else {
        piStack_11c = (int *)(unaff_EBP + -0x8c);
        iStack_120 = 0x603ec3;
        FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        piStack_11c = (int *)0x603ed0;
        FUN_00414f8b();
        iVar3 = *(int *)(unaff_EBP + -0x8c);
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
LAB_00603eda:
        if (iVar3 != 0) {
          piStack_11c = (int *)0x603eeb;
          FUN_00434e38();
        }
      }
      piStack_11c = (int *)0x603f83;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      piStack_11c = (int *)0x603f90;
      FUN_00403191();
      piStack_11c = (int *)(unaff_EBP + -0x80);
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      iStack_120 = 0x603fa4;
      iStack_120 = FUN_00449749();
      iStack_124 = 0x603fad;
      puStack_128 = (undefined *)FUN_00449713();
      *(int **)(unaff_EBP + -0x60) = &iStack_124;
      iStack_124 = extraout_ECX_00;
      FUN_00448a17();
      puStack_128 = *(undefined **)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      FUN_004115d9();
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x19;
      piStack_11c = (int *)0x603fe1;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_11c = (int *)0x603fec;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      piStack_11c = (int *)0x603ff9;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_11c = (int *)0x604004;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        piStack_11c = (int *)0x604018;
        FUN_00434e38();
      }
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x12;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x12;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_004497b5();
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
  } while (*(int *)(unaff_EBP + -0x20) < 3);
  piStack_11c = (int *)0xff;
  iStack_120 = 0x604049;
  FUN_004031b7();
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(*(int *)(unaff_EBP + -0x2c) + 0x504);
  piVar6 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (piVar6 == (int *)0x0) {
    piStack_11c = (int *)0x60406a;
    FUN_00878dfb();
    piVar6 = *(int **)(unaff_EBP + 8);
  }
  iVar3 = *piVar6;
  puStack_128 = *(undefined **)(unaff_EBP + -0x10);
  iStack_124 = *(int *)(unaff_EBP + -0x4c);
  iStack_120 = *(undefined4 *)(unaff_EBP + -0x48);
  piStack_11c = *(int **)(unaff_EBP + -0x44);
  *(int **)(unaff_EBP + -0x1c) = piVar6;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    piStack_13c = *(int **)(unaff_EBP + -0x1c);
    iStack_144 = 0x60409f;
    puStack_140 = (undefined1 *)iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_13c = (int *)0x6040ac;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    piStack_13c = (int *)0x6040b7;
    FUN_00878dfb();
  }
  piVar6 = *(int **)(unaff_EBP + -0x2c);
  if (piVar6[1] < 0) {
LAB_00604856:
    piStack_13c = (int *)0x604862;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
    piStack_13c = (int *)(unaff_EBP + -0x5c);
    puStack_140 = (undefined1 *)0x60486c;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      piStack_13c = (int *)0x604878;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    piStack_13c = (int *)0x604882;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
    piStack_13c = (int *)(unaff_EBP + -0x3c);
    puStack_148 = &DAT_00980690;
    puStack_140 = (undefined1 *)0x60488c;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      piStack_13c = (int *)0x60489a;
      FUN_00878dfb();
      puStack_148 = extraout_ECX_04;
    }
    piStack_13c = (int *)0x0;
    puStack_140 = (undefined1 *)(unaff_EBP + -0x5c);
    iStack_144 = unaff_EBP + -0x3c;
    *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_148;
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    puStack_140 = (undefined1 *)0x6048de;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x10) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar3 != 0) {
      piStack_13c = (int *)0x6048f4;
      iVar3 = FUN_0041a581();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        piStack_13c = (int *)0x604905;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    piStack_13c = (int *)0x604912;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_13c = (int *)0x60491d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    piStack_13c = (int *)0x60492a;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_13c = (int *)0x604935;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    piStack_13c = (int *)0x604942;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_13c = (int *)0x60494d;
      FUN_00878dfb();
    }
    *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xfffffec8;
    piStack_13c = (int *)0xffffffff;
    puStack_140 = &DAT_00978474;
    iStack_144 = 0x604961;
    FUN_00414edd();
    piStack_13c = (int *)0x604969;
    FUN_00609b26();
    piStack_13c = (int *)0xff;
    puStack_140 = (undefined1 *)0x604978;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x46;
    if (*(int *)(unaff_EBP + 8) == 0) {
      piStack_13c = (int *)0x60498b;
      FUN_00878dfb();
    }
    piVar6 = *(int **)(unaff_EBP + 8);
    puStack_148 = *(undefined4 **)(unaff_EBP + -0x14);
    iStack_144 = *(undefined4 *)(unaff_EBP + -0x4c);
    puStack_140 = *(undefined1 **)(unaff_EBP + -0x48);
    piStack_13c = *(int **)(unaff_EBP + -0x44);
    iVar3 = (**(code **)(*piVar6 + 0x80))();
    if (iVar3 < 0) {
      iStack_164 = 0x6049ba;
      puStack_160 = (undefined1 *)iVar3;
      piStack_15c = piVar6;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    piStack_15c = (int *)0x6049c7;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_15c = (int *)0x6049d2;
      FUN_00878dfb();
    }
    piVar6 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    uVar5 = 0;
    if (*piVar6 != 0) {
      uVar5 = *(uint *)(*piVar6 + -4);
    }
    if (uVar5 <= (uint)piVar6[1]) goto LAB_00604856;
    piStack_13c = (int *)(unaff_EBP + -0x24);
    puStack_140 = (undefined1 *)0x6040e1;
    FUN_007d4a9a();
    uVar2 = *(undefined4 *)(*piVar6 + piVar6[1] * 8 + 4);
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    *(undefined4 *)(unaff_EBP + -100) = uVar2;
    FUN_00609c71();
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    piStack_13c = (int *)0x60410a;
    FUN_00403191();
    *(int *)(unaff_EBP + -0x10) = piVar6[0x142];
    piVar6 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x1f;
    if (piVar6 == (int *)0x0) {
      piStack_13c = (int *)0x604128;
      FUN_00878dfb();
      piVar6 = *(int **)(unaff_EBP + 8);
    }
    iVar3 = *piVar6;
    puStack_148 = *(undefined4 **)(unaff_EBP + -0x10);
    iStack_144 = *(undefined4 *)(unaff_EBP + -0x4c);
    puStack_140 = *(undefined1 **)(unaff_EBP + -0x48);
    piStack_13c = *(int **)(unaff_EBP + -0x44);
    *(int **)(unaff_EBP + -0x1c) = piVar6;
    iVar3 = (**(code **)(iVar3 + 0x80))();
    if (iVar3 < 0) {
      piStack_15c = *(int **)(unaff_EBP + -0x1c);
      iStack_164 = 0x60415f;
      puStack_160 = (undefined1 *)iVar3;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    piStack_15c = (int *)0x60416c;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_15c = (int *)0x604179;
      FUN_00878dfb();
    }
    piStack_15c = (int *)0x604182;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    piStack_15c = (int *)0x60418f;
    FUN_00403191();
    piStack_15c = (int *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    puStack_160 = (undefined1 *)0x6041a3;
    puStack_160 = (undefined1 *)FUN_00449749();
    iStack_164 = 0x6041ac;
    iVar3 = FUN_00609bbc();
    puStack_168 = (undefined4 *)(iVar3 + 4);
    *(int **)(unaff_EBP + -0x10) = &iStack_164;
    pwStack_16c = (wchar_t *)0x6041bb;
    FUN_00448a17();
    puStack_168 = (undefined4 *)0x167;
    pwStack_16c = (wchar_t *)0x7e;
    *(undefined1 *)(unaff_EBP + -4) = 0x21;
    iStack_170 = 0x6041ce;
    FUN_004115d9();
    iStack_170 = 0x6041d5;
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    piStack_15c = (int *)0x6041e2;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_15c = (int *)0x6041ed;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1e;
    piStack_15c = (int *)0x6041fa;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_15c = (int *)0x604205;
      FUN_00878dfb();
    }
    iVar3 = *(int *)(unaff_EBP + -100);
    if (*(int *)(iVar3 + 0x11) != 0) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      piStack_15c = *(int **)(iVar3 + 0x11);
      puStack_160 = (undefined1 *)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      iStack_164 = 0x604226;
      FUN_007d3546();
      piStack_15c = (int *)0x604232;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      piStack_15c = (int *)0x60423f;
      FUN_00403191();
      piStack_15c = (int *)(unaff_EBP + -0x4c);
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      puStack_160 = (undefined1 *)0x604253;
      puStack_160 = (undefined1 *)FUN_00449749();
      iStack_164 = 0x60425c;
      puStack_168 = (undefined4 *)FUN_00449713();
      *(int **)(unaff_EBP + -0x10) = &iStack_164;
      pwStack_16c = (wchar_t *)0x604268;
      FUN_00448a17();
      puStack_168 = (undefined4 *)0x17a;
      pwStack_16c = (wchar_t *)0x7e;
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      iStack_170 = 0x60427b;
      FUN_004115d9();
      iStack_170 = 0x604282;
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      piStack_15c = (int *)0x60428f;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_15c = (int *)0x60429a;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      piStack_15c = (int *)0x6042a7;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_15c = (int *)0x6042b2;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      FUN_00414ebb();
      iVar3 = *(int *)(unaff_EBP + -100);
    }
    if (*(int *)(iVar3 + 0xee) != 0) {
      uStack_178 = FUN_0045e2eb();
      piStack_15c = (int *)0x0;
      puStack_160 = (undefined1 *)0x0;
      iStack_164 = 0;
      puStack_168 = (undefined4 *)0x0;
      pwStack_16c = (wchar_t *)0x0;
      iStack_170 = 0x1b8;
      piStack_174 = (int *)0x2b;
      *(undefined4 *)(unaff_EBP + -0x20) = uStack_178;
      *(undefined1 **)(unaff_EBP + -0x10) = auStack_17c;
      FUN_0046fc23(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      FUN_0048b97b();
      FUN_005558b0();
      piVar6 = (int *)FUN_0045e2eb();
      piStack_15c = (int *)0x60432a;
      iVar3 = FUN_00537942();
      piStack_15c = piVar6;
      if (iVar3 == 0) {
        puStack_160 = (undefined1 *)(*(int *)(unaff_EBP + -0x2c) + 0x510);
        *(int ***)(unaff_EBP + -0x10) = &piStack_15c;
        iStack_164 = 0x604344;
        FUN_00424dbc();
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        puStack_160 = (undefined1 *)0x604350;
        FUN_00609bbc();
        puStack_160 = (undefined1 *)0x60435d;
        piVar6 = (int *)FUN_0053793e();
        puStack_160 = (undefined1 *)0x604364;
        puStack_160 = (undefined1 *)(**(code **)(*piVar6 + 0x18))();
        iStack_164 = 0x1ac;
        puStack_168 = (undefined4 *)0x2b;
        iStack_170 = unaff_EBP + 8;
        *(wchar_t ***)(unaff_EBP + -0x10) = &pwStack_16c;
        piStack_174 = (int *)0x60437b;
        pwStack_16c = extraout_ECX_01;
        FUN_0046fc23();
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        iStack_170 = 0x604384;
        FUN_007d3201();
      }
      piStack_15c = (int *)(unaff_EBP + -0x14);
      puStack_160 = (undefined1 *)0x604392;
      FUN_007d4a9a();
      piStack_15c = (int *)(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      puStack_160 = (undefined1 *)0x6043aa;
      FUN_0045a1d8();
      puStack_160 = (undefined1 *)(unaff_EBP + -0x14);
      *(int ***)(unaff_EBP + -0x10) = &piStack_15c;
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      iStack_164 = 0x6043c2;
      FUN_0046fcc9();
      puStack_160 = (undefined1 *)(unaff_EBP + -0x28);
      iStack_164 = 0x6043cb;
      FUN_007d3a22();
      piStack_15c = (int *)0x6043d4;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
      piStack_15c = (int *)(unaff_EBP + -0x3c);
      puStack_160 = (undefined1 *)0x6043de;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_15c = (int *)0x6043ea;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      piStack_15c = (int *)0x6043f4;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
      piStack_15c = (int *)(unaff_EBP + -0x5c);
      puStack_160 = (undefined1 *)0x6043fe;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_15c = (int *)0x60440a;
        FUN_00878dfb();
      }
      piStack_15c = (int *)(unaff_EBP + -0x5c);
      iStack_164 = unaff_EBP + -0x10;
      puStack_160 = (undefined1 *)0x1;
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      puStack_168 = (undefined4 *)0x604421;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      puStack_160 = (undefined1 *)0x60442e;
      puStack_160 = (undefined1 *)FUN_00449749();
      iStack_164 = 0x604437;
      puStack_168 = (undefined4 *)FUN_00449713();
      *(int **)(unaff_EBP + -0x1c) = &iStack_164;
      pwStack_16c = 
      L"饨\x01樀赾ࡍ䗆ⷼ菨\xe0d1诿\xe8c8䧝￤䖋㯰웇ﱅ琬謆倈凿贈ꑅ왐ﱅ\xe82b\xe748￟윻絙倆痨❉贀쑅왐ﱅ\xe82a\xe730￟윻絙倆巨❉褀\xe87d䖍櫰倆䗆⿼\xeae8ᴅ夀ｙ贰\xec4d컨\xe452诿\xf045윻ٴࢋｐࡑ痿诠鐍霺\xe800࣠\xfff5윻䖉瓰样໦"
      ;
      iStack_164 = extraout_ECX_02;
      FUN_00448a17();
      puStack_168 = (undefined4 *)0x199;
      pwStack_16c = (wchar_t *)0x7e;
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iStack_170 = 0x604456;
      FUN_004115d9();
      iStack_170 = 0x60445d;
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        piStack_15c = (int *)0x60446e;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      piStack_15c = (int *)0x60447b;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_15c = (int *)0x604486;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      piStack_15c = (int *)0x604493;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_15c = (int *)0x60449e;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      piStack_15c = (int *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      puStack_160 = (undefined1 *)0x6044b0;
      puVar4 = (undefined4 *)FUN_007d4a9a();
      piStack_15c = (int *)0x6044bc;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
                 (IBinding *)*puVar4);
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        piStack_15c = (int *)0x6044c9;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      piStack_15c = (int *)0x6044d7;
      iVar3 = FUN_00554db7();
      *(int *)(unaff_EBP + -0x10) = iVar3;
      if (iVar3 == 0) {
        piStack_15c = (int *)(unaff_EBP + -0x10);
        puStack_160 = (undefined1 *)0x604528;
        FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        piStack_15c = (int *)0x604535;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        FUN_00414ebb();
        piStack_15c = (int *)(unaff_EBP + -0x10);
        puStack_160 = (undefined1 *)0x60454c;
        puVar4 = (undefined4 *)FUN_007d4a9a();
        piStack_15c = (int *)0x604558;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
                   (IBinding *)*puVar4);
        if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
          piStack_15c = (int *)0x604565;
          (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
        }
      }
      else {
        piStack_15c = (int *)(unaff_EBP + -0x1c);
        puStack_160 = (undefined1 *)0x6044f1;
        puVar4 = (undefined4 *)FUN_00679d22();
        piStack_15c = (int *)*puVar4;
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        puStack_160 = (undefined1 *)(unaff_EBP + -0x18);
        iStack_164 = 0x604504;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        FUN_00414ebb();
      }
      piStack_15c = (int *)0x60456b;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
      piStack_15c = (int *)(unaff_EBP + -0x5c);
      puStack_160 = (undefined1 *)0x604575;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_15c = (int *)0x604581;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      piStack_15c = (int *)0x60458b;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
      piStack_15c = (int *)(unaff_EBP + -0x3c);
      puStack_160 = (undefined1 *)0x604595;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_15c = (int *)0x6045a1;
        FUN_00878dfb();
      }
      piStack_15c = (int *)(unaff_EBP + -0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      puStack_160 = (undefined1 *)0x6045b5;
      puStack_160 = (undefined1 *)FUN_00449749();
      iStack_164 = 0x6045be;
      puStack_168 = (undefined4 *)FUN_00449713();
      *(int **)(unaff_EBP + -0x10) = &iStack_164;
      pwStack_16c = (wchar_t *)0x6045ca;
      FUN_00448a17();
      puStack_168 = (undefined4 *)0x1ac;
      pwStack_16c = (wchar_t *)0x7e;
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      iStack_170 = 0x6045dd;
      FUN_004115d9();
      iStack_170 = 0x6045e4;
      FUN_00448e3a();
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      piStack_15c = (int *)0x6045f1;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_15c = (int *)0x6045fc;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      piStack_15c = (int *)0x604609;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_15c = (int *)0x604614;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        piStack_15c = (int *)0x60463d;
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      iVar3 = *(int *)(unaff_EBP + -100);
    }
    if (*(int *)(iVar3 + 0x1d) == 0) {
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffea8;
      piStack_15c = (int *)0xffffffff;
      puStack_160 = &DAT_00978474;
      iStack_164 = 0x6046bd;
      FUN_00414edd();
      piStack_15c = (int *)0x6046c8;
      FUN_00609b26();
      piStack_15c = (int *)0x6046ce;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
      piStack_15c = (int *)(unaff_EBP + -0x5c);
      puStack_160 = (undefined1 *)0x6046d8;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_15c = (int *)0x6046e4;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x35;
      piStack_15c = (int *)0x6046ee;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
      piStack_15c = (int *)(unaff_EBP + -0x3c);
      puVar4 = &DAT_00980690;
      puStack_160 = (undefined1 *)0x6046f8;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        piStack_15c = (int *)0x604704;
        FUN_00878dfb();
        puVar4 = extraout_ECX_03;
      }
      piStack_15c = (int *)0x0;
      puStack_160 = (undefined1 *)(unaff_EBP + -0x5c);
      iStack_164 = unaff_EBP + -0x3c;
      *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_168;
      pwStack_16c = u_UI_UIWindow_img_Delivery_say1_00967d9c;
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      iStack_170 = 0x604722;
      puStack_168 = puVar4;
      FUN_004033a1();
      pwStack_16c = (wchar_t *)(unaff_EBP + -0x80);
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      iStack_170 = 0x60472f;
      FUN_00405a1d();
      iStack_170 = 0x604736;
      FUN_00402660();
      iStack_170 = 0x60473d;
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      puStack_160 = (undefined1 *)0x604748;
      iVar3 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x10) = iVar3;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (iVar3 != 0) {
        piStack_15c = (int *)0x60475e;
        iVar3 = FUN_0041a581();
        if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
          piStack_15c = (int *)0x60476f;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3c;
      piStack_15c = (int *)0x60477c;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_15c = (int *)0x604787;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      piStack_15c = (int *)0x604794;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_15c = (int *)0x60479f;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      piStack_15c = (int *)0x6047ac;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_15c = (int *)0x6047b7;
        FUN_00878dfb();
      }
      piStack_15c = (int *)0xff;
      puStack_160 = (undefined1 *)0x6047c6;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      if (*(int *)(unaff_EBP + 8) == 0) {
        piStack_15c = (int *)0x6047d9;
        FUN_00878dfb();
      }
      piVar6 = *(int **)(unaff_EBP + 8);
      puStack_168 = *(undefined4 **)(unaff_EBP + -0x14);
      iStack_164 = *(int *)(unaff_EBP + -0x4c);
      puStack_160 = *(undefined1 **)(unaff_EBP + -0x48);
      pwStack_16c = (wchar_t *)0x72;
      piStack_15c = *(int **)(unaff_EBP + -0x44);
      iStack_170 = 0x5f;
      uStack_178 = 0x6047f8;
      piStack_174 = piVar6;
      iVar3 = (**(code **)(*piVar6 + 0x80))();
      if (iVar3 < 0) {
        iStack_164 = 0x604808;
        puStack_160 = (undefined1 *)iVar3;
        piStack_15c = piVar6;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      piStack_15c = (int *)0x604815;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        piStack_15c = (int *)0x604820;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        piStack_15c = (int *)0x604831;
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
    }
    else {
      piStack_15c = (int *)0x60464e;
      sVar7 = _strlen((char *)(iVar3 + 0x21));
      if (sVar7 == 0) {
        piStack_15c = (int *)(unaff_EBP + -0x10);
        puStack_160 = (undefined1 *)0x604666;
        FUN_00679d22();
        piStack_15c = (int *)(*(int *)(unaff_EBP + -100) + 0x21);
        puStack_160 = (undefined1 *)0x604674;
        FUN_0087b200();
        FUN_00414ebb();
      }
      iVar3 = FUN_00609bbc();
      *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffea8;
      puStack_160 = (undefined1 *)(iVar3 + 0x21);
      piStack_15c = (int *)0xffffffff;
      iStack_164 = 0x604699;
      FUN_00414edd();
      piStack_15c = (int *)0x6046a4;
      FUN_00609b26();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1d;
    if (*(int *)(unaff_EBP + -100) != 0) {
      piStack_15c = (int *)0x604845;
      FUN_00609cba();
      *(undefined4 *)(unaff_EBP + -100) = 0;
    }
    piVar6 = *(int **)(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  if (piVar6 != (int *)0x0) {
    piStack_15c = (int *)0x6049e3;
    (**(code **)(*piVar6 + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    piStack_15c = (int *)0x6049f4;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
LAB_006049f4:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


