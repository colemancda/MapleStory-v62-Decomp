/* FUN_005eb988 - 0x005eb988 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005eb988(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  short *psVar9;
  int extraout_ECX;
  int iVar10;
  int extraout_ECX_00;
  char *extraout_ECX_01;
  int unaff_EBP;
  int iStack_c8;
  undefined1 *puStack_c4;
  char *pcStack_c0;
  int iStack_bc;
  int *piStack_b8;
  
  FUN_00879bb8();
  iVar3 = *(int *)(extraout_ECX + 0x124);
  *(int *)(unaff_EBP + -0x58) = extraout_ECX;
  if (iVar3 == 0) goto LAB_005ec4b0;
  piStack_b8 = (int *)(*(int *)(extraout_ECX + 0x98) + 0x7c);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iStack_bc = 0x5eb9c3;
  FUN_00414f8b();
  iVar3 = *(int *)(extraout_ECX + 0xb8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + -4);
  }
  if (*(int *)(extraout_ECX + 0xb4) == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = *(int *)(*(int *)(extraout_ECX + 0xb4) + -4);
  }
  if (iVar3 == iVar10) {
    if ((*(char **)(unaff_EBP + -0x18) == (char *)0x0) || (**(char **)(unaff_EBP + -0x18) == '\0'))
    {
      piStack_b8 = (int *)0x69c;
      iStack_bc = 0x5eba7a;
      iVar3 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x10) = iVar3;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        piStack_b8 = (int *)0x5eba8c;
        iVar3 = FUN_007e62e9();
      }
      uVar5 = -(uint)(iVar3 != 0) & iVar3 + 8U;
      *(uint *)(unaff_EBP + -0x34) = -(uint)(uVar5 != 0) & uVar5 - 8;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_b8 = (int *)0x5ebab2;
      FUN_004c26c4();
      piStack_b8 = (int *)0x0;
      iStack_bc = 0;
      puStack_c4 = (undefined1 *)(*(int *)(extraout_ECX + 0x98) + 0x84);
      *(char ***)(unaff_EBP + -0x10) = &pcStack_c0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_c8 = 0x5ebacf;
      FUN_00450368();
      puStack_c4 = (undefined1 *)**(int **)(extraout_ECX + 0x98);
      iStack_c8 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_004c2677();
      FUN_007eddac();
      piStack_b8 = (int *)0x0;
      iStack_bc = 0;
      pcStack_c0 = (char *)0x5ebaf5;
      FUN_007edf11();
      piStack_b8 = (int *)0x5ebafd;
      FUN_007e6e3c();
      piStack_b8 = (int *)0x5ebb05;
      FUN_004bc6a2();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_b8 = (int *)0x5ebb10;
      FUN_004c26e1();
    }
    else {
      piStack_b8 = (int *)0x0;
      iStack_bc = 0;
      pcStack_c0 = (char *)0x36;
      puStack_c4 = (undefined1 *)0x5eba07;
      FUN_0060142b();
      piStack_b8 = *(int **)(extraout_ECX + 0x94);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_bc = 0x5eba19;
      FUN_00457d37();
      piStack_b8 = (int *)0x5eba26;
      puVar4 = (undefined2 *)(**(code **)(*(int *)(DAT_00978358 + 4) + 0x10))();
      piStack_b8 = (int *)CONCAT22((short)((uint)puVar4 >> 0x10),*puVar4);
      iStack_bc = 0x5eba32;
      FUN_0045d247();
      piStack_b8 = (int *)0x5eba3f;
      iVar3 = (**(code **)(*(int *)(DAT_00978358 + 4) + 0x10))();
      piStack_b8 = (int *)CONCAT22((short)((uint)iVar3 >> 0x10),*(undefined2 *)(iVar3 + 4));
      iStack_bc = 0x5eba4c;
      FUN_0045d247();
      piStack_b8 = (int *)(unaff_EBP + -0x40);
      iStack_bc = 0x5eba5b;
      FUN_004751b2();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_b8 = (int *)0x5eba66;
      FUN_0045ebca();
    }
  }
  else {
    *(int **)(unaff_EBP + -0x5c) = (int *)(extraout_ECX + 0xbc);
    iVar3 = *(int *)(extraout_ECX + 0xbc);
    if (iVar3 == 0) {
      *(undefined4 *)(unaff_EBP + -0x4c) = 0;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(iVar3 + -4);
    }
    *(int **)(unaff_EBP + -0x60) = (int *)(extraout_ECX + 0xc0);
    iVar3 = *(int *)(extraout_ECX + 0xc0);
    if (iVar3 == 0) {
      *(undefined4 *)(unaff_EBP + -0x54) = 0;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(iVar3 + -4);
    }
    *(int **)(unaff_EBP + -0x30) = (int *)(extraout_ECX + 0xc4);
    iVar3 = *(int *)(extraout_ECX + 0xc4);
    if (iVar3 == 0) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(iVar3 + -4);
    }
    piStack_b8 = (int *)(*(int *)(extraout_ECX + 0x98) + 0x80);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    iStack_bc = 0x5ebb7a;
    FUN_00414f8b();
    pcVar7 = *(char **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (((((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) || (*(int *)(unaff_EBP + -0x4c) != 0)) ||
        ((*(int *)(unaff_EBP + -0x54) != 0 || (*(int *)(unaff_EBP + -0x1c) != 0)))) ||
       ((*(char **)(unaff_EBP + -0x18) != (char *)0x0 && (**(char **)(unaff_EBP + -0x18) != '\0'))))
    {
      if (*(int *)(unaff_EBP + -0x1c) + *(int *)(unaff_EBP + -0x54) + *(int *)(unaff_EBP + -0x4c) ==
          1) {
        if (*(int *)(unaff_EBP + -0x4c) < 1) {
          if (0 < *(int *)(unaff_EBP + -0x54)) {
            puVar8 = *(undefined4 **)(unaff_EBP + -0x60);
            goto LAB_005ebc06;
          }
          if (0 < *(int *)(unaff_EBP + -0x1c)) {
            puVar8 = *(undefined4 **)(unaff_EBP + -0x30);
            goto LAB_005ebc06;
          }
        }
        else {
          puVar8 = *(undefined4 **)(unaff_EBP + -0x5c);
LAB_005ebc06:
          *(undefined2 *)(unaff_EBP + -0x50) = *(undefined2 *)*puVar8;
        }
        piStack_b8 = &DAT_00980690;
        iStack_bc = 0x5ebc1c;
        FUN_00403191();
        piStack_b8 = &DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iStack_bc = 0x5ebc30;
        FUN_00403191();
        piStack_b8 = (int *)0x0;
        iStack_bc = 0;
        pcStack_c0 = (char *)(unaff_EBP + -0x74);
        puStack_c4 = (undefined1 *)(unaff_EBP + -0x84);
        *(int **)(unaff_EBP + -0x10) = &iStack_c8;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_00679e4e(&iStack_c8,0xc52);
        iVar3 = unaff_EBP + -0xb4;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_00405a1d(iVar3);
        FUN_00402660();
        FUN_00404a02(iVar3);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        pcStack_c0 = (char *)0x5ebc7d;
        iVar3 = FUN_004032b4();
        *(int *)(unaff_EBP + -100) = iVar3;
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
        if (iVar3 != 0) {
          piStack_b8 = (int *)(unaff_EBP + -100);
          iStack_bc = 0x5ebc93;
          piStack_b8 = (int *)FUN_00404b30();
          if (((int)piStack_b8 < 0) && (piStack_b8 != (int *)0x80004002)) {
            iStack_bc = 0x5ebca4;
            FUN_00878dfb();
          }
        }
        piStack_b8 = (int *)(unaff_EBP + -0xb4);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        iStack_bc = 0x5ebcb4;
        piStack_b8 = (int *)FUN_00402bc3();
        if ((int)piStack_b8 < 0) {
          iStack_bc = 0x5ebcbf;
          FUN_00878dfb();
        }
        piStack_b8 = (int *)(unaff_EBP + -0x84);
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        iStack_bc = 0x5ebccf;
        piStack_b8 = (int *)FUN_00402bc3();
        if ((int)piStack_b8 < 0) {
          iStack_bc = 0x5ebcda;
          FUN_00878dfb();
        }
        piStack_b8 = (int *)(unaff_EBP + -0x74);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iStack_bc = 0x5ebce7;
        piStack_b8 = (int *)FUN_00402bc3();
        if ((int)piStack_b8 < 0) {
          iStack_bc = 0x5ebcf2;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        piStack_b8 = (int *)0xbb5;
        iStack_bc = unaff_EBP + -0x34;
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        pcStack_c0 = (char *)0x5ebd09;
        iStack_bc = FUN_00679d22();
        piStack_b8 = (int *)(uint)*(ushort *)(unaff_EBP + -0x50);
        iStack_bc = *(int *)iStack_bc;
        pcStack_c0 = (char *)(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        puStack_c4 = (undefined1 *)0x5ebd1e;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        piStack_b8 = (int *)0x5ebd2d;
        FUN_00414ebb();
        piStack_b8 = (int *)0x0;
        iStack_bc = 0;
        pcStack_c0 = (char *)0x5ebd37;
        puStack_c4 = (undefined1 *)FUN_00449713();
        *(char ***)(unaff_EBP + -0x10) = &pcStack_c0;
        iStack_c8 = 0x5ebd43;
        FUN_00448a17();
        puStack_c4 = (undefined1 *)(unaff_EBP + -0xa4);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        iStack_c8 = 0x5ebd56;
        FUN_0040263d();
        iStack_c8 = 0x5ebd5d;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        pcStack_c0 = (char *)0x5ebd68;
        iVar3 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x34) = iVar3;
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        if (iVar3 != 0) {
          piStack_b8 = (int *)(unaff_EBP + -0x34);
          iStack_bc = 0x5ebd7e;
          piStack_b8 = (int *)FUN_00404b30();
          if (((int)piStack_b8 < 0) && (piStack_b8 != (int *)0x80004002)) {
            iStack_bc = 0x5ebd8f;
            FUN_00878dfb();
          }
        }
        piStack_b8 = (int *)(unaff_EBP + -0xa4);
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        iStack_bc = 0x5ebd9f;
        iVar3 = FUN_00402bc3();
        iStack_bc = (int)piStack_b8;
        if (iVar3 < 0) {
          iStack_bc = 0x5ebdaa;
          piStack_b8 = (int *)iVar3;
          FUN_00878dfb();
          iStack_bc = extraout_ECX_00;
        }
        piStack_b8 = (int *)0x0;
        puStack_c4 = (undefined1 *)&iStack_bc;
        *(int **)(unaff_EBP + -0x10) = &iStack_bc;
        pcStack_c0 = (char *)0x6cd;
        iStack_c8 = 0x5ebdbe;
        FUN_00679e4e();
        pcStack_c0 = (char *)(unaff_EBP + -0x94);
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        puStack_c4 = (undefined1 *)0x5ebdd1;
        FUN_0040263d();
        puStack_c4 = (undefined1 *)0x5ebdd8;
        iStack_bc = FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        pcStack_c0 = (char *)0x5ebde2;
        uVar6 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x10) = uVar6;
        pcStack_c0 = (char *)(unaff_EBP + -0x94);
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        puStack_c4 = (undefined1 *)0x5ebdf5;
        piStack_b8 = (int *)FUN_00402bc3();
        if ((int)piStack_b8 < 0) {
          iStack_bc = 0x5ebe02;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          piStack_b8 = (int *)0x5ebe13;
          FUN_004027eb();
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          piStack_b8 = (int *)0x5ebe1f;
          FUN_00414ebb();
          piStack_b8 = (int *)0x5ebe27;
          FUN_004027eb();
          goto LAB_005ebe27;
        }
        piStack_b8 = (int *)0x0;
        iStack_bc = **(int **)(extraout_ECX + 0x98);
        pcStack_c0 = *(char **)(unaff_EBP + -0x50);
        puStack_c4 = (undefined1 *)0x5ec46b;
        FUN_0084b9c7();
        piStack_b8 = *(int **)(unaff_EBP + -0x20);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        if (piStack_b8 != (int *)0x0) {
          iStack_bc = 0x5ec47c;
          (**(code **)(*piStack_b8 + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        piStack_b8 = (int *)0x5ec488;
        FUN_00414ebb();
        piStack_b8 = *(int **)(unaff_EBP + -0x24);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (piStack_b8 != (int *)0x0) {
          iStack_bc = 0x5ec499;
          (**(code **)(*piStack_b8 + 8))();
        }
      }
      else {
LAB_005ebe27:
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        if (0 < *(int *)(unaff_EBP + -0x4c)) {
          piStack_b8 = (int *)0xc2b;
          iStack_bc = unaff_EBP + -0x10;
          pcStack_c0 = (char *)0x5ebe43;
          iStack_bc = FUN_00679d22();
          iStack_bc = *(int *)iStack_bc;
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          if (iStack_bc == 0) {
            piStack_b8 = (int *)0x0;
          }
          else {
            piStack_b8 = *(int **)(iStack_bc + -4);
          }
          pcStack_c0 = (char *)0x5ebe5e;
          FUN_0045efbb();
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          piStack_b8 = (int *)0x5ebe6a;
          FUN_00414ebb();
          piStack_b8 = *(int **)(unaff_EBP + -0x5c);
          iStack_bc = unaff_EBP + -0x14;
          pcStack_c0 = (char *)(unaff_EBP + -0x28);
          puStack_c4 = (undefined1 *)0x5ebe7a;
          FUN_005ec4c5();
        }
        if ((0 < *(int *)(unaff_EBP + -0x54)) || (0 < *(int *)(unaff_EBP + -0x1c))) {
          piStack_b8 = (int *)0xc2c;
          iStack_bc = unaff_EBP + -0x10;
          pcStack_c0 = (char *)0x5ebe97;
          iStack_bc = FUN_00679d22();
          iStack_bc = *(int *)iStack_bc;
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          if (iStack_bc == 0) {
            piStack_b8 = (int *)0x0;
          }
          else {
            piStack_b8 = *(int **)(iStack_bc + -4);
          }
          pcStack_c0 = (char *)0x5ebeb2;
          FUN_0045efbb();
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          piStack_b8 = (int *)0x5ebebe;
          FUN_00414ebb();
          piStack_b8 = *(int **)(unaff_EBP + -0x60);
          iStack_bc = unaff_EBP + -0x14;
          pcStack_c0 = (char *)(unaff_EBP + -0x28);
          puStack_c4 = (undefined1 *)0x5ebece;
          FUN_005ec4c5();
          puStack_c4 = *(undefined1 **)(unaff_EBP + -0x30);
          iStack_c8 = unaff_EBP + -0x14;
          FUN_005ec4c5(unaff_EBP + -0x28);
        }
        if ((*(char **)(unaff_EBP + -0x18) != (char *)0x0) &&
           (**(char **)(unaff_EBP + -0x18) != '\0')) {
          piStack_b8 = (int *)0xc2d;
          iStack_bc = unaff_EBP + -0x10;
          pcStack_c0 = (char *)0x5ebf04;
          iStack_bc = FUN_00679d22();
          iStack_bc = *(int *)iStack_bc;
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          if (iStack_bc == 0) {
            piStack_b8 = (int *)0x0;
          }
          else {
            piStack_b8 = *(int **)(iStack_bc + -4);
          }
          pcStack_c0 = (char *)0x5ebf1f;
          FUN_0045efbb();
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          piStack_b8 = (int *)0x5ebf2b;
          FUN_00414ebb();
          piStack_b8 = &DAT_00980690;
          iStack_bc = 0x5ebf3c;
          FUN_00403191();
          piStack_b8 = &DAT_00980690;
          *(undefined1 *)(unaff_EBP + -4) = 0x1a;
          iStack_bc = 0x5ebf49;
          FUN_00403191();
          piStack_b8 = (int *)0x0;
          iStack_bc = 0;
          pcStack_c0 = (char *)(unaff_EBP + -0x84);
          puStack_c4 = (undefined1 *)(unaff_EBP + -0x74);
          *(int **)(unaff_EBP + -0x34) = &iStack_c8;
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          FUN_00679e4e(&iStack_c8,0xc2f);
          iVar3 = unaff_EBP + -0x94;
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          FUN_00405a1d(iVar3);
          FUN_00402660();
          FUN_00404a02(iVar3);
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          pcStack_c0 = (char *)0x5ebf96;
          iVar3 = FUN_004032b4();
          *(int *)(unaff_EBP + -0x10) = iVar3;
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
          if (iVar3 != 0) {
            piStack_b8 = (int *)(unaff_EBP + -0x10);
            iStack_bc = 0x5ebfac;
            piStack_b8 = (int *)FUN_00404b30();
            if (((int)piStack_b8 < 0) && (piStack_b8 != (int *)0x80004002)) {
              iStack_bc = 0x5ebfbd;
              FUN_00878dfb();
            }
          }
          piStack_b8 = (int *)(unaff_EBP + -0x94);
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          iStack_bc = 0x5ebfcd;
          piStack_b8 = (int *)FUN_00402bc3();
          if ((int)piStack_b8 < 0) {
            iStack_bc = 0x5ebfd8;
            FUN_00878dfb();
          }
          piStack_b8 = (int *)(unaff_EBP + -0x74);
          *(undefined1 *)(unaff_EBP + -4) = 0x20;
          iStack_bc = 0x5ebfe5;
          piStack_b8 = (int *)FUN_00402bc3();
          if ((int)piStack_b8 < 0) {
            iStack_bc = 0x5ebff0;
            FUN_00878dfb();
          }
          piStack_b8 = (int *)(unaff_EBP + -0x84);
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          iStack_bc = 0x5ec000;
          piStack_b8 = (int *)FUN_00402bc3();
          if ((int)piStack_b8 < 0) {
            iStack_bc = 0x5ec00b;
            FUN_00878dfb();
          }
          piStack_b8 = (int *)0x0;
          iStack_bc = 0;
          pcStack_c0 = (char *)0xffffffff;
          puStack_c4 = *(undefined1 **)(unaff_EBP + -0x18);
          iStack_c8 = 0;
          (*DAT_0097b4c8)(0);
          piStack_b8 = (int *)0x5ec027;
          FUN_0087a1b0();
          piStack_b8 = (int *)&DAT_0097812c;
          iStack_bc = -1;
          puStack_c4 = (undefined1 *)0x5ec039;
          pcStack_c0 = &stack0xffffff4c;
          puStack_c4 = (undefined1 *)FUN_00449713();
          iStack_c8 = 0x5ec03f;
          pcStack_c0 = (char *)FUN_00456ad5();
          *(int **)(unaff_EBP + -0x34) = &iStack_bc;
          puStack_c4 = (undefined1 *)0x5ec04c;
          FUN_004033a1();
          pcStack_c0 = (char *)(unaff_EBP + -0xa4);
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          puStack_c4 = (undefined1 *)0x5ec05f;
          FUN_0040263d();
          puStack_c4 = (undefined1 *)0x5ec066;
          iStack_bc = FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          pcStack_c0 = (char *)0x5ec070;
          iStack_bc = FUN_004343c5();
          piStack_b8 = (int *)0xffffffff;
          *(undefined4 *)(unaff_EBP + -0x2c) = 0;
          pcStack_c0 = (char *)0x5ec080;
          FUN_00454081();
          piStack_b8 = (int *)(unaff_EBP + -0xa4);
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          iStack_bc = 0x5ec090;
          piStack_b8 = (int *)FUN_00402bc3();
          if ((int)piStack_b8 < 0) {
            iStack_bc = 0x5ec09b;
            FUN_00878dfb();
          }
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
          pcVar7 = *(char **)(unaff_EBP + -0x2c);
          *(undefined1 *)(unaff_EBP + -4) = 0x26;
          if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
            pcVar7 = *(char **)(unaff_EBP + -0x18);
          }
          *(char **)(unaff_EBP + -0x30) = pcVar7;
          if (*(int *)(unaff_EBP + -0x28) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(*(int *)(unaff_EBP + -0x28) + -4);
          }
          piStack_b8 = (int *)0xc2e;
          iStack_bc = unaff_EBP + -0x34;
          pcStack_c0 = (char *)0x5ec0d1;
          puVar8 = (undefined4 *)FUN_00679d22();
          piStack_b8 = *(int **)(unaff_EBP + -0x30);
          pcStack_c0 = (char *)*puVar8;
          puStack_c4 = (undefined1 *)(unaff_EBP + -0x24);
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          iStack_c8 = 0x5ec0e5;
          iStack_bc = iVar3;
          FUN_00434e21();
          *(undefined1 *)(unaff_EBP + -4) = 0x26;
          piStack_b8 = (int *)0x5ec0f4;
          FUN_00414ebb();
          iStack_bc = *(int *)(unaff_EBP + -0x24);
          if (iStack_bc == 0) {
            piStack_b8 = (int *)0x0;
          }
          else {
            piStack_b8 = *(int **)(iStack_bc + -4);
          }
          pcStack_c0 = (char *)0x5ec10c;
          FUN_0045efbb();
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          piStack_b8 = (int *)0x5ec118;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          piStack_b8 = (int *)0x5ec124;
          FUN_00414ebb();
          piStack_b8 = *(int **)(unaff_EBP + -0x20);
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          if (piStack_b8 != (int *)0x0) {
            iStack_bc = 0x5ec135;
            (**(code **)(*piStack_b8 + 8))();
          }
        }
        piStack_b8 = (int *)0x69c;
        iStack_bc = 0x5ec144;
        iVar3 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x10) = iVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          piStack_b8 = (int *)0x5ec156;
          iVar3 = FUN_007e62e9();
        }
        uVar5 = -(uint)(iVar3 != 0) & iVar3 + 8U;
        *(uint *)(unaff_EBP + -0x44) = -(uint)(uVar5 != 0) & uVar5 - 8;
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        piStack_b8 = (int *)0x5ec17d;
        FUN_004c26c4();
        iVar3 = *(int *)(unaff_EBP + -0x28);
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        if (((iVar3 == 0) || (pcStack_c0 = extraout_ECX_01, *(int *)(iVar3 + -4) == 0)) &&
           ((pcStack_c0 = *(char **)(unaff_EBP + -0x18), pcStack_c0 == (char *)0x0 ||
            (*pcStack_c0 == '\0')))) {
          piStack_b8 = (int *)0x0;
          iStack_bc = 0;
          puStack_c4 = (undefined1 *)(unaff_EBP + -0x14);
          *(char ***)(unaff_EBP + -0x10) = &pcStack_c0;
          iStack_c8 = 0x5ec1a9;
          FUN_00450368();
          puStack_c4 = (undefined1 *)**(undefined4 **)(*(int *)(unaff_EBP + -0x58) + 0x98);
          iStack_c8 = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0x29;
          FUN_004c2677();
          FUN_007eddac();
          piStack_b8 = (int *)0x0;
          iStack_bc = 0;
          pcStack_c0 = (char *)0x5ec1d2;
          FUN_007edf11();
          piStack_b8 = (int *)0x5ec1da;
          FUN_007e6e3c();
          piStack_b8 = (int *)0x5ec1e2;
          FUN_004bc6a2();
        }
        else if ((iVar3 == 0) || (*(int *)(iVar3 + -4) == 0)) {
          piStack_b8 = (int *)0x0;
          iStack_bc = 0;
          pcStack_c0 = (char *)0x36;
          puStack_c4 = (undefined1 *)0x5ec1fc;
          FUN_0060142b();
          piStack_b8 = *(int **)(*(int *)(unaff_EBP + -0x58) + 0x94);
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          iStack_bc = 0x5ec211;
          FUN_00457d37();
          piStack_b8 = (int *)0x5ec21e;
          puVar4 = (undefined2 *)(**(code **)(*(int *)(DAT_00978358 + 4) + 0x10))();
          piStack_b8 = (int *)CONCAT22((short)((uint)puVar4 >> 0x10),*puVar4);
          iStack_bc = 0x5ec22a;
          FUN_0045d247();
          piStack_b8 = (int *)0x5ec237;
          iVar3 = (**(code **)(*(int *)(DAT_00978358 + 4) + 0x10))();
          piStack_b8 = (int *)CONCAT22((short)((uint)iVar3 >> 0x10),*(undefined2 *)(iVar3 + 4));
          iStack_bc = 0x5ec244;
          FUN_0045d247();
          piStack_b8 = (int *)(unaff_EBP + -0x40);
          iStack_bc = 0x5ec253;
          FUN_004751b2();
          *(undefined1 *)(unaff_EBP + -4) = 0x29;
LAB_005ec435:
          piStack_b8 = (int *)0x5ec43a;
          FUN_0045ebca();
        }
        else {
          piStack_b8 = (int *)0x0;
          iStack_bc = 0;
          puStack_c4 = (undefined1 *)(unaff_EBP + -0x14);
          *(char ***)(unaff_EBP + -0x10) = &pcStack_c0;
          iStack_c8 = 0x5ec270;
          FUN_00450368();
          iVar3 = *(int *)(unaff_EBP + -0x58);
          puStack_c4 = (undefined1 *)**(undefined4 **)(iVar3 + 0x98);
          iStack_c8 = 4;
          *(undefined1 *)(unaff_EBP + -4) = 0x29;
          FUN_004c2677();
          FUN_007eddac();
          piStack_b8 = (int *)0x5ec298;
          FUN_007ee0f6();
          piStack_b8 = (int *)0x5ec2a0;
          FUN_007e6e3c();
          piStack_b8 = (int *)0x5ec2a8;
          iVar10 = FUN_004bc6a2();
          if (*(int *)(iVar3 + 0x124) == 0) {
            piStack_b8 = (int *)0x10fe;
            iStack_bc = unaff_EBP + -0x30;
            pcStack_c0 = (char *)0x5ec2c0;
            FUN_00679d22();
            iStack_bc = unaff_EBP + -0x30;
            piStack_b8 = (int *)0xc;
            *(undefined1 *)(unaff_EBP + -4) = 0x2d;
            pcStack_c0 = (char *)0x5ec2cf;
            FUN_00471102();
            *(undefined1 *)(unaff_EBP + -4) = 0x29;
            piStack_b8 = (int *)0x5ec2dd;
            FUN_00414ebb();
          }
          else if (iVar10 == 1) {
            iVar10 = *(int *)(unaff_EBP + -0x28);
            uVar5 = *(uint *)(*(int *)(unaff_EBP + -0x44) + 0xd8);
            if ((iVar10 == 0) || (*(uint *)(iVar10 + -4) <= uVar5)) {
              piStack_b8 = (int *)0x0;
              iStack_bc = 0;
              pcStack_c0 = (char *)0x36;
              puStack_c4 = (undefined1 *)0x5ec3da;
              FUN_0060142b();
              piStack_b8 = *(int **)(iVar3 + 0x94);
              *(undefined1 *)(unaff_EBP + -4) = 0x2e;
              iStack_bc = 0x5ec3ec;
              FUN_00457d37();
              piStack_b8 = (int *)0x5ec3f9;
              puVar4 = (undefined2 *)(**(code **)(*(int *)(DAT_00978358 + 4) + 0x10))();
              piStack_b8 = (int *)CONCAT22((short)((uint)puVar4 >> 0x10),*puVar4);
              iStack_bc = 0x5ec405;
              FUN_0045d247();
              piStack_b8 = (int *)0x5ec412;
              iVar3 = (**(code **)(*(int *)(DAT_00978358 + 4) + 0x10))();
              piStack_b8 = (int *)CONCAT22((short)((uint)iVar3 >> 0x10),*(undefined2 *)(iVar3 + 4));
              iStack_bc = 0x5ec41f;
              FUN_0045d247();
              piStack_b8 = (int *)(unaff_EBP + -0x40);
              iStack_bc = 0x5ec42e;
              FUN_004751b2();
              *(undefined1 *)(unaff_EBP + -4) = 0x29;
              goto LAB_005ec435;
            }
            sVar1 = *(short *)(iVar10 + uVar5 * 2);
            iVar2 = *(int *)(iVar3 + 0xbc);
            *(undefined4 *)(unaff_EBP + -0x1c) = 0;
            if (((iVar2 != 0) && (*(int *)(iVar2 + -4) != 0)) &&
               (psVar9 = (short *)(iVar2 + -2 + *(int *)(iVar2 + -4) * 2), psVar9 != (short *)0x0))
            {
              while (*psVar9 != sVar1) {
                if ((psVar9 <= *(short **)(iVar3 + 0xbc)) ||
                   (psVar9 = psVar9 + -1, psVar9 == (short *)0x0)) goto LAB_005ec344;
              }
              *(undefined4 *)(unaff_EBP + -0x1c) = 1;
            }
LAB_005ec344:
            iVar2 = *(int *)(iVar3 + 0xc0);
            if ((iVar2 != 0) &&
               ((*(int *)(iVar2 + -4) != 0 &&
                (psVar9 = (short *)(iVar2 + -2 + *(int *)(iVar2 + -4) * 2), psVar9 != (short *)0x0))
               )) {
              while (*psVar9 != sVar1) {
                if ((psVar9 <= *(short **)(iVar3 + 0xc0)) ||
                   (psVar9 = psVar9 + -1, psVar9 == (short *)0x0)) goto LAB_005ec379;
              }
              *(undefined4 *)(unaff_EBP + -0x1c) = 1;
            }
LAB_005ec379:
            iVar2 = *(int *)(iVar3 + 0xc4);
            if ((iVar2 != 0) &&
               ((*(int *)(iVar2 + -4) != 0 &&
                (psVar9 = (short *)(iVar2 + -2 + *(int *)(iVar2 + -4) * 2), psVar9 != (short *)0x0))
               )) {
              while (*psVar9 != sVar1) {
                if ((psVar9 <= *(short **)(iVar3 + 0xc4)) ||
                   (psVar9 = psVar9 + -1, psVar9 == (short *)0x0)) goto LAB_005ec3ae;
              }
              *(undefined4 *)(unaff_EBP + -0x1c) = 1;
            }
LAB_005ec3ae:
            if (*(int *)(unaff_EBP + -0x1c) != 0) {
              piStack_b8 = (int *)0x0;
              iStack_bc = **(int **)(iVar3 + 0x98);
              puStack_c4 = (undefined1 *)0x5ec3cc;
              pcStack_c0 = (char *)CONCAT22((short)((uint)iVar10 >> 0x10),sVar1);
              FUN_0084b9c7();
            }
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        piStack_b8 = (int *)0x5ec446;
        FUN_004c26e1();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        piStack_b8 = (int *)0x5ec452;
        FUN_005ee767();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_b8 = (int *)0x5ec4a4;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piStack_b8 = (int *)0x5ec4b0;
      FUN_00414ebb();
      goto LAB_005ec4b0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (pcVar7 != (char *)0x0) {
      piStack_b8 = (int *)(pcVar7 + -0xc);
      iStack_bc = 0x5ebbb3;
      FUN_00434e38();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    piStack_b8 = (int *)(*(int *)(unaff_EBP + -0x18) + -0xc);
    iStack_bc = 0x5ebbcc;
    FUN_00434e38();
  }
LAB_005ec4b0:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


