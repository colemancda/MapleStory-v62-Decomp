/* ptr_006de0e8 - 0x006de0e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall ptr_006de0e8(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  short *psVar9;
  char *pcVar10;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_20;
  int iStack_1c;
  int *piStack_18;
  undefined1 *puStack_14;
  undefined4 uVar11;
  
  FUN_006ddeb7();
  if (param_1[0x1a4] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1[0x1a4] + -4);
  }
  if (iVar4 == 0) {
LAB_006de1ca:
    if (param_1[0x1a5] == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1[0x1a5] + -4);
    }
    if (iVar4 != 0) {
      if (param_1[0x19d] == 0) {
        puStack_14 = (undefined1 *)0x6de1fb;
        FUN_00878dfb();
      }
      iVar4 = param_1[0x19d];
      *(int *)(unaff_EBP + -0x24) = iVar4;
      if (iVar4 == 0) {
        puStack_14 = (undefined1 *)0x6de20e;
        FUN_00878dfb();
      }
      FUN_0040e53d();
      puStack_14 = (undefined1 *)0x6de220;
      puStack_14 = (undefined1 *)FUN_0040e48b();
      piStack_18 = (int *)0x0;
      iStack_1c = 0;
      iStack_20 = unaff_EBP + -0x50;
      (*DAT_0097b504)();
      (*DAT_0097b54c)(unaff_EBP + -0x50,(param_1[0x15d] - param_1[0x168]) / 2,param_1[0x169] + 1);
      iVar4 = (*DAT_0097b57c)(unaff_EBP + -0x50,*(undefined4 *)(unaff_EBP + 8),
                              *(undefined4 *)(unaff_EBP + 0xc));
      if (iVar4 != 0) {
        piStack_18 = param_1 + 0x1a5;
        *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_14;
        iStack_1c = 0x6de278;
        FUN_00450368();
        goto LAB_006de19b;
      }
    }
    if (param_1[0x1a6] == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1[0x1a6] + -4);
    }
    if (iVar4 == 0) {
LAB_006de34e:
      if (param_1[0x1a7] == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1[0x1a7] + -4);
      }
      if (iVar4 != 0) {
        if (param_1[0x1a2] == 0) {
          puStack_14 = (undefined1 *)0x6de379;
          FUN_00878dfb();
        }
        iVar4 = param_1[0x1a2];
        *(int *)(unaff_EBP + -0x24) = iVar4;
        if (iVar4 == 0) {
          puStack_14 = (undefined1 *)0x6de390;
          FUN_00878dfb();
        }
        FUN_0040e53d();
        puStack_14 = (undefined1 *)0x6de3a6;
        puStack_14 = (undefined1 *)FUN_0040e48b();
        piStack_18 = (int *)0x0;
        iStack_1c = 0;
        iStack_20 = unaff_EBP + -0x50;
        (*DAT_0097b504)();
        if (param_1[0x1a2] == 0) {
          FUN_00878dfb(0x80004003);
        }
        iVar4 = FUN_0040e53d();
        (*DAT_0097b54c)(unaff_EBP + -0x50,param_1[0x168] + 1,
                        ((uint)(param_1[0x15e] - iVar4) >> 1) + param_1[0x169]);
        iVar4 = *(int *)(unaff_EBP + 8);
        iVar5 = (*DAT_0097b57c)(unaff_EBP + -0x50,iVar4,*(undefined4 *)(unaff_EBP + 0xc));
        if (iVar5 != 0) {
          piStack_18 = param_1 + 0x1a7;
          *(undefined1 ***)(unaff_EBP + 8) = &puStack_14;
          iStack_1c = 0x6de41b;
          FUN_00450368();
          goto LAB_006de5c7;
        }
      }
      if (param_1[0x1a9] == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1[0x1a9] + -4);
      }
      if (iVar4 != 0) {
        if (param_1[0x19f] == 0) {
          puStack_14 = (undefined1 *)0x6de44b;
          FUN_00878dfb();
        }
        iVar4 = param_1[0x19f];
        *(int *)(unaff_EBP + -0x24) = iVar4;
        if (iVar4 == 0) {
          puStack_14 = (undefined1 *)0x6de462;
          FUN_00878dfb();
        }
        FUN_0040e53d();
        puStack_14 = (undefined1 *)0x6de478;
        puStack_14 = (undefined1 *)FUN_0040e48b();
        piStack_18 = (int *)0x0;
        iStack_1c = 0;
        iStack_20 = unaff_EBP + -0x50;
        (*DAT_0097b504)();
        if (param_1[0x19f] == 0) {
          FUN_00878dfb(0x80004003);
        }
        iVar4 = FUN_0040e53d();
        (*DAT_0097b54c)(unaff_EBP + -0x50,param_1[0x168] + 1,
                        ((param_1[0x169] + param_1[0x15e]) - iVar4) + -1);
        iVar4 = *(int *)(unaff_EBP + 8);
        iVar5 = (*DAT_0097b57c)(unaff_EBP + -0x50,iVar4,*(undefined4 *)(unaff_EBP + 0xc));
        if (iVar5 != 0) {
          piStack_18 = param_1 + 0x1a9;
          *(undefined1 ***)(unaff_EBP + 8) = &puStack_14;
          iStack_1c = 0x6de4ec;
          FUN_00450368();
          goto LAB_006de5c7;
        }
      }
      if (param_1[0x1aa] == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1[0x1aa] + -4);
      }
      if (iVar4 != 0) {
        if (param_1[0x1a0] == 0) {
          puStack_14 = (undefined1 *)0x6de51c;
          FUN_00878dfb();
        }
        iVar4 = param_1[0x1a0];
        *(int *)(unaff_EBP + -0x24) = iVar4;
        if (iVar4 == 0) {
          puStack_14 = (undefined1 *)0x6de533;
          FUN_00878dfb();
        }
        FUN_0040e53d();
        puStack_14 = (undefined1 *)0x6de549;
        puStack_14 = (undefined1 *)FUN_0040e48b();
        piStack_18 = (int *)0x0;
        iStack_1c = 0;
        iStack_20 = unaff_EBP + -0x50;
        (*DAT_0097b504)();
        if (param_1[0x1a0] == 0) {
          FUN_00878dfb(0x80004003);
        }
        iVar4 = FUN_0040e53d();
        (*DAT_0097b54c)(unaff_EBP + -0x50,(param_1[0x15d] - param_1[0x168]) / 2,
                        ((param_1[0x169] + param_1[0x15e]) - iVar4) + -1);
        iVar4 = *(int *)(unaff_EBP + 8);
        iVar5 = (*DAT_0097b57c)(unaff_EBP + -0x50,iVar4,*(undefined4 *)(unaff_EBP + 0xc));
        if (iVar5 != 0) {
          piStack_18 = param_1 + 0x1aa;
          *(undefined1 ***)(unaff_EBP + 8) = &puStack_14;
          iStack_1c = 0x6de5c7;
          FUN_00450368();
          goto LAB_006de5c7;
        }
      }
      if (param_1[0x1ab] == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1[0x1ab] + -4);
      }
      if (iVar4 != 0) {
        if (param_1[0x1a1] == 0) {
          puStack_14 = (undefined1 *)0x6de615;
          FUN_00878dfb();
        }
        iVar4 = param_1[0x1a1];
        *(int *)(unaff_EBP + -0x24) = iVar4;
        if (iVar4 == 0) {
          puStack_14 = (undefined1 *)0x6de62c;
          FUN_00878dfb();
        }
        FUN_0040e53d();
        puStack_14 = (undefined1 *)0x6de642;
        puStack_14 = (undefined1 *)FUN_0040e48b();
        piStack_18 = (int *)0x0;
        iStack_1c = 0;
        iStack_20 = unaff_EBP + -0x50;
        (*DAT_0097b504)();
        if (param_1[0x1a1] == 0) {
          FUN_00878dfb(0x80004003);
        }
        iVar4 = param_1[0x1a1];
        *(int *)(unaff_EBP + -0x24) = iVar4;
        if (iVar4 == 0) {
          FUN_00878dfb(0x80004003);
        }
        iVar4 = FUN_0040e53d();
        iVar4 = FUN_0040e48b(((param_1[0x169] + param_1[0x15e]) - iVar4) + -1);
        (*DAT_0097b54c)(unaff_EBP + -0x50,((param_1[0x168] + param_1[0x15d]) - iVar4) + -1);
        iVar4 = (*DAT_0097b57c)(unaff_EBP + -0x50,*(undefined4 *)(unaff_EBP + 8),
                                *(undefined4 *)(unaff_EBP + 0xc));
        if (iVar4 != 0) {
          piStack_18 = param_1 + 0x1ab;
          *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_14;
          iStack_1c = 0x6de6de;
          FUN_00450368();
          goto LAB_006de19b;
        }
      }
      if (param_1[0x1a8] == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1[0x1a8] + -4);
      }
      if (iVar4 == 0) {
LAB_006de7dd:
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        do {
          if ((param_1[0x16d] == 0) ||
             (*(uint *)(param_1[0x16d] + -4) <= *(uint *)(unaff_EBP + -0x10))) goto LAB_006de8e5;
          puStack_14 = (undefined1 *)0x5;
          piStack_18 = (int *)0x0;
          iStack_1c = 0;
          iStack_20 = unaff_EBP + -0x50;
          (*DAT_0097b504)();
          piVar6 = (int *)(param_1[0x16d] + *(int *)(unaff_EBP + -0x10) * 8);
          (*DAT_0097b54c)(unaff_EBP + -0x50,
                          param_1[0x168] +
                          ((param_1[0x163] + *piVar6 >> ((byte)param_1[0x165] & 0x1f)) -
                          param_1[0x16a]) + -2,
                          param_1[0x169] +
                          ((piVar6[1] + param_1[0x164] >> ((byte)param_1[0x165] & 0x1f)) -
                          param_1[0x16b]) + -5);
          iVar4 = (*DAT_0097b57c)(unaff_EBP + -0x50,*(undefined4 *)(unaff_EBP + 8),
                                  *(undefined4 *)(unaff_EBP + 0xc));
          if (iVar4 != 0) {
            puStack_14 = (undefined1 *)(unaff_EBP + -0x10);
            piStack_18 = (int *)0x6de885;
            FUN_006defab();
            puStack_14 = (undefined1 *)0x6de88d;
            iVar4 = FUN_005f3a71();
            if (*(int *)(iVar4 + 0x18) != 0) goto LAB_006de8e5;
            puStack_14 = (undefined1 *)0x6de8a3;
            iVar4 = FUN_005f1350();
            if ((iVar4 == 0) || (*(int *)(iVar4 + 0x124) != 0)) {
              puStack_14 = (undefined1 *)0x6de8c1;
              iVar4 = (**(code **)(*param_1 + 0x30))();
              puStack_14 = (undefined1 *)(iVar4 + 0x14 + *(int *)(unaff_EBP + 0xc));
              piStack_18 = (int *)0x6de8d0;
              iVar4 = (**(code **)(*param_1 + 0x2c))();
              piStack_18 = (int *)(iVar4 + 0x14 + *(int *)(unaff_EBP + 8));
              iStack_1c = 0x6de8e0;
              FUN_0074d755();
              goto LAB_006ded8a;
            }
          }
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        } while( true );
      }
      if (param_1[0x1a3] == 0) {
        puStack_14 = (undefined1 *)0x6de70e;
        FUN_00878dfb();
      }
      iVar4 = param_1[0x1a3];
      *(int *)(unaff_EBP + -0x24) = iVar4;
      if (iVar4 == 0) {
        puStack_14 = (undefined1 *)0x6de725;
        FUN_00878dfb();
      }
      FUN_0040e53d();
      puStack_14 = (undefined1 *)0x6de73b;
      puStack_14 = (undefined1 *)FUN_0040e48b();
      piStack_18 = (int *)0x0;
      iStack_1c = 0;
      iStack_20 = unaff_EBP + -0x50;
      (*DAT_0097b504)();
      if (param_1[0x1a3] == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar4 = param_1[0x1a3];
      *(int *)(unaff_EBP + -0x24) = iVar4;
      if (iVar4 == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar4 = FUN_0040e53d();
      iVar4 = FUN_0040e48b(((uint)(param_1[0x15e] - iVar4) >> 1) + param_1[0x169]);
      (*DAT_0097b54c)(unaff_EBP + -0x50,((param_1[0x168] + param_1[0x15d]) - iVar4) + -1);
      iVar4 = (*DAT_0097b57c)(unaff_EBP + -0x50,*(undefined4 *)(unaff_EBP + 8),
                              *(undefined4 *)(unaff_EBP + 0xc));
      if (iVar4 == 0) goto LAB_006de7dd;
      piStack_18 = param_1 + 0x1a8;
      *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_14;
      iStack_1c = 0x6de7d8;
      FUN_00450368();
      goto LAB_006de19b;
    }
    if (param_1[0x19e] == 0) {
      puStack_14 = (undefined1 *)0x6de2a8;
      FUN_00878dfb();
    }
    iVar4 = param_1[0x19e];
    *(int *)(unaff_EBP + -0x24) = iVar4;
    if (iVar4 == 0) {
      puStack_14 = (undefined1 *)0x6de2bf;
      FUN_00878dfb();
    }
    FUN_0040e53d();
    puStack_14 = (undefined1 *)0x6de2d5;
    puStack_14 = (undefined1 *)FUN_0040e48b();
    piStack_18 = (int *)0x0;
    iStack_1c = 0;
    iStack_20 = unaff_EBP + -0x50;
    (*DAT_0097b504)();
    if (param_1[0x19e] == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar4 = FUN_0040e48b(param_1[0x169] + 1);
    (*DAT_0097b54c)(unaff_EBP + -0x50,((param_1[0x168] + param_1[0x15d]) - iVar4) + -1);
    iVar4 = *(int *)(unaff_EBP + 8);
    iVar5 = (*DAT_0097b57c)(unaff_EBP + -0x50,iVar4,*(undefined4 *)(unaff_EBP + 0xc));
    if (iVar5 == 0) goto LAB_006de34e;
    piStack_18 = param_1 + 0x1a6;
    *(undefined1 ***)(unaff_EBP + 8) = &puStack_14;
    iStack_1c = 0x6de349;
    FUN_00450368();
LAB_006de5c7:
    iVar5 = *param_1;
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piStack_18 = (int *)0x6de5d2;
    iVar5 = (**(code **)(iVar5 + 0x30))();
    piStack_18 = (int *)(iVar5 + 0x14 + *(int *)(unaff_EBP + 0xc));
    iStack_1c = 0x6de5e1;
    iVar5 = (**(code **)(*param_1 + 0x2c))();
    iStack_1c = iVar5 + 0x14 + iVar4;
  }
  else {
    if (param_1[0x19c] == 0) {
      puStack_14 = (undefined1 *)0x6de128;
      FUN_00878dfb();
    }
    iVar4 = param_1[0x19c];
    *(int *)(unaff_EBP + -0x24) = iVar4;
    if (iVar4 == 0) {
      puStack_14 = (undefined1 *)0x6de13b;
      FUN_00878dfb();
    }
    FUN_0040e53d();
    puStack_14 = (undefined1 *)0x6de14d;
    puStack_14 = (undefined1 *)FUN_0040e48b();
    piStack_18 = (int *)0x0;
    iStack_1c = 0;
    iStack_20 = unaff_EBP + -0x50;
    (*DAT_0097b504)();
    (*DAT_0097b54c)(unaff_EBP + -0x50,param_1[0x168] + 1,param_1[0x169] + 1);
    iVar4 = (*DAT_0097b57c)(unaff_EBP + -0x50,*(undefined4 *)(unaff_EBP + 8),
                            *(undefined4 *)(unaff_EBP + 0xc));
    if (iVar4 == 0) goto LAB_006de1ca;
    piStack_18 = param_1 + 0x1a4;
    *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_14;
    iStack_1c = 0x6de19b;
    FUN_00450368();
LAB_006de19b:
    iVar4 = *param_1;
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piStack_18 = (int *)0x6de1a6;
    iVar4 = (**(code **)(iVar4 + 0x30))();
    piStack_18 = (int *)(iVar4 + 0x14 + *(int *)(unaff_EBP + 0xc));
    iStack_1c = 0x6de1b5;
    iVar4 = (**(code **)(*param_1 + 0x2c))();
    iStack_1c = iVar4 + 0x14 + *(int *)(unaff_EBP + 8);
  }
  iStack_20 = 0x6de1c5;
  FUN_0074d8fb();
LAB_006ded8a:
  uVar11 = 1;
LAB_006deac7:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar11;
LAB_006de8e5:
  iVar4 = *(int *)(DAT_009791f0 + 0x28);
  *(int *)(unaff_EBP + -0x1c) = iVar4;
  while (iVar4 != 0) {
    puStack_14 = (undefined1 *)0x5;
    piStack_18 = (int *)0x0;
    iStack_1c = 0;
    iStack_20 = unaff_EBP + -0x50;
    (*DAT_0097b504)();
    iVar4 = *(int *)(unaff_EBP + -0x1c);
    uVar11 = *(undefined4 *)(iVar4 + 4);
    *(int *)(unaff_EBP + -0x24) = iVar4;
    iVar4 = *(int *)(iVar4 + 0x10);
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar11;
    piVar6 = (int *)(**(code **)(*(int *)(iVar4 + 4) + 0x10))();
    iVar4 = *piVar6;
    iVar5 = param_1[0x163];
    iVar2 = param_1[0x165];
    iVar3 = param_1[0x16a];
    iVar7 = (**(code **)(*(int *)(*(int *)(*(int *)(unaff_EBP + -0x24) + 0x10) + 4) + 0x10))();
    (*DAT_0097b54c)(unaff_EBP + -0x50,
                    ((iVar4 + iVar5 >> ((byte)iVar2 & 0x1f)) - iVar3) + -2 + param_1[0x168],
                    ((*(int *)(iVar7 + 4) + param_1[0x164] >> ((byte)param_1[0x165] & 0x1f)) -
                    param_1[0x16b]) + -5 + param_1[0x169]);
    iVar4 = (*DAT_0097b57c)(unaff_EBP + -0x50,*(undefined4 *)(unaff_EBP + 8),
                            *(undefined4 *)(unaff_EBP + 0xc));
    if (iVar4 != 0) {
      puStack_14 = (undefined1 *)0x6de9d3;
      FUN_006ded92();
      iVar4 = *param_1;
      *(undefined4 *)(unaff_EBP + -4) = 8;
      puStack_14 = (undefined1 *)0x6de9e3;
      iVar4 = (**(code **)(iVar4 + 0x30))();
      puStack_14 = (undefined1 *)(iVar4 + 0x14 + *(int *)(unaff_EBP + 0xc));
      piStack_18 = (int *)0x6de9f2;
      iVar4 = (**(code **)(*param_1 + 0x2c))();
      piStack_18 = (int *)(iVar4 + 0x14 + *(int *)(unaff_EBP + 8));
      iStack_1c = 0x6dea02;
      FUN_0074d755();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      goto LAB_006ded8a;
    }
    iVar4 = *(int *)(unaff_EBP + -0x1c);
  }
  iVar4 = FUN_00429303();
  if (iVar4 != 0) {
    FUN_00429303();
    FUN_004f162d();
    iVar4 = DAT_00979264;
    *(int *)(unaff_EBP + -0x24) = DAT_00979264;
    if (*(int *)(iVar4 + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(int *)(iVar4 + 4) + -4);
    }
    iVar4 = iVar4 + -1;
    *(int *)(unaff_EBP + -0x1c) = iVar4;
    while (-1 < iVar4) {
      iVar4 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x24) + 4) + 4 +
                      *(int *)(unaff_EBP + -0x1c) * 8);
      if ((((*(int *)(iVar4 + 8) == 2) || (*(int *)(iVar4 + 8) == 7)) &&
          (*(int *)(iVar4 + 0x14) != -1)) && (*(int *)(iVar4 + 0x1c) == 0)) {
        puStack_14 = (undefined1 *)0x5;
        piStack_18 = (int *)0x0;
        iStack_1c = 0;
        iStack_20 = unaff_EBP + -0x60;
        (*DAT_0097b504)();
        (*DAT_0097b54c)(unaff_EBP + -0x60,
                        param_1[0x168] +
                        ((*(int *)(iVar4 + 0xc) + param_1[0x163] >> ((byte)param_1[0x165] & 0x1f)) -
                        param_1[0x16a]) + -2,
                        param_1[0x169] +
                        ((*(int *)(iVar4 + 0x10) + param_1[0x164] >> ((byte)param_1[0x165] & 0x1f))
                        - param_1[0x16b]) + -5);
        iVar5 = (*DAT_0097b57c)(unaff_EBP + -0x60,*(undefined4 *)(unaff_EBP + 8),
                                *(undefined4 *)(unaff_EBP + 0xc));
        if (iVar5 != 0) {
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
          *(undefined4 *)(unaff_EBP + -4) = 9;
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 10;
          uVar11 = FUN_00429303();
          *(undefined4 *)(unaff_EBP + -0x24) = uVar11;
          puStack_14 = (undefined1 *)(unaff_EBP + -0x28);
          piStack_18 = (int *)0x6deb0a;
          puVar8 = (undefined4 *)FUN_00679d86();
          *(undefined4 *)(unaff_EBP + -0x1c) = *puVar8;
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          FUN_004f162d();
          puStack_14 = *(undefined1 **)(unaff_EBP + -0x1c);
          piStack_18 = (int *)(unaff_EBP + -0x20);
          iStack_1c = 0x6deb2e;
          FUN_0041354c();
          *(undefined1 *)(unaff_EBP + -4) = 10;
          FUN_00402676();
          puStack_14 = (undefined1 *)0x6deb47;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
          puStack_14 = (undefined1 *)(unaff_EBP + -0x50);
          piStack_18 = (int *)0x6deb55;
          iVar5 = FUN_00402e32();
          if (iVar5 < 0) {
            puStack_14 = (undefined1 *)0x6deb61;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          puStack_14 = (undefined1 *)0x6deb6f;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
          puStack_14 = (undefined1 *)(unaff_EBP + -0x40);
          piStack_18 = (int *)0x6deb7d;
          iVar5 = FUN_00402e32();
          if (iVar5 < 0) {
            puStack_14 = (undefined1 *)0x6deb89;
            FUN_00878dfb();
          }
          puStack_14 = (undefined1 *)0x0;
          piStack_18 = (int *)(unaff_EBP + -0x50);
          iStack_1c = unaff_EBP + -0x40;
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          iStack_20 = 0x6deb9f;
          uVar11 = FUN_00411641();
          *(int **)(unaff_EBP + -0x30) = &iStack_20;
          iStack_20 = extraout_ECX;
          FUN_004033a1(uVar11);
          iVar5 = unaff_EBP + -0x70;
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          FUN_00405a1d(iVar5);
          FUN_00402660();
          FUN_00404a02(iVar5);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          piStack_18 = (int *)0x6debd1;
          iVar5 = FUN_004032b4();
          *(int *)(unaff_EBP + -0x28) = iVar5;
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          if (iVar5 != 0) {
            puStack_14 = (undefined1 *)0x6debe7;
            iVar5 = FUN_00404b30();
            if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
              puStack_14 = (undefined1 *)0x6debf8;
              FUN_00878dfb();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          puStack_14 = (undefined1 *)0x6dec05;
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            puStack_14 = (undefined1 *)0x6dec10;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          puStack_14 = (undefined1 *)0x6dec1d;
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            puStack_14 = (undefined1 *)0x6dec28;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          puStack_14 = (undefined1 *)0x6dec35;
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            puStack_14 = (undefined1 *)0x6dec40;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + -0x18) != 0) {
            iStack_1c = *(undefined4 *)(iVar4 + 4);
            puStack_14 = (undefined1 *)0x0;
            piStack_18 = (int *)0xffffffff;
            iStack_20 = 0;
            (*DAT_0097b4c8)(0);
            FUN_0087a1b0();
            piStack_18 = (int *)0x6dec73;
            puStack_14 = &stack0xfffffff4;
            piStack_18 = (int *)FUN_00449713();
            iStack_1c = 0x6dec79;
            puStack_14 = (undefined1 *)FUN_00456ad5();
            *(undefined1 **)(unaff_EBP + -0x30) = &stack0xfffffff0;
            piStack_18 = (int *)0x6dec86;
            FUN_004033a1();
            puStack_14 = (undefined1 *)(unaff_EBP + -0x80);
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            piStack_18 = (int *)0x6dec96;
            FUN_0040263d();
            piStack_18 = (int *)0x6dec9d;
            psVar9 = (short *)FUN_004048a4();
            sVar1 = *psVar9;
            *(undefined1 *)(unaff_EBP + -4) = 0x15;
            if (sVar1 == 8) {
              puStack_14 = *(undefined1 **)(psVar9 + 4);
            }
            else {
              puStack_14 = &DAT_0097812c;
            }
            piStack_18 = (int *)0x6decbc;
            FUN_00454081();
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            puStack_14 = (undefined1 *)0x6decc9;
            iVar5 = FUN_00402bc3();
            if (iVar5 < 0) {
              puStack_14 = (undefined1 *)0x6decd4;
              FUN_00878dfb();
            }
          }
          pcVar10 = *(char **)(unaff_EBP + -0x14);
          if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
            puStack_14 = (undefined1 *)(unaff_EBP + -0x30);
            piStack_18 = (int *)0x6decf2;
            FUN_00679d22();
            puStack_14 = *(undefined1 **)(iVar4 + 0x14);
            piStack_18 = (int *)(unaff_EBP + -0x2c);
            *(undefined1 *)(unaff_EBP + -4) = 0x16;
            iStack_1c = 0x6ded0a;
            FUN_00550c58();
            *(undefined1 *)(unaff_EBP + -4) = 0x17;
            puStack_14 = (undefined1 *)0x6ded17;
            FUN_00414f8b();
            *(undefined1 *)(unaff_EBP + -4) = 0x16;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            FUN_00414ebb();
            pcVar10 = *(char **)(unaff_EBP + -0x14);
          }
          if ((pcVar10 != (char *)0x0) && (*pcVar10 != '\0')) {
            puStack_14 = (undefined1 *)0x6ded42;
            iVar4 = (**(code **)(*param_1 + 0x30))();
            puStack_14 = (undefined1 *)(iVar4 + 0x14 + *(int *)(unaff_EBP + 0xc));
            piStack_18 = (int *)0x6ded51;
            iVar4 = (**(code **)(*param_1 + 0x2c))();
            piStack_18 = (int *)(iVar4 + 0x14 + *(int *)(unaff_EBP + 8));
            iStack_1c = 0x6ded61;
            FUN_0074d755();
          }
          *(undefined1 *)(unaff_EBP + -4) = 10;
          if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
            puStack_14 = (undefined1 *)0x6ded72;
            (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 9;
          FUN_00414ebb();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00402676();
          goto LAB_006ded8a;
        }
      }
      piVar6 = (int *)(unaff_EBP + -0x1c);
      *piVar6 = *piVar6 + -1;
      iVar4 = *piVar6;
    }
    FUN_0074d6fb();
  }
  uVar11 = 0;
  goto LAB_006deac7;
}


