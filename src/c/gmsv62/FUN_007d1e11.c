/* FUN_007d1e11 - 0x007d1e11 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_007d1e11(void)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  int *piVar8;
  undefined4 extraout_ECX;
  int iVar9;
  uint uVar10;
  int iVar11;
  int unaff_EBP;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 *puStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined *puStack_a8;
  undefined *puStack_a4;
  int *piStack_a0;
  
  FUN_00879bb8();
  if ((DAT_0097c160 & 1) == 0) {
    DAT_0097c160 = DAT_0097c160 | 1;
    piStack_a0 = (int *)&LAB_007d2441;
    DAT_0097c15c = 0;
    puStack_a4 = (undefined *)0x7d1e46;
    FUN_008796d0();
  }
  if ((DAT_0097c15c == 0) || (*(int *)(DAT_0097c15c + -4) == 0)) {
    piStack_a0 = &DAT_00980690;
    puStack_a4 = (undefined *)0x7d1e67;
    FUN_00403191();
    piStack_a0 = &DAT_00980690;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    puStack_a4 = (undefined *)0x7d1e73;
    FUN_00403191();
    piStack_a0 = (int *)0x0;
    puStack_a4 = (undefined *)0x0;
    puStack_a8 = (undefined *)(unaff_EBP + -0x6c);
    iStack_ac = unaff_EBP + -0x4c;
    puStack_b8 = (undefined1 *)&uStack_b0;
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_b0;
    iStack_b4 = 0x868;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_bc = 0x7d1e97;
    FUN_00679e4e();
    iStack_b4 = unaff_EBP + -0x7c;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_b8 = (undefined1 *)0x7d1ea4;
    FUN_00405a1d();
    puStack_b8 = (undefined1 *)0x7d1eab;
    FUN_00402660();
    puStack_b8 = (undefined1 *)0x7d1eb2;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    puStack_a8 = (undefined *)0x7d1ebd;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x24) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar4 != 0) {
      piStack_a0 = (int *)(unaff_EBP + -0x24);
      puStack_a4 = (undefined *)0x7d1ed3;
      piStack_a0 = (int *)FUN_00404b30();
      if (((int)piStack_a0 < 0) && (piStack_a0 != (int *)0x80004002)) {
        puStack_a4 = (undefined *)0x7d1ee4;
        FUN_00878dfb();
      }
    }
    piStack_a0 = (int *)(unaff_EBP + -0x7c);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_a4 = (undefined *)0x7d1ef1;
    piStack_a0 = (int *)FUN_00402bc3();
    if ((int)piStack_a0 < 0) {
      puStack_a4 = (undefined *)0x7d1efc;
      FUN_00878dfb();
    }
    piStack_a0 = (int *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_a4 = (undefined *)0x7d1f09;
    piStack_a0 = (int *)FUN_00402bc3();
    if ((int)piStack_a0 < 0) {
      puStack_a4 = (undefined *)0x7d1f14;
      FUN_00878dfb();
    }
    piStack_a0 = (int *)(unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_a4 = (undefined *)0x7d1f21;
    piStack_a0 = (int *)FUN_00402bc3();
    if ((int)piStack_a0 < 0) {
      puStack_a4 = (undefined *)0x7d1f2c;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      piStack_a0 = (int *)0x7d1f3c;
      puStack_a4 = (undefined *)FUN_0040cf4d();
      piStack_a0 = (int *)(unaff_EBP + -0x19);
      puStack_a8 = (undefined *)0x7d1f4b;
      FUN_0047266d();
      uVar10 = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          piStack_a0 = (int *)0x80004003;
          puStack_a4 = (undefined *)0x7d1f5c;
          FUN_00878dfb();
        }
        piStack_a0 = (int *)0x7d1f64;
        uVar5 = FUN_0040cf4d();
        if (uVar5 <= uVar10) break;
        piStack_a0 = (int *)0x7d1f70;
        FUN_0087a1b0();
        puStack_a8 = (undefined *)0x7d1f79;
        puStack_a4 = (undefined *)uVar10;
        piStack_a0 = (int *)&stack0xffffff64;
        puStack_a4 = (undefined *)FUN_00412335();
        *(int ***)(unaff_EBP + -0x20) = &piStack_a0;
        puStack_a8 = (undefined *)0x7d1f85;
        FUN_004033a1();
        puStack_a4 = (undefined *)(unaff_EBP + -0x38);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        puStack_a8 = (undefined *)0x7d1f95;
        FUN_0040263d();
        puStack_a8 = (undefined *)0x7d1f9c;
        psVar6 = (short *)FUN_004048a4();
        sVar2 = *psVar6;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (sVar2 == 8) {
          puStack_a4 = *(undefined **)(psVar6 + 4);
        }
        else {
          puStack_a4 = &DAT_0097812c;
        }
        piStack_a0 = (int *)0xffffffff;
        puStack_a8 = (undefined *)0x7d1fc1;
        FUN_00454081();
        piStack_a0 = (int *)(unaff_EBP + -0x38);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        puStack_a4 = (undefined *)0x7d1fce;
        piStack_a0 = (int *)FUN_00402bc3();
        if ((int)piStack_a0 < 0) {
          puStack_a4 = (undefined *)0x7d1fd9;
          FUN_00878dfb();
        }
        uVar10 = uVar10 + 1;
      }
    }
    piStack_a0 = &DAT_00980690;
    puStack_a4 = (undefined *)0x7d1fe8;
    FUN_00403191();
    piStack_a0 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_a4 = (undefined *)0x7d1ff5;
    FUN_00403191();
    piStack_a0 = (int *)0x0;
    puStack_a4 = (undefined *)0x0;
    puStack_a8 = (undefined *)(unaff_EBP + -0x38);
    iStack_ac = unaff_EBP + -0x5c;
    puStack_b8 = (undefined1 *)&uStack_b0;
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_b0;
    iStack_b4 = 0x594;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    uStack_bc = 0x7d2019;
    uStack_b0 = extraout_ECX;
    FUN_00679e4e();
    iStack_b4 = unaff_EBP + -0x8c;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_b8 = (undefined1 *)0x7d2029;
    FUN_00405a1d();
    puStack_b8 = (undefined1 *)0x7d2030;
    FUN_00402660();
    puStack_b8 = (undefined1 *)0x7d2037;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_a8 = (undefined *)0x7d2042;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x28) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar4 != 0) {
      piStack_a0 = (int *)(unaff_EBP + -0x28);
      puStack_a4 = (undefined *)0x7d2058;
      piStack_a0 = (int *)FUN_00404b30();
      if (((int)piStack_a0 < 0) && (piStack_a0 != (int *)0x80004002)) {
        puStack_a4 = (undefined *)0x7d2069;
        FUN_00878dfb();
      }
    }
    piStack_a0 = (int *)(unaff_EBP + -0x8c);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    puStack_a4 = (undefined *)0x7d2079;
    piStack_a0 = (int *)FUN_00402bc3();
    if ((int)piStack_a0 < 0) {
      puStack_a4 = (undefined *)0x7d2084;
      FUN_00878dfb();
    }
    piStack_a0 = (int *)(unaff_EBP + -0x5c);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_a4 = (undefined *)0x7d2091;
    piStack_a0 = (int *)FUN_00402bc3();
    if ((int)piStack_a0 < 0) {
      puStack_a4 = (undefined *)0x7d209c;
      FUN_00878dfb();
    }
    piStack_a0 = (int *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_a4 = (undefined *)0x7d20a9;
    piStack_a0 = (int *)FUN_00402bc3();
    if ((int)piStack_a0 < 0) {
      puStack_a4 = (undefined *)0x7d20b4;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_a0 = (int *)0x80004003;
        puStack_a4 = (undefined *)0x7d20cc;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        piStack_a0 = (int *)0x80004003;
        puStack_a4 = (undefined *)0x7d20db;
        FUN_00878dfb();
      }
      piStack_a0 = (int *)0x7d20e6;
      iVar4 = FUN_0040cf4d();
      piStack_a0 = (int *)0x7d20ef;
      iVar7 = FUN_0040cf4d();
      puStack_a8 = (undefined *)(iVar4 + iVar7);
      piStack_a0 = (int *)(unaff_EBP + -0x19);
      puStack_a4 = (undefined *)0x0;
      iStack_ac = 0x7d2101;
      FUN_0046691d();
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      uVar10 = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          piStack_a0 = (int *)0x80004003;
          puStack_a4 = (undefined *)0x7d2119;
          FUN_00878dfb();
        }
        piStack_a0 = (int *)0x7d2121;
        uVar5 = FUN_0040cf4d();
        if (uVar5 <= uVar10) break;
        piStack_a0 = (int *)0x7d2131;
        FUN_0087a1b0();
        puStack_a8 = (undefined *)0x7d213a;
        puStack_a4 = (undefined *)uVar10;
        piStack_a0 = (int *)&stack0xffffff64;
        puStack_a4 = (undefined *)FUN_00412335();
        *(int ***)(unaff_EBP + -0x3c) = &piStack_a0;
        puStack_a8 = (undefined *)0x7d2146;
        FUN_004033a1();
        puStack_a4 = (undefined *)(unaff_EBP + -0x9c);
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        puStack_a8 = (undefined *)0x7d2159;
        FUN_0040263d();
        puStack_a8 = (undefined *)0x7d2160;
        psVar6 = (short *)FUN_004048a4();
        sVar2 = *psVar6;
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        if (sVar2 == 8) {
          puStack_a4 = *(undefined **)(psVar6 + 4);
        }
        else {
          puStack_a4 = &DAT_0097812c;
        }
        piStack_a0 = (int *)0xffffffff;
        puStack_a8 = (undefined *)0x7d217f;
        FUN_00454081();
        piStack_a0 = (int *)(unaff_EBP + -0x9c);
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        puStack_a4 = (undefined *)0x7d218f;
        piStack_a0 = (int *)FUN_00402bc3();
        if ((int)piStack_a0 < 0) {
          puStack_a4 = (undefined *)0x7d219a;
          FUN_00878dfb();
        }
        iVar4 = *(int *)(unaff_EBP + -0x14);
        if (iVar4 == 0) {
LAB_007d21ba:
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            piStack_a0 = (int *)0x80004003;
            puStack_a4 = (undefined *)0x7d21c9;
            FUN_00878dfb();
          }
          piStack_a0 = (int *)0x7d21d1;
          FUN_0040cf4d();
          piStack_a0 = (int *)(unaff_EBP + -0x14);
          puStack_a4 = (undefined *)0x7d21e5;
          FUN_00414f8b();
        }
        else {
          piStack_a0 = (int *)0x2c;
          puStack_a8 = (undefined *)0x7d21a9;
          puStack_a4 = (undefined *)iVar4;
          iVar7 = FUN_0087b4c0();
          if (iVar7 == 0) {
            piStack_a0 = (int *)0xffffffff;
          }
          else {
            piStack_a0 = (int *)(iVar7 - iVar4);
          }
          if ((int)piStack_a0 < 0) goto LAB_007d21ba;
          puStack_a4 = (undefined *)0x0;
          puStack_a8 = (undefined *)(unaff_EBP + -0x20);
          iStack_ac = 0x7d21f5;
          FUN_0045e053();
          piStack_a0 = (int *)0x0;
          puStack_a4 = (undefined *)0x0;
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          puStack_a8 = (undefined *)0x7d2202;
          FUN_0045ed72();
          puStack_a4 = (undefined *)0x7d2209;
          piVar8 = (int *)FUN_0045ee27();
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            piStack_a0 = (int *)0x80004003;
            puStack_a4 = (undefined *)0x7d221a;
            FUN_00878dfb();
          }
          piStack_a0 = (int *)0x7d2222;
          FUN_0040cf4d();
          puStack_a4 = (undefined *)0x7d2233;
          piStack_a0 = piVar8;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          piStack_a0 = (int *)0x7d223f;
          FUN_00414ebb();
        }
        uVar10 = uVar10 + 1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      piStack_a0 = (int *)0x7d2251;
      FUN_00414ebb();
    }
    piStack_a0 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (piStack_a0 != (int *)0x0) {
      puStack_a4 = (undefined *)0x7d2262;
      (**(code **)(*piStack_a0 + 8))();
    }
    piStack_a0 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_a0 != (int *)0x0) {
      puStack_a4 = (undefined *)0x7d2273;
      (**(code **)(*piStack_a0 + 8))();
    }
  }
  piVar8 = *(int **)(unaff_EBP + 8);
  iVar4 = *piVar8;
  if (iVar4 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(iVar4 + -4);
  }
  if (3 < iVar7) {
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + -4);
    }
    if (iVar4 < 0xd) {
      piStack_a0 = (int *)0x0;
      puStack_a4 = (undefined *)0x0;
      puStack_a8 = &DAT_00964364;
      iStack_ac = 0x7d22ad;
      iVar4 = FUN_004538dc();
      if (iVar4 == -1) {
        iVar4 = *piVar8;
        iVar7 = 0;
        while( true ) {
          if (iVar4 == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = *(int *)(iVar4 + -4);
          }
          if ((iVar11 <= iVar7) ||
             ((((cVar1 = *(char *)(iVar4 + iVar7), cVar1 < 'a' || ('z' < cVar1)) &&
               ((cVar1 < 'A' || ('Z' < cVar1)))) && ((cVar1 < '0' || ('9' < cVar1)))))) break;
          iVar7 = iVar7 + 1;
        }
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(iVar4 + -4);
        }
        if (iVar4 <= iVar7) {
          if (*(int *)(unaff_EBP + 0xc) != 0) {
            piStack_a0 = *(int **)(unaff_EBP + 8);
            *(undefined4 *)(unaff_EBP + -0x14) = 0;
            puStack_a4 = (undefined *)0x7d230f;
            FUN_00414f8b();
            *(undefined4 *)(unaff_EBP + -4) = 0x16;
            piStack_a0 = (int *)0x7d231e;
            FUN_00495ba8();
            for (uVar10 = 0; (DAT_0097c15c != 0 && (uVar10 < *(uint *)(DAT_0097c15c + -4)));
                uVar10 = uVar10 + 1) {
              piStack_a0 = (int *)(DAT_0097c15c + uVar10 * 4);
              *(undefined4 *)(unaff_EBP + 0xc) = 0;
              puStack_a4 = (undefined *)0x7d234a;
              FUN_00414f8b();
              *(undefined1 *)(unaff_EBP + -4) = 0x17;
              piStack_a0 = (int *)0x7d2356;
              FUN_00495ba8();
              piStack_a0 = (int *)0x0;
              puStack_a4 = (undefined *)0x0;
              puStack_a8 = (undefined *)0xffffffff;
              iStack_ac = *(undefined4 *)(unaff_EBP + 0xc);
              uStack_b0 = 0;
              iStack_b4 = 0;
              puStack_b8 = (undefined1 *)0x7d2365;
              (*DAT_0097b4c8)();
              puStack_b8 = (undefined1 *)0x7d2372;
              FUN_0087a1b0();
              *(int **)(unaff_EBP + -0x18) = &iStack_b4;
              puStack_b8 = (undefined1 *)0x0;
              uStack_bc = 0;
              uStack_c0 = 0xffffffff;
              uStack_c4 = *(undefined4 *)(unaff_EBP + -0x14);
              uStack_c8 = 0;
              uStack_cc = 0;
              (*DAT_0097b4c8)();
              FUN_0087a1b0();
              *(undefined4 **)(unaff_EBP + -0x10) = &uStack_cc;
              (*DAT_0097b4c8)(0,0,*(undefined4 *)(unaff_EBP + 0xc),0xffffffff,
                              *(undefined4 *)(unaff_EBP + -0x18),0x3fffffff);
              (*DAT_0097b4c8)(0,0,*(undefined4 *)(unaff_EBP + -0x14),0xffffffff,
                              *(undefined4 *)(unaff_EBP + -0x10),0x3fffffff);
              piStack_a0 = *(int **)(unaff_EBP + -0x18);
              puStack_a4 = *(undefined **)(unaff_EBP + -0x10);
              puStack_a8 = (undefined *)0x7d23c1;
              iVar4 = FUN_0087c96a();
              *(undefined1 *)(unaff_EBP + -4) = 0x16;
              if (iVar4 != 0) {
                piStack_a0 = (int *)0x7d23de;
                FUN_00414ebb();
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                piStack_a0 = (int *)0x7d23ea;
                FUN_00414ebb();
                goto LAB_007d2288;
              }
              piStack_a0 = (int *)0x7d23d3;
              FUN_00414ebb();
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            piStack_a0 = (int *)0x7d23fb;
            FUN_00414ebb();
            piVar8 = *(int **)(unaff_EBP + 8);
          }
          iVar4 = *piVar8;
          iVar11 = 0;
          iVar7 = 0;
          while( true ) {
            if (iVar4 == 0) {
              iVar9 = 0;
            }
            else {
              iVar9 = *(int *)(iVar4 + -4);
            }
            if (iVar9 <= iVar7) break;
            if ((*(char *)(iVar4 + iVar7) == 'I') || (*(char *)(iVar4 + iVar7) == 'l')) {
              iVar11 = iVar11 + 1;
            }
            iVar7 = iVar7 + 1;
          }
          bVar3 = iVar11 < 4;
          goto LAB_007d242c;
        }
      }
    }
  }
LAB_007d2288:
  bVar3 = false;
LAB_007d242c:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return bVar3;
}


