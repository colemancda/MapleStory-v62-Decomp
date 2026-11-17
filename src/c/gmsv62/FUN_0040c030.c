/* FUN_0040c030 - 0x0040c030 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0040c030(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  uint uVar8;
  int unaff_EBP;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iStack_ec;
  int *piStack_e8;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x2c) = **(undefined4 **)(unaff_EBP + 8);
  }
  uVar8 = *(uint *)(unaff_EBP + 0xc);
  if (8 < (int)uVar8) {
    piStack_e8 = (int *)(unaff_EBP + -0xa0);
    iStack_ec = 0x40c07f;
    FUN_0061d126();
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
  }
  piStack_e8 = (int *)0x40c08f;
  FUN_0040810c();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
    FUN_00402fa6();
  }
  *(uint *)(unaff_EBP + -0x68) = *(int *)(unaff_EBP + -0x2c) << 8 | uVar8;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  piStack_e8 = (int *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(int *)(unaff_EBP + -0x34) = extraout_ECX + 0x1d4;
  iStack_ec = 0x40c0cb;
  iVar2 = FUN_00415dee();
  if (iVar2 == 0) {
    piStack_e8 = (int *)0x40c0ec;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + 0xc) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar2 != 0) {
      FUN_0040cf74();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_e8 = (int *)0x40c10f;
    FUN_00411ac4();
    *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0xc) = *(undefined4 *)(unaff_EBP + -0x2c);
    piStack_e8 = (int *)(unaff_EBP + -0x5c);
    *(uint *)(*(int *)(unaff_EBP + -0x1c) + 0x10) = uVar8;
    iStack_ec = 0x40c12a;
    FUN_0040d076();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int *)(unaff_EBP + -0x58) != 0) {
      piStack_e8 = (int *)0x0;
      *(int **)(unaff_EBP + 0xc) = &iStack_ec;
      FUN_004059fd(unaff_EBP + -0x38);
      iVar2 = unaff_EBP + -0xe0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00411a57(iVar2);
      FUN_0040263d();
      FUN_004048a4(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_ec = 0x40c184;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x48) = iVar2;
      *(undefined4 *)(unaff_EBP + 8) = 0;
      if (iVar2 != 0) {
        piStack_e8 = (int *)0x40c19a;
        iVar2 = FUN_00404b30();
        if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
          piStack_e8 = (int *)0x40c1ab;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_e8 = (int *)0x40c1bb;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_e8 = (int *)0x40c1c6;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 8) != 0) {
        piStack_e8 = (int *)0x40c1e2;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (*(int *)(unaff_EBP + 8) == 0) {
          piStack_e8 = (int *)0x40c1f5;
          FUN_00878dfb();
        }
        piStack_e8 = (int *)0x40c201;
        FUN_00404960();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        piStack_e8 = (int *)0x40c20e;
        FUN_004035f5();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_004027b3();
        *(undefined4 *)(unaff_EBP + -0x98) = 0;
        while( true ) {
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            piStack_e8 = (int *)0x40c234;
            FUN_00878dfb();
          }
          piStack_e8 = (int *)(unaff_EBP + -0x78);
          iStack_ec = 1;
          iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x14) + 0xc))(*(int **)(unaff_EBP + -0x14));
          if (iVar2 != 0) break;
          piStack_e8 = (int *)(unaff_EBP + -0x3c);
          iStack_ec = 0x40c25f;
          FUN_00405a23();
          piStack_e8 = (int *)(unaff_EBP + -0x3c);
          *(undefined1 **)(unaff_EBP + -0x28) = &stack0xffffff1c;
          iStack_ec = 0x40c270;
          FUN_0040810c();
          piStack_e8 = (int *)(unaff_EBP + -0x88);
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          iStack_ec = 0x40c283;
          FUN_0040263d();
          iStack_ec = 0x40c28a;
          FUN_004048a4();
          piStack_e8 = (int *)(unaff_EBP + -0x9c);
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          iStack_ec = 0x40c2a1;
          FUN_00412348();
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          piStack_e8 = (int *)0x40c2b0;
          FUN_004172b7();
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          FUN_004027b3();
          if (*(int *)(unaff_EBP + -0x24) != 0) {
            piStack_e8 = (int *)0x40c2d3;
            FUN_00404e7f();
            piStack_e8 = (int *)0x0;
            *(int **)(unaff_EBP + -0x28) = &iStack_ec;
            *(undefined1 *)(unaff_EBP + -4) = 0x12;
            FUN_00679e4e(&iStack_ec,0x3ba);
            iVar2 = unaff_EBP + -0xd0;
            *(undefined1 *)(unaff_EBP + -4) = 0x12;
            FUN_0040263d(iVar2);
            FUN_004048a4(iVar2);
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            iStack_ec = 0x40c311;
            iVar2 = FUN_004032b4();
            *(int *)(unaff_EBP + -0x8c) = iVar2;
            *(undefined4 *)(unaff_EBP + -0x18) = 0;
            if (iVar2 != 0) {
              piStack_e8 = (int *)0x40c32d;
              iVar2 = FUN_0041a4e5();
              if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
                piStack_e8 = (int *)0x40c33e;
                FUN_00878dfb();
              }
            }
            iVar2 = unaff_EBP + -0xd0;
            *(undefined1 *)(unaff_EBP + -4) = 0x16;
            piStack_e8 = (int *)0x40c34e;
            iVar5 = FUN_00402bc3();
            if (iVar5 < 0) {
              piStack_e8 = (int *)0x40c359;
              FUN_00878dfb();
              iVar2 = extraout_ECX_00;
            }
            piStack_e8 = (int *)0x0;
            *(int **)(unaff_EBP + -0x28) = &iStack_ec;
            iStack_ec = iVar2;
            FUN_00679e4e(&iStack_ec,0x3bb);
            iVar2 = unaff_EBP + -0xc0;
            *(undefined1 *)(unaff_EBP + -4) = 0x16;
            FUN_0040263d(iVar2);
            FUN_004048a4(iVar2);
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            iStack_ec = 0x40c393;
            iVar2 = FUN_004032b4();
            *(int *)(unaff_EBP + -0x90) = iVar2;
            *(undefined4 *)(unaff_EBP + 0xc) = 0;
            if (iVar2 != 0) {
              piStack_e8 = (int *)0x40c3af;
              iVar2 = FUN_0041a4e5();
              if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
                piStack_e8 = (int *)0x40c3c0;
                FUN_00878dfb();
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x1a;
            piStack_e8 = (int *)0x40c3d0;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_e8 = (int *)0x40c3db;
              FUN_00878dfb();
            }
            piStack_e8 = (int *)0x40c3e7;
            iVar2 = FUN_004029b9();
            *(int *)(unaff_EBP + -0x28) = iVar2;
            *(undefined1 *)(unaff_EBP + -4) = 0x1b;
            if (iVar2 == 0) {
              iVar2 = 0;
            }
            else {
              iVar2 = FUN_0040cfa7();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x1a;
            piStack_e8 = (int *)0x40c40e;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar2 + 0xc),
                       *(IBinding **)(unaff_EBP + -0x24));
            *(int ***)(unaff_EBP + -0x28) = &piStack_e8;
            iStack_ec = 0x474;
            FUN_00679e4e(&piStack_e8);
            iStack_ec = unaff_EBP + -0x94;
            *(undefined1 *)(unaff_EBP + -4) = 0x1c;
            FUN_004115d9();
            FUN_00404e7f();
            iStack_ec = unaff_EBP + -0xb0;
            *(undefined1 *)(unaff_EBP + -4) = 0x1e;
            FUN_0040263d();
            piStack_e8 = (int *)FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x1f;
            iStack_ec = 0x40c463;
            uVar3 = FUN_00412550();
            *(undefined4 *)(iVar2 + 0x40) = uVar3;
            iStack_ec = unaff_EBP + -0xb0;
            *(undefined1 *)(unaff_EBP + -4) = 0x1e;
            iVar5 = FUN_00402bc3();
            if (iVar5 < 0) {
              piStack_e8 = (int *)0x40c483;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x1a;
            FUN_004027eb();
            piStack_e8 = (int *)0x40c49b;
            cVar1 = FUN_004115ad();
            if (cVar1 == '\0') {
              piStack_e8 = (int *)0x40c4ac;
              cVar1 = FUN_004115ad();
              if (cVar1 != '\0') goto LAB_0040c525;
              if (*(int *)(unaff_EBP + 0xc) == 0) {
                piStack_e8 = (int *)0x40c4c0;
                FUN_00878dfb();
                if (*(int *)(unaff_EBP + 0xc) == 0) {
                  piStack_e8 = (int *)0x40c4cb;
                  FUN_00878dfb();
                }
              }
              *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + 0xc);
              if (*(int *)(unaff_EBP + -0x18) == 0) {
                piStack_e8 = (int *)0x40c4dc;
                FUN_00878dfb();
              }
              *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x18);
              if (*(int *)(unaff_EBP + -0x18) == 0) {
                piStack_e8 = (int *)0x40c4ec;
                FUN_00878dfb();
              }
              FUN_00404abb();
              piStack_e8 = (int *)0x40c500;
              piStack_e8 = (int *)FUN_00404a94();
              iStack_ec = 0x40c509;
              iStack_ec = FUN_00404abb();
              uVar3 = FUN_00404a94();
              FUN_004114f3(iVar2 + 0x10,uVar3);
            }
            else {
LAB_0040c525:
              piStack_e8 = (int *)0x0;
              iStack_ec = 0;
              FUN_004114f3(iVar2 + 0x10,0);
            }
            *(int *)(unaff_EBP + -0x50) = iVar2;
            FUN_00412e1c();
            *(undefined1 *)(unaff_EBP + -4) = 0x20;
            FUN_0041394f();
            piStack_e8 = (int *)0x40c55a;
            FUN_00412de3();
            *(undefined1 *)(unaff_EBP + -4) = 0x1a;
            FUN_00412e2e();
            FUN_004125d9();
            FUN_004125d9();
            FUN_004027eb();
          }
          FUN_004125e6();
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          piStack_e8 = (int *)0x40c596;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_e8 = (int *)0x40c5a1;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          FUN_00402fa6();
        }
        *(int ***)(unaff_EBP + 0xc) = &piStack_e8;
        iStack_ec = 0x47d;
        FUN_00679e4e(&piStack_e8);
        iStack_ec = unaff_EBP + -0xb0;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_0040263d();
        piStack_e8 = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        iStack_ec = 0x40c5ea;
        iVar2 = FUN_00412550();
        iStack_ec = unaff_EBP + -0xb0;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_e8 = (int *)0x40c60f;
          FUN_00878dfb();
        }
        iVar5 = *(int *)(unaff_EBP + -0x1c);
        if ((iVar2 != 0) != 0) {
          uVar8 = *(uint *)(iVar5 + 0x28);
          while (uVar8 != 0) {
            if ((uVar8 != *(uint *)(iVar5 + 0x24)) && (uVar8 != *(uint *)(iVar5 + 0x28))) {
              FUN_0041394f();
              piStack_e8 = (int *)0x40c637;
              FUN_00412de3();
              iVar5 = *(int *)(unaff_EBP + -0x1c);
            }
            iVar6 = *(int *)((-(uint)(uVar8 != 0) & uVar8 - 0x10) + 8);
            uVar8 = -(uint)(iVar6 != 0) & iVar6 + 0x10U;
          }
        }
        *(uint *)(iVar5 + 0x14) = (uint)(iVar2 != 0);
        uVar3 = FUN_00415c64();
        piStack_e8 = (int *)0x40c675;
        FUN_00412b4b();
        *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x34) = uVar3;
        iVar2 = *(int *)(unaff_EBP + -0x1c);
        piStack_e8 = (int *)(unaff_EBP + -0x68);
        iStack_ec = 0x40c68e;
        uVar3 = FUN_00415e42();
        *(undefined4 *)(iVar2 + 0x30) = uVar3;
        iVar2 = *(int *)(unaff_EBP + -0x1c);
        uVar3 = (*DAT_0097b704)();
        *(undefined4 *)(iVar2 + 0x2c) = uVar3;
        FUN_004027f8();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        piStack_e8 = (int *)0x40c6b2;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_e8 = (int *)0x40c6bd;
          FUN_00878dfb();
        }
        FUN_004027eb();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00412b35();
        goto LAB_0040c6d1;
      }
      FUN_004027eb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00412b35();
  }
  else {
    iVar2 = *(int *)(unaff_EBP + -0x1c);
    uVar3 = (*DAT_0097b704)();
    *(undefined4 *)(iVar2 + 0x2c) = uVar3;
LAB_0040c6d1:
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x23;
    if (*(int *)(unaff_EBP + 0x10) != 0) {
      piStack_e8 = (int *)(unaff_EBP + 8);
      iStack_ec = 0x40c6ed;
      FUN_0054e2c6();
      psVar4 = *(short **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      if ((psVar4 == (short *)0x0) || (*psVar4 == 0)) {
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
      }
      else {
        piStack_e8 = (int *)0x40c718;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        piStack_e8 = (int *)0x40c725;
        FUN_00403191();
        piStack_e8 = (int *)(unaff_EBP + -0x78);
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        iStack_ec = 0x40c73c;
        uVar3 = FUN_00411641();
        *(int **)(unaff_EBP + -0x34) = &iStack_ec;
        FUN_004033a1(uVar3);
        iVar2 = unaff_EBP + -0xb0;
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        FUN_00405a1d(iVar2);
        FUN_00402660();
        FUN_00404a02(iVar2);
        piStack_e8 = (int *)(unaff_EBP + 0xc);
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        iStack_ec = 0x40c774;
        FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        piStack_e8 = (int *)0x40c783;
        FUN_00417232();
        FUN_004027b3();
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        piStack_e8 = (int *)0x40c79b;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_e8 = (int *)0x40c7a6;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        piStack_e8 = (int *)0x40c7b3;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_e8 = (int *)0x40c7be;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        piStack_e8 = (int *)0x40c7ce;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_e8 = (int *)0x40c7d9;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + 0x10) != 0) {
          FUN_0087a1b0();
          piStack_e8 = *(int **)(unaff_EBP + -0x2c);
          iStack_ec = 0x40c7f5;
          piStack_e8 = (int *)FUN_00412335();
          *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff1c;
          iStack_ec = 0x40c803;
          FUN_00402e8e();
          piStack_e8 = (int *)(unaff_EBP + -0xc0);
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          iStack_ec = 0x40c816;
          FUN_0040263d();
          iStack_ec = 0x40c81d;
          FUN_004048a4();
          piStack_e8 = (int *)(unaff_EBP + -0x34);
          *(undefined1 *)(unaff_EBP + -4) = 0x30;
          iStack_ec = 0x40c82b;
          FUN_00412348();
          *(undefined1 *)(unaff_EBP + -4) = 0x31;
          piStack_e8 = (int *)0x40c83a;
          iVar2 = FUN_0041a425();
          if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
            piStack_e8 = (int *)0x40c84b;
            FUN_00878dfb();
          }
          FUN_004027b3();
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          piStack_e8 = (int *)0x40c863;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_e8 = (int *)0x40c86e;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + 0x10) != 0) {
            piStack_e8 = (int *)(unaff_EBP + -0x38);
            *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff1c;
            iStack_ec = 0x40c882;
            FUN_0040810c();
            piStack_e8 = (int *)(unaff_EBP + -0xc0);
            *(undefined1 *)(unaff_EBP + -4) = 0x2b;
            iStack_ec = 0x40c895;
            FUN_0040263d();
            iStack_ec = 0x40c89c;
            FUN_004048a4();
            piStack_e8 = (int *)(unaff_EBP + -0x34);
            *(undefined1 *)(unaff_EBP + -4) = 0x33;
            iStack_ec = 0x40c8aa;
            FUN_00412348();
            *(undefined1 *)(unaff_EBP + -4) = 0x34;
            piStack_e8 = (int *)0x40c8b9;
            iVar2 = FUN_0041a425();
            if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
              piStack_e8 = (int *)0x40c8ca;
              FUN_00878dfb();
            }
            FUN_004027b3();
            *(undefined1 *)(unaff_EBP + -4) = 0x2b;
            piStack_e8 = (int *)0x40c8e2;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_e8 = (int *)0x40c8ed;
              FUN_00878dfb();
            }
          }
        }
        FUN_004027eb();
        psVar4 = *(short **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
      }
      if (psVar4 != (short *)0x0) {
        piStack_e8 = (int *)0x40c909;
        FUN_00403384();
      }
      if (*(int *)(unaff_EBP + -0x40) != 0) {
        iVar2 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x24);
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        *(undefined4 *)(unaff_EBP + -0x48) = 1;
        *(int *)(unaff_EBP + -0x30) = iVar2;
        while (iVar2 != 0) {
          iVar2 = *(int *)(unaff_EBP + -0x30);
          iVar5 = *(int *)((-(uint)(iVar2 != 0) & iVar2 - 0x10U) + 4);
          iVar2 = *(int *)(iVar2 + 4);
          *(int *)(unaff_EBP + -0x44) = iVar2;
          uVar3 = *(undefined4 *)(iVar2 + 0xc);
          *(uint *)(unaff_EBP + -0x30) = -(uint)(iVar5 != 0) & iVar5 + 0x10U;
          *(undefined4 *)(unaff_EBP + 8) = uVar3;
          FUN_004125f3();
          *(undefined1 *)(unaff_EBP + -4) = 0x35;
          FUN_0087a1b0();
          piStack_e8 = *(int **)(unaff_EBP + -0x2c);
          iStack_ec = 0x40c97a;
          piStack_e8 = (int *)FUN_00412335();
          *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff1c;
          iStack_ec = 0x40c988;
          FUN_00402e8e();
          piStack_e8 = (int *)(unaff_EBP + -100);
          *(undefined1 *)(unaff_EBP + -4) = 0x35;
          iStack_ec = 0x40c998;
          FUN_0040263d();
          iStack_ec = 0x40c99f;
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x37;
          if (*(short *)(unaff_EBP + -100) == 0) {
LAB_0040ceef:
            *(undefined1 *)(unaff_EBP + -4) = 0x35;
            piStack_e8 = (int *)0x40cefc;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              piStack_e8 = (int *)0x40cf07;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x23;
            FUN_004125e6();
            if (*(int *)(unaff_EBP + -0x30) != 0) goto LAB_0040cf18;
            break;
          }
          piStack_e8 = (int *)(unaff_EBP + -0x34);
          iStack_ec = 0x40c9bc;
          FUN_00412348();
          *(undefined1 *)(unaff_EBP + -4) = 0x38;
          piStack_e8 = (int *)0x40c9cb;
          FUN_004172b7();
          *(undefined1 *)(unaff_EBP + -4) = 0x3a;
          FUN_004027b3();
          if (*(int *)(unaff_EBP + 0x10) == 0) {
            FUN_004125e6();
            goto LAB_0040ceef;
          }
          if ((*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x14) != 0) &&
             (*(uint *)(unaff_EBP + -0x2c) == *(uint *)(*(int *)(unaff_EBP + -0x1c) + 0x20) >> 1)) {
            *(undefined4 *)(unaff_EBP + -0x48) = 0xffffffff;
          }
          if (*(int *)(unaff_EBP + 8) == 0) {
            piStack_e8 = (int *)0x40ca06;
            FUN_00878dfb();
          }
          iVar2 = FUN_0040eea9();
          iVar5 = FUN_0040eea9();
          *(int *)(unaff_EBP + -0x24) = -iVar5;
          if (-iVar2 <= -iVar5) {
            *(int *)(unaff_EBP + -0x24) = -iVar2;
          }
          if (*(int *)(unaff_EBP + 0x10) == 0) {
            piStack_e8 = (int *)0x40ca35;
            FUN_00878dfb();
            if (*(int *)(unaff_EBP + 0x10) == 0) {
              piStack_e8 = (int *)0x40ca40;
              FUN_00878dfb();
            }
          }
          if (*(int *)(unaff_EBP + 8) == 0) {
            piStack_e8 = (int *)0x40ca4e;
            FUN_00878dfb();
          }
          *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + 8);
          if (*(int *)(unaff_EBP + 8) == 0) {
            piStack_e8 = (int *)0x40ca5e;
            FUN_00878dfb();
          }
          uVar3 = FUN_0040eea9();
          *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
          iVar2 = FUN_0040e48b();
          iVar2 = iVar2 - *(int *)(unaff_EBP + -0x10);
          iVar5 = FUN_0040e48b();
          iVar6 = FUN_0040eea9();
          *(int *)(unaff_EBP + -0x3c) = iVar5 - iVar6;
          if (iVar5 - iVar6 <= iVar2) {
            *(int *)(unaff_EBP + -0x3c) = iVar2;
          }
          if (*(int *)(unaff_EBP + 0x10) == 0) {
            piStack_e8 = (int *)0x40caa5;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + 8) == 0) {
            piStack_e8 = (int *)0x40cab1;
            FUN_00878dfb();
          }
          iVar2 = FUN_0040eed0();
          iVar5 = FUN_0040eed0();
          *(int *)(unaff_EBP + -0x18) = -iVar5;
          if (-iVar2 <= -iVar5) {
            *(int *)(unaff_EBP + -0x18) = -iVar2;
          }
          if (*(int *)(unaff_EBP + 0x10) == 0) {
            piStack_e8 = (int *)0x40cae0;
            FUN_00878dfb();
            if (*(int *)(unaff_EBP + 0x10) == 0) {
              piStack_e8 = (int *)0x40caeb;
              FUN_00878dfb();
            }
          }
          if (*(int *)(unaff_EBP + 8) == 0) {
            piStack_e8 = (int *)0x40caf9;
            FUN_00878dfb();
          }
          *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + 8);
          if (*(int *)(unaff_EBP + 8) == 0) {
            piStack_e8 = (int *)0x40cb09;
            FUN_00878dfb();
          }
          uVar3 = FUN_0040eed0();
          *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
          iVar2 = FUN_0040e53d();
          iVar2 = iVar2 - *(int *)(unaff_EBP + -0x10);
          iVar5 = FUN_0040e53d();
          iVar6 = FUN_0040eed0();
          *(int *)(unaff_EBP + -0x14) = iVar5 - iVar6;
          if (iVar5 - iVar6 <= iVar2) {
            *(int *)(unaff_EBP + -0x14) = iVar2;
          }
          *(undefined4 *)(unaff_EBP + 0xc) = 0;
          piStack_e8 = (int *)(unaff_EBP + -0x4c);
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          iStack_ec = 0x40cb5f;
          piVar7 = (int *)FUN_00679e4e();
          piVar7 = (int *)*piVar7;
          *(undefined1 *)(unaff_EBP + -4) = 0x3c;
          if (piVar7 == (int *)0x0) {
            iStack_ec = 0;
          }
          else {
            iStack_ec = *piVar7;
          }
          piStack_e8 = (int *)(unaff_EBP + 0xc);
          FUN_0040381b();
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          FUN_00402fa6();
          piStack_e8 = (int *)0x40cba4;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x3d;
          piStack_e8 = (int *)0x40cbb1;
          FUN_00403191();
          piVar7 = *(int **)(unaff_EBP + 0xc);
          *(undefined1 *)(unaff_EBP + -4) = 0x3e;
          if (piVar7 == (int *)0x0) {
            piStack_e8 = (int *)0x40cbc2;
            FUN_00878dfb();
            piVar7 = *(int **)(unaff_EBP + 0xc);
          }
          iStack_ec = *(int *)(unaff_EBP + -0x84);
          iVar2 = *piVar7;
          piStack_e8 = *(int **)(unaff_EBP + -0x80);
          *(int **)(unaff_EBP + -0x10) = piVar7;
          iVar2 = (**(code **)(iVar2 + 0x2c))
                            (piVar7,*(int *)(unaff_EBP + -0x3c) - *(int *)(unaff_EBP + -0x24),
                             *(int *)(unaff_EBP + -0x14) - *(int *)(unaff_EBP + -0x18),
                             *(undefined4 *)(unaff_EBP + -0x78),*(undefined4 *)(unaff_EBP + -0x74),
                             *(undefined4 *)(unaff_EBP + -0x70),*(undefined4 *)(unaff_EBP + -0x6c),
                             *(undefined4 *)(unaff_EBP + -0x88));
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3d;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x78);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x88);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          FUN_004031b7(0xff,3);
          *(undefined1 *)(unaff_EBP + -4) = 0x3f;
          if ((*(int *)(unaff_EBP + 8) == 0) &&
             (FUN_00878dfb(0x80004003), *(int *)(unaff_EBP + 8) == 0)) {
            FUN_00878dfb(0x80004003);
          }
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar7 = *(int **)(unaff_EBP + 0xc);
          *(int **)(unaff_EBP + -0x14) = piVar7;
          *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + 8);
          iVar5 = FUN_0040eed0();
          iVar2 = *(int *)(unaff_EBP + -0x18);
          iVar6 = FUN_0040eea9();
          iVar2 = (**(code **)(*piVar7 + 0x80))
                            (*(undefined4 *)(unaff_EBP + -0x14),
                             -(iVar6 + *(int *)(unaff_EBP + -0x24)),-(iVar5 + iVar2),
                             *(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0xd0),
                             *(undefined4 *)(unaff_EBP + -0xcc),*(undefined4 *)(unaff_EBP + -200),
                             *(undefined4 *)(unaff_EBP + -0xc4));
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          iVar2 = FUN_00402bc3(unaff_EBP + -0xd0);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          FUN_004031b7(0xff,3);
          *(undefined1 *)(unaff_EBP + -4) = 0x40;
          if ((*(int *)(unaff_EBP + 0x10) == 0) &&
             (FUN_00878dfb(0x80004003), *(int *)(unaff_EBP + 0x10) == 0)) {
            FUN_00878dfb(0x80004003);
          }
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar7 = *(int **)(unaff_EBP + 0xc);
          *(int **)(unaff_EBP + -0x14) = piVar7;
          *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + 0x10);
          iVar5 = FUN_0040eed0();
          iVar2 = *(int *)(unaff_EBP + -0x18);
          iVar6 = FUN_0040eea9();
          iVar2 = (**(code **)(*piVar7 + 0x80))
                            (*(undefined4 *)(unaff_EBP + -0x14),
                             -(iVar6 + *(int *)(unaff_EBP + -0x24)),-(iVar5 + iVar2),
                             *(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0xe0),
                             *(undefined4 *)(unaff_EBP + -0xdc),*(undefined4 *)(unaff_EBP + -0xd8),
                             *(undefined4 *)(unaff_EBP + -0xd4));
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963cc8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          iVar2 = FUN_00402bc3(unaff_EBP + -0xe0);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar7 = *(int **)(unaff_EBP + 0xc);
          iVar2 = (**(code **)(*piVar7 + 0x70))(piVar7,-*(int *)(unaff_EBP + -0x24));
          if (iVar2 < 0) {
            FUN_00878e09(iVar2,piVar7,&DAT_00963cc8);
          }
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar7 = *(int **)(unaff_EBP + 0xc);
          iVar2 = (**(code **)(*piVar7 + 0x78))(piVar7,-*(int *)(unaff_EBP + -0x18));
          if (iVar2 < 0) {
            iStack_ec = iVar2;
            piStack_e8 = piVar7;
            FUN_00878e09();
          }
          piStack_e8 = (int *)0x40cdfc;
          iVar2 = FUN_004029b9();
          *(int *)(unaff_EBP + -0x10) = iVar2;
          *(undefined1 *)(unaff_EBP + -4) = 0x41;
          if (iVar2 == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = FUN_0040cfa7();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          piStack_e8 = (int *)0x40ce23;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar2 + 0xc),
                     *(IBinding **)(unaff_EBP + 0xc));
          iVar5 = *(int *)(unaff_EBP + -0x44);
          puVar9 = (undefined4 *)(iVar5 + 0x10);
          puVar10 = (undefined4 *)(iVar2 + 0x10);
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar5 + 0x40);
          *(int *)(unaff_EBP + -0x50) = iVar2;
          FUN_00412e1c();
          *(undefined1 *)(unaff_EBP + -4) = 0x42;
          FUN_0041394f();
          piStack_e8 = (int *)0x40ce59;
          FUN_00412de3();
          *(undefined1 *)(unaff_EBP + -4) = 0x3b;
          FUN_00412e2e();
          FUN_004125e6();
          FUN_004125e6();
          *(undefined1 *)(unaff_EBP + -4) = 0x35;
          piStack_e8 = (int *)0x40ce82;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            piStack_e8 = (int *)0x40ce8d;
            FUN_00878dfb();
          }
          FUN_004125e6();
          *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + *(int *)(unaff_EBP + -0x48);
          iVar2 = *(int *)(unaff_EBP + -0x30);
        }
        FUN_004027eb();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          piStack_e8 = (int *)0x40cec1;
          FUN_004130e3();
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        }
        if (*(int *)(unaff_EBP + -0x38) != 0) {
          FUN_004030b1();
        }
        goto LAB_0040ced0;
      }
    }
LAB_0040cf18:
    FUN_0041398d();
    piStack_e8 = (int *)0x40cf2f;
    FUN_004126ff();
    FUN_004027eb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00412b84();
  FUN_00402fa6();
LAB_0040ced0:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


