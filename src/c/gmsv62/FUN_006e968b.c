/* FUN_006e968b - 0x006e968b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006e968b(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *_Dst;
  int iVar5;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *puVar6;
  int unaff_EBP;
  int iVar7;
  undefined1 *puStack_114;
  undefined1 *puStack_110;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x24) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_006e44d8();
  if ((*(int *)(unaff_EBP + 0xc) == 0) || (*(int *)(*(int *)(extraout_ECX + 0xa74) + 0x34) == 9)) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_005e05bf();
  }
  else {
    uVar2 = FUN_007b3eda();
    *(undefined4 *)(extraout_ECX + 0xdbc) = uVar2;
    uVar2 = FUN_005d90ec();
    *(undefined4 *)(unaff_EBP + -0x54) = uVar2;
    FUN_006eaa91();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x54) != 0) {
      FUN_00414f8b();
    }
    *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_110 = (undefined1 *)0x6e9748;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      FUN_00434e38();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00403191();
    puStack_110 = (undefined1 *)(unaff_EBP + -0xa0);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_114 = (undefined1 *)0x6e979d;
    uVar2 = FUN_00449713();
    *(undefined1 ***)(unaff_EBP + -0x34) = &puStack_114;
    FUN_00448a17(uVar2);
    iVar3 = unaff_EBP + -0xf0;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00405a1d(iVar3);
    FUN_00402660();
    FUN_00404a02(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x70) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x50) = 0;
    if (((iVar3 != 0) && (iVar3 = FUN_00404b30(), iVar3 < 0)) && (iVar3 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    puStack_114 = &stack0xfffffef4;
    *(undefined1 **)(unaff_EBP + -0x34) = &stack0xfffffef4;
    puStack_110 = (undefined1 *)0x3b4;
    FUN_00679e4e();
    puStack_110 = (undefined1 *)(unaff_EBP + -0xd0);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_114 = (undefined1 *)0x6e9874;
    FUN_0040263d();
    puStack_114 = (undefined1 *)0x6e987b;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x74) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    if (((iVar3 != 0) && (iVar3 = FUN_00404b30(), iVar3 < 0)) && (iVar3 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    puStack_114 = &stack0xfffffef4;
    *(undefined1 **)(unaff_EBP + -0x34) = &stack0xfffffef4;
    puStack_110 = (undefined1 *)0x3b3;
    FUN_00679e4e();
    puStack_110 = (undefined1 *)(unaff_EBP + -0xb0);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_114 = (undefined1 *)0x6e98ed;
    FUN_0040263d();
    puStack_114 = (undefined1 *)0x6e98f4;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x7c) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
    if (((iVar3 != 0) && (iVar3 = FUN_00404b30(), iVar3 < 0)) && (iVar3 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x30) == 0) {
      puStack_110 = (undefined1 *)0x6e9d9e;
      FUN_006ea210();
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x30) == 0) {
          FUN_00878dfb();
        }
        uVar4 = FUN_0040cf4d();
        if (uVar4 <= *(uint *)(unaff_EBP + -0x20)) goto LAB_006e9c28;
        FUN_0087a1b0();
        FUN_00412335();
        *(undefined1 **)(unaff_EBP + -0x34) = &stack0xfffffefc;
        FUN_00402e8e();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        FUN_0040263d();
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        if (*(short *)(unaff_EBP + -0x68) == 0) goto LAB_006e9c0d;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        FUN_006eabc5();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        iVar3 = FUN_0041a485();
        if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        FUN_004027b3();
        if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0xc) == 0) break;
        puStack_110 = &stack0xfffffef8;
        *(undefined1 **)(unaff_EBP + -0x34) = &stack0xfffffef8;
        puStack_114 = (undefined1 *)0x6e9a19;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        puStack_110 = (undefined1 *)0x6e9a29;
        FUN_006ea9fd();
        puStack_110 = (undefined1 *)0x6e9a33;
        FUN_004115d9();
        puStack_110 = (undefined1 *)0x6e9a3a;
        FUN_00404e7f();
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        puStack_110 = (undefined1 *)0x6e9a4c;
        FUN_0040263d();
        puStack_110 = (undefined1 *)0x6e9a53;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        uVar2 = FUN_00412550();
        iVar3 = FUN_006ea9fd();
        *(undefined4 *)(iVar3 + 0x4c) = uVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        FUN_004027eb();
        puStack_110 = &stack0xfffffef8;
        *(undefined1 **)(unaff_EBP + -0x34) = &stack0xfffffef8;
        puStack_114 = (undefined1 *)0x6e9aab;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        puStack_110 = (undefined1 *)0x6e9abb;
        FUN_006ea9fd();
        puStack_110 = (undefined1 *)0x6e9ac5;
        FUN_004115d9();
        puStack_110 = (undefined1 *)0x6e9acc;
        FUN_00404e7f();
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        puStack_110 = (undefined1 *)0x6e9ade;
        FUN_0040263d();
        puStack_110 = (undefined1 *)0x6e9ae5;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        uVar2 = FUN_00412550();
        iVar3 = FUN_006ea9fd();
        *(undefined4 *)(iVar3 + 0x50) = uVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        FUN_004027eb();
        puStack_110 = &stack0xfffffef8;
        *(undefined1 **)(unaff_EBP + -0x34) = &stack0xfffffef8;
        puStack_114 = (undefined1 *)0x6e9b3d;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        puStack_110 = (undefined1 *)0x6e9b4d;
        FUN_006ea9fd();
        puStack_110 = (undefined1 *)0x6e9b57;
        FUN_004115d9();
        puStack_110 = (undefined1 *)0x6e9b5e;
        FUN_00404e7f();
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        puStack_110 = (undefined1 *)0x6e9b70;
        FUN_0040263d();
        puStack_110 = (undefined1 *)0x6e9b77;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        uVar2 = FUN_00412550();
        iVar3 = FUN_006ea9fd();
        *(undefined4 *)(iVar3 + 0x54) = uVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        FUN_004027eb();
        FUN_0041385f();
        FUN_00412d5b();
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        FUN_00412d94();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      FUN_00412d94();
LAB_006e9c0d:
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        FUN_00878dfb();
      }
    }
LAB_006e9c28:
    FUN_005e0121();
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    if (*(int *)(unaff_EBP + -0x40) != 0) {
      FUN_00414f8b();
      FUN_00414f8b();
      iVar3 = *(int *)(*(int *)(unaff_EBP + -0x40) + 0xc);
      iVar7 = 0;
      if ((iVar3 != 0) &&
         (iVar3 = *(int *)(iVar3 + -4), *(int *)(unaff_EBP + -0x28) = iVar3, 0 < iVar3)) {
        do {
          *(int *)(unaff_EBP + -0x18) = iVar7;
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          *(undefined4 *)(unaff_EBP + -0x2c) = 0;
          while (*(int *)(unaff_EBP + -0x18) < *(int *)(unaff_EBP + -0x28)) {
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
            FUN_006eac94();
            *(undefined1 *)(unaff_EBP + -4) = 0x26;
            FUN_00679d22();
            *(undefined1 *)(unaff_EBP + -4) = 0x27;
            puStack_110 = (undefined1 *)0x6e9ce1;
            FUN_00550c58();
            *(undefined1 *)(unaff_EBP + -4) = 0x28;
            FUN_00414f8b();
            *(undefined1 *)(unaff_EBP + -4) = 0x27;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0x26;
            FUN_00414ebb();
            FUN_00679d22();
            *(undefined1 *)(unaff_EBP + -4) = 0x29;
            puStack_110 = (undefined1 *)0x6e9d2f;
            FUN_00550c58();
            *(undefined1 *)(unaff_EBP + -4) = 0x2a;
            FUN_00414f8b();
            *(undefined1 *)(unaff_EBP + -4) = 0x29;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0x26;
            FUN_00414ebb();
            if (*(int *)(unaff_EBP + -0x2c) < 1) {
              iVar3 = *(int *)(unaff_EBP + -0x10);
LAB_006e9da6:
              *(undefined4 *)(iVar3 + 0xc) = 1;
            }
            else {
              iVar7 = FUN_0045ec92();
              iVar3 = *(int *)(unaff_EBP + -0x10);
              if (iVar7 == 0) goto LAB_006e9da6;
              *(undefined4 *)(iVar3 + 0xc) = 0;
            }
            if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0xc) == 0) {
              *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
            }
            else if (*(int *)(unaff_EBP + -0x2c) == 0x50) {
              *(undefined1 *)(unaff_EBP + -4) = 0x25;
              if (*(int *)(unaff_EBP + -0x10) != 0) {
                FUN_006eae99();
                *(undefined4 *)(unaff_EBP + -0x10) = 0;
              }
              break;
            }
            iVar3 = FUN_006eb703();
            FUN_006eacbc();
            FUN_006eacce();
            *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 8;
            *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(unaff_EBP + -0x10);
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
            if (*(int *)(unaff_EBP + -0x10) != 0) {
              FUN_006eae99();
              *(undefined4 *)(unaff_EBP + -0x10) = 0;
            }
            if (0x57 < *(int *)(unaff_EBP + -0x2c)) break;
          }
          FUN_006eb143();
          FUN_006eb657();
          iVar7 = *(int *)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          FUN_006eb6c7();
        } while (iVar7 < *(int *)(unaff_EBP + -0x28));
      }
      iVar3 = *(int *)(*(int *)(unaff_EBP + -0x40) + 0x10);
      iVar7 = 0;
      if ((iVar3 != 0) &&
         (iVar3 = *(int *)(iVar3 + -4), *(int *)(unaff_EBP + -0x28) = iVar3, 0 < iVar3)) {
        do {
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          do {
            if (*(int *)(unaff_EBP + -0x28) <= iVar7) break;
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
            FUN_006eab5f();
            *(undefined1 *)(unaff_EBP + -4) = 0x2c;
            FUN_0045e3a0();
            FUN_0045e2eb();
            FUN_00554ef3();
            *(undefined1 *)(unaff_EBP + -4) = 0x2d;
            FUN_004653ef();
            *(undefined1 *)(unaff_EBP + -4) = 0x2c;
            if (*(int *)(unaff_EBP + -0x34) != 0) {
              FUN_00449913();
              *(undefined4 *)(unaff_EBP + -0x34) = 0;
            }
            iVar3 = FUN_006eb48b();
            FUN_006eab87();
            FUN_006eab99();
            *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
            *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(unaff_EBP + -0x10);
            iVar7 = iVar7 + 1;
            *(undefined1 *)(unaff_EBP + -4) = 0x2b;
            if (*(int *)(unaff_EBP + -0x10) != 0) {
              FUN_006eae3c();
              *(undefined4 *)(unaff_EBP + -0x10) = 0;
            }
          } while (*(int *)(unaff_EBP + -0x1c) < 0x14);
          FUN_006eb20d();
          FUN_006eb3df();
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          FUN_006eb44f();
        } while (iVar7 < *(int *)(unaff_EBP + -0x28));
      }
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      *(undefined4 *)(unaff_EBP + -0x3c) = 0;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      _Dst = (undefined4 *)FUN_004029b9();
      if (_Dst == (undefined4 *)0x0) {
        _Dst = (undefined4 *)0x0;
        puVar6 = extraout_ECX_00;
      }
      else {
        *_Dst = &PTR_LAB_008e84a0;
        puStack_110 = (undefined1 *)0x6e9f98;
        _memset(_Dst,0,0xc);
        *_Dst = &PTR_FUN_008e8ea8;
        _Dst[4] = 0xdc;
        _Dst[3] = 0x1e;
        puVar6 = extraout_ECX_01;
      }
      *(undefined4 **)(unaff_EBP + -0x5c) = _Dst;
      if (_Dst != (undefined4 *)0x0) {
        InterlockedIncrement(_Dst + 1);
        puVar6 = extraout_ECX_02;
      }
      puStack_114 = (undefined1 *)(unaff_EBP + -0x3c);
      *(undefined1 ***)(unaff_EBP + -0x34) = &puStack_110;
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      puStack_110 = puVar6;
      FUN_00450368();
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      puStack_114 = (undefined1 *)0x6e9ff1;
      FUN_004503f5();
      puStack_114 = (undefined1 *)0x6e9ff8;
      FUN_007e3c88();
      uVar4 = 0;
      while ((iVar3 = *(int *)(unaff_EBP + -0x20), iVar3 != 0 && (uVar4 < *(uint *)(iVar3 + -4)))) {
        iVar5 = uVar4 * 0x3c;
        iVar7 = *(int *)(iVar5 + 0x1c + iVar3);
        *(uint *)(unaff_EBP + -0x1c) = uVar4;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x32;
        while (((iVar3 != 0 && (*(uint *)(unaff_EBP + -0x1c) < *(uint *)(iVar3 + -4))) &&
               ((*(int *)(iVar5 + iVar3 + 0x24) + *(int *)(iVar5 + iVar3 + 0x1c)) - iVar7 < 0xdc)))
        {
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
          FUN_006eac2e();
          *(undefined1 *)(unaff_EBP + -4) = 0x33;
          FUN_006ea199();
          piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x1c);
          *piVar1 = *piVar1 - iVar7;
          FUN_006eb5c7();
          FUN_006eabff();
          *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
          iVar5 = iVar5 + 0x3c;
          *(undefined1 *)(unaff_EBP + -4) = 0x32;
          if (*(int *)(unaff_EBP + -0x10) != 0) {
            FUN_006eae6a();
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
          }
          iVar3 = *(int *)(unaff_EBP + -0x20);
        }
        FUN_006eb079();
        FUN_006eb51b();
        uVar4 = *(uint *)(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        FUN_006eb58b();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      if (*(int *)(unaff_EBP + -0x5c) != 0) {
        FUN_004504e6();
        *(undefined4 *)(unaff_EBP + -0x5c) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      FUN_004505d7();
    }
    FUN_006e9599();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (*(int *)(unaff_EBP + -0x40) != 0) {
      FUN_005e067c();
      *(undefined4 *)(unaff_EBP + -0x40) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (*(int **)(unaff_EBP + -0x30) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x30) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (*(int **)(unaff_EBP + -0x48) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x48) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int **)(unaff_EBP + -0x50) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x50) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x54) != 0) {
      FUN_005dd104();
      *(undefined4 *)(unaff_EBP + -0x54) = 0;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      FUN_005e064d();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


