/* FUN_0040f179 - 0x0040f179 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0040f179(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  uint uVar3;
  int unaff_EBP;
  uint uVar4;
  
  FUN_00879bb8();
  iVar2 = (*DAT_0097b704)();
  iVar1 = *(int *)(extraout_ECX + 0x29c);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  if (59999 < iVar2 - iVar1) {
    *(int *)(extraout_ECX + 0x29c) = iVar2;
    if (DAT_00973a8c == 0) {
      DAT_00973a8c = 0;
      uVar4 = *(uint *)(extraout_ECX + 0x10);
      while (uVar4 != 0) {
        *(uint *)(unaff_EBP + -0x10) = uVar4;
        iVar1 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(uVar4 + 4);
        FUN_00412817();
        iVar2 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x30);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (299999 < *(int *)(unaff_EBP + -0x14) - iVar2) {
          FUN_00413df7(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x34) + 8);
          FUN_00413b6d(*(undefined4 *)(unaff_EBP + -0x10));
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00412829();
        uVar4 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      }
      DAT_00973a8c = 1;
    }
    else if (DAT_00973a8c == 1) {
      uVar4 = *(uint *)(extraout_ECX + 0xd8);
      while (uVar4 != 0) {
        *(uint *)(unaff_EBP + -0x10) = uVar4;
        iVar1 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(uVar4 + 4);
        FUN_00412989();
        iVar2 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x10);
        *(undefined4 *)(unaff_EBP + -4) = 1;
        if (299999 < *(int *)(unaff_EBP + -0x14) - iVar2) {
          FUN_00414855(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x14) + 8);
          FUN_004145cb(*(undefined4 *)(unaff_EBP + -0x10));
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_0041299b();
        uVar4 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      }
      uVar4 = *(uint *)(extraout_ECX + 0x104);
      while (uVar4 != 0) {
        *(uint *)(unaff_EBP + -0x10) = uVar4;
        iVar1 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(uVar4 + 4);
        FUN_004129ea();
        iVar2 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x28);
        *(undefined4 *)(unaff_EBP + -4) = 2;
        if (299999 < *(int *)(unaff_EBP + -0x14) - iVar2) {
          FUN_00414c00(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x2c) + 8);
          FUN_00414976(*(undefined4 *)(unaff_EBP + -0x10));
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004129fc();
        uVar4 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      }
      DAT_00973a8c = 2;
    }
    else if (DAT_00973a8c == 2) {
      uVar4 = *(uint *)(extraout_ECX + 0x148);
      while (uVar4 != 0) {
        *(uint *)(unaff_EBP + -0x10) = uVar4;
        iVar1 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
        *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(uVar4 + 4);
        FUN_00412a73();
        iVar2 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x10);
        *(undefined4 *)(unaff_EBP + -4) = 3;
        if (299999 < *(int *)(unaff_EBP + -0x14) - iVar2) {
          FUN_0041542b(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x14) + 8);
          FUN_004151a1(*(undefined4 *)(unaff_EBP + -0x10));
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00412a85();
        uVar4 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      }
      uVar4 = *(uint *)(extraout_ECX + 0x174);
      while (uVar4 != 0) {
        *(uint *)(unaff_EBP + -0x10) = uVar4;
        iVar1 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
        uVar3 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
        iVar1 = *(int *)(uVar4 + 4);
        *(int *)(unaff_EBP + -0x18) = iVar1;
        iVar2 = 0;
        if (iVar1 != 0) {
          InterlockedIncrement((LONG *)(iVar1 + 4));
          iVar2 = *(int *)(unaff_EBP + -0x18);
        }
        iVar1 = *(int *)(iVar2 + 0x28);
        *(undefined4 *)(unaff_EBP + -4) = 4;
        uVar4 = uVar3;
        if (*(int *)(unaff_EBP + -0x14) - iVar1 < 300000) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00412ae6();
        }
        else {
          FUN_004157d6(*(int *)(iVar2 + 0x2c) + 8);
          FUN_0041554c(*(undefined4 *)(unaff_EBP + -0x10));
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int *)(unaff_EBP + -0x18) != 0) {
            FUN_00413087(0);
            *(undefined4 *)(unaff_EBP + -0x18) = 0;
          }
        }
      }
      DAT_00973a8c = 3;
    }
    else if (DAT_00973a8c == 3) {
      uVar4 = *(uint *)(extraout_ECX + 0x1a0);
      while (uVar4 != 0) {
        *(uint *)(unaff_EBP + -0x10) = uVar4;
        iVar1 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
        uVar3 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
        iVar1 = *(int *)(uVar4 + 4);
        *(int *)(unaff_EBP + -0x18) = iVar1;
        iVar2 = 0;
        if (iVar1 != 0) {
          InterlockedIncrement((LONG *)(iVar1 + 4));
          iVar2 = *(int *)(unaff_EBP + -0x18);
        }
        iVar1 = *(int *)(iVar2 + 0x10);
        *(undefined4 *)(unaff_EBP + -4) = 5;
        if (*(int *)(unaff_EBP + -0x14) - iVar1 < 300000) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        }
        else {
          FUN_00415b81(*(int *)(iVar2 + 0x14) + 8);
          FUN_004158f7(*(undefined4 *)(unaff_EBP + -0x10));
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar2 = *(int *)(unaff_EBP + -0x18);
        }
        uVar4 = uVar3;
        if (iVar2 != 0) {
          FUN_004130b5(0);
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
        }
      }
      uVar4 = *(uint *)(extraout_ECX + 0x1cc);
      while (uVar4 != 0) {
        *(uint *)(unaff_EBP + -0x10) = uVar4;
        iVar1 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
        uVar3 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
        iVar1 = *(int *)(uVar4 + 4);
        *(int *)(unaff_EBP + -0x18) = iVar1;
        iVar2 = 0;
        if (iVar1 != 0) {
          InterlockedIncrement((LONG *)(iVar1 + 4));
          iVar2 = *(int *)(unaff_EBP + -0x18);
        }
        iVar1 = *(int *)(iVar2 + 0x2c);
        *(undefined4 *)(unaff_EBP + -4) = 6;
        if (*(int *)(unaff_EBP + -0x14) - iVar1 < 300000) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        }
        else {
          FUN_00415f2c(*(int *)(iVar2 + 0x30) + 8);
          FUN_00415ca2(*(undefined4 *)(unaff_EBP + -0x10));
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar2 = *(int *)(unaff_EBP + -0x18);
        }
        uVar4 = uVar3;
        if (iVar2 != 0) {
          FUN_004130e3(0);
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
        }
      }
      DAT_00973a8c = 4;
    }
    else if (DAT_00973a8c == 4) {
      uVar4 = *(uint *)(extraout_ECX + 0x1f8);
      while (uVar4 != 0) {
        *(uint *)(unaff_EBP + -0x10) = uVar4;
        iVar1 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
        uVar3 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
        iVar1 = *(int *)(uVar4 + 4);
        *(int *)(unaff_EBP + -0x18) = iVar1;
        iVar2 = 0;
        if (iVar1 != 0) {
          InterlockedIncrement((LONG *)(iVar1 + 4));
          iVar2 = *(int *)(unaff_EBP + -0x18);
        }
        iVar1 = *(int *)(iVar2 + 0x10);
        *(undefined4 *)(unaff_EBP + -4) = 7;
        if (*(int *)(unaff_EBP + -0x14) - iVar1 < 300000) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        }
        else {
          FUN_004162d7(*(int *)(iVar2 + 0x14) + 8);
          FUN_0041604d(*(undefined4 *)(unaff_EBP + -0x10));
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar2 = *(int *)(unaff_EBP + -0x18);
        }
        uVar4 = uVar3;
        if (iVar2 != 0) {
          FUN_00413111(0);
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
        }
      }
      uVar4 = *(uint *)(extraout_ECX + 0x224);
      while (uVar4 != 0) {
        *(uint *)(unaff_EBP + -0x10) = uVar4;
        iVar1 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
        uVar3 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
        iVar1 = *(int *)(uVar4 + 4);
        *(int *)(unaff_EBP + -0x18) = iVar1;
        iVar2 = 0;
        if (iVar1 != 0) {
          InterlockedIncrement((LONG *)(iVar1 + 4));
          iVar2 = *(int *)(unaff_EBP + -0x18);
        }
        iVar1 = *(int *)(iVar2 + 0x2c);
        *(undefined4 *)(unaff_EBP + -4) = 8;
        if (*(int *)(unaff_EBP + -0x14) - iVar1 < 300000) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        }
        else {
          FUN_00416682(*(int *)(iVar2 + 0x30) + 8);
          FUN_004163f8(*(undefined4 *)(unaff_EBP + -0x10));
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar2 = *(int *)(unaff_EBP + -0x18);
        }
        uVar4 = uVar3;
        if (iVar2 != 0) {
          FUN_0041313f(0);
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
        }
      }
      DAT_00973a8c = 5;
    }
    else if (DAT_00973a8c == 5) {
      uVar4 = *(uint *)(extraout_ECX + 0x250);
      while (uVar4 != 0) {
        *(uint *)(unaff_EBP + -0x10) = uVar4;
        iVar1 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
        uVar3 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
        iVar1 = *(int *)(uVar4 + 4);
        *(int *)(unaff_EBP + -0x18) = iVar1;
        iVar2 = 0;
        if (iVar1 != 0) {
          InterlockedIncrement((LONG *)(iVar1 + 4));
          iVar2 = *(int *)(unaff_EBP + -0x18);
        }
        iVar1 = *(int *)(iVar2 + 0x30);
        *(undefined4 *)(unaff_EBP + -4) = 9;
        if (*(int *)(unaff_EBP + -0x14) - iVar1 < 300000) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        }
        else {
          FUN_00416a5f(*(int *)(iVar2 + 0x34) + 8);
          FUN_004167a3(*(undefined4 *)(unaff_EBP + -0x10));
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar2 = *(int *)(unaff_EBP + -0x18);
        }
        uVar4 = uVar3;
        if (iVar2 != 0) {
          FUN_0041316d(0);
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
        }
      }
      uVar4 = *(uint *)(extraout_ECX + 0x27c);
      while (uVar4 != 0) {
        *(uint *)(unaff_EBP + -0x10) = uVar4;
        iVar1 = *(int *)((-(uint)(uVar4 != 0) & uVar4 - 0x10) + 4);
        uVar3 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
        iVar1 = *(int *)(uVar4 + 4);
        *(int *)(unaff_EBP + -0x20) = iVar1;
        iVar2 = 0;
        if (iVar1 != 0) {
          InterlockedIncrement((LONG *)(iVar1 + 4));
          iVar2 = *(int *)(unaff_EBP + -0x20);
        }
        iVar1 = *(int *)(iVar2 + 0x2c);
        *(undefined4 *)(unaff_EBP + -4) = 10;
        if (*(int *)(unaff_EBP + -0x14) - iVar1 < 300000) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        }
        else {
          FUN_00416e25(*(int *)(iVar2 + 0x30) + 8);
          FUN_00416b9b(*(undefined4 *)(unaff_EBP + -0x10));
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar2 = *(int *)(unaff_EBP + -0x20);
        }
        uVar4 = uVar3;
        if (iVar2 != 0) {
          FUN_0041319b(0);
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
        }
      }
      DAT_00973a8c = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


