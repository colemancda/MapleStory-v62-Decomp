/* FUN_004081b4 - 0x004081b4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004081b4(void)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (*(int *)(unaff_EBP + 0xc) < 0) {
    iVar3 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(iVar3 + 4) = 0;
  }
  else {
    iStack_60 = unaff_EBP + 0xc;
    *(int *)(unaff_EBP + -0x1c) = extraout_ECX + 0x18;
    iStack_64 = 0x4081ec;
    iVar3 = FUN_00413cb9();
    if (iVar3 == 0) {
      iStack_60 = 0x408202;
      iVar3 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x14) = iVar3;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_004083ff();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
      FUN_00412817();
      iStack_60 = unaff_EBP + -0x10;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      iStack_64 = 0x408239;
      FUN_0054e2c6();
      psVar1 = *(short **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if ((psVar1 == (short *)0x0) || (*psVar1 == 0)) {
        iVar3 = *(int *)(unaff_EBP + 8);
        *(undefined4 *)(iVar3 + 4) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (psVar1 != (short *)0x0) {
          iStack_60 = 0x408262;
          FUN_00403384();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00412829();
      }
      else {
        iStack_60 = 0x408282;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iStack_60 = 0x40828f;
        FUN_00403191();
        iStack_60 = 0;
        iStack_64 = unaff_EBP + -0x48;
        iStack_68 = unaff_EBP + -0x38;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        uStack_6c = 0x4082a5;
        uVar4 = FUN_00411641();
        *(undefined4 **)(unaff_EBP + -0x20) = &uStack_6c;
        FUN_004033a1(uVar4);
        iVar3 = unaff_EBP + -0x58;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_00405a1d(iVar3);
        FUN_00402660();
        FUN_00404a02(iVar3);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iStack_64 = 0x4082d7;
        uVar4 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
        iVar3 = *(int *)(unaff_EBP + -0x24);
        iStack_60 = 0x4082eb;
        iVar5 = FUN_00404b30();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          iStack_60 = 0x4082fc;
          FUN_00878dfb();
        }
        piVar2 = *(int **)(iVar3 + 0xc);
        *(int **)(unaff_EBP + -0x20) = piVar2;
        if (piVar2 != (int *)0x0) {
          iStack_60 = 0x40830b;
          (**(code **)(*piVar2 + 4))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 10;
        iStack_60 = 0x408318;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_60 = 0x408323;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iStack_60 = 0x408330;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_60 = 0x40833b;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iStack_60 = 0x408348;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_60 = 0x408353;
          FUN_00878dfb();
        }
        iStack_60 = 0x408362;
        FUN_004116d4();
        iVar3 = *(int *)(unaff_EBP + -0x24);
        iStack_60 = unaff_EBP + 0xc;
        iStack_64 = 0x408375;
        uVar4 = FUN_00413d0d();
        *(undefined4 *)(iVar3 + 0x34) = uVar4;
        iVar3 = *(int *)(unaff_EBP + -0x24);
        uVar4 = (*DAT_0097b704)();
        *(undefined4 *)(iVar3 + 0x30) = uVar4;
        iVar5 = *(int *)(unaff_EBP + -0x24);
        iVar3 = *(int *)(unaff_EBP + 8);
        *(int *)(iVar3 + 4) = iVar5;
        if (iVar5 != 0) {
          iStack_60 = 0x40839b;
          InterlockedIncrement((LONG *)(iVar5 + 4));
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (piVar2 != (int *)0x0) {
          iStack_60 = 0x4083a9;
          (**(code **)(*piVar2 + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00402676();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x24) != 0) {
          iStack_60 = 0x4083c7;
          FUN_00412f17();
        }
      }
    }
    else {
      iVar5 = *(int *)(iVar3 + 4);
      uVar4 = (*DAT_0097b704)();
      *(undefined4 *)(iVar5 + 0x30) = uVar4;
      iVar5 = *(int *)(iVar3 + 4);
      iVar3 = *(int *)(unaff_EBP + 8);
      *(int *)(iVar3 + 4) = iVar5;
      if (iVar5 != 0) {
        iStack_60 = 0x4083ec;
        InterlockedIncrement((LONG *)(iVar5 + 4));
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


