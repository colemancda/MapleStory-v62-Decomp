/* FUN_0084a5e4 - 0x0084a5e4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x0084a67d) */

int FUN_0084a5e4(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  int extraout_ECX_02;
  uint uVar6;
  int unaff_EBP;
  undefined1 *puVar7;
  int iStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  int iStack_54;
  
  FUN_00879bb8();
  uVar6 = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(int *)(unaff_EBP + -0x28) = extraout_ECX;
  *(int **)(unaff_EBP + -0x2c) = (int *)(extraout_ECX + 0x3278);
  while( true ) {
    iVar3 = *(int *)(extraout_ECX + 0x3278);
    if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= uVar6)) break;
    iVar3 = *(int *)(iVar3 + uVar6 * 8 + 4);
    *(int *)(unaff_EBP + -0x18) = iVar3;
    iVar4 = 0;
    if (iVar3 != 0) {
      iStack_54 = 0x84a62b;
      InterlockedIncrement((LONG *)(iVar3 + 4));
      iVar4 = *(int *)(unaff_EBP + -0x18);
    }
    if (*(int *)(iVar4 + 0xc) == *(int *)(unaff_EBP + 0xc)) {
      iVar5 = *(int *)(unaff_EBP + 8);
      *(int *)(iVar5 + 4) = iVar4;
      if (iVar4 != 0) {
        iStack_54 = 0x84a659;
        InterlockedIncrement((LONG *)(iVar4 + 4));
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045e46f();
      goto LAB_0084a89e;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045e46f();
    uVar6 = uVar6 + 1;
  }
  if (*(int *)(extraout_ECX + 0x3318) != 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    puVar1 = (undefined1 *)FUN_0040cf4d();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (-1 < (int)puVar1) {
      do {
        puVar7 = (undefined1 *)((int)(puVar1 + *(int *)(unaff_EBP + -0x14)) >> 1);
        FUN_0087a1b0();
        iStack_54 = 0;
        iStack_60 = 0x84a6c0;
        puStack_5c = puVar7;
        puStack_58 = &stack0xffffffb4;
        puStack_5c = (undefined1 *)FUN_00412335();
        *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_58;
        iStack_60 = 0x84a6cc;
        FUN_004033a1();
        puStack_5c = (undefined1 *)(unaff_EBP + -0x3c);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iStack_60 = 0x84a6db;
        FUN_0040263d();
        iStack_60 = 0x84a6e2;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        puStack_58 = (undefined1 *)0x84a6ed;
        uVar2 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
        iStack_54 = 0x84a6fc;
        iVar3 = FUN_00404b30();
        if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
          iStack_54 = 0x84a70d;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iStack_54 = 0x84a71a;
        iVar3 = unaff_EBP + -0x3c;
        iVar4 = FUN_00402bc3();
        iStack_54 = iVar3;
        if (iVar4 < 0) {
          iStack_54 = 0x84a725;
          FUN_00878dfb();
          iStack_54 = extraout_ECX_00;
        }
        if (*(int *)(unaff_EBP + -0x10) == 0) goto LAB_0084a886;
        puStack_5c = (undefined1 *)&iStack_54;
        *(int **)(unaff_EBP + -0x18) = &iStack_54;
        puStack_58 = (undefined1 *)0xa9a;
        iStack_60 = 0x84a747;
        FUN_00679e4e();
        puStack_58 = (undefined1 *)(unaff_EBP + -0x4c);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        puStack_5c = (undefined1 *)0x84a757;
        FUN_0040263d();
        puStack_5c = (undefined1 *)0x84a75e;
        iStack_54 = FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        puStack_58 = (undefined1 *)0x84a768;
        uVar2 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
        puStack_58 = (undefined1 *)(unaff_EBP + -0x4c);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        puStack_5c = (undefined1 *)0x84a778;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_54 = 0x84a785;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x18) < *(int *)(unaff_EBP + 0xc)) {
          *(undefined1 **)(unaff_EBP + -0x14) = puVar7 + 1;
        }
        else {
          if (*(int *)(unaff_EBP + -0x18) <= *(int *)(unaff_EBP + 0xc)) break;
          puVar1 = puVar7 + -1;
        }
      } while (*(int *)(unaff_EBP + -0x14) <= (int)puVar1);
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        FUN_00469866();
        iStack_54 = *(int *)(unaff_EBP + -0x18);
        *(int *)(*(int *)(unaff_EBP + -0x20) + 0xc) = iStack_54;
        puStack_58 = (undefined1 *)(*(int *)(unaff_EBP + -0x28) + 0x331c);
        *(int **)(unaff_EBP + 0xc) = &iStack_54;
        puStack_5c = (undefined1 *)0x84a7da;
        FUN_00424dbc();
        iStack_60 = unaff_EBP + -0x24;
        *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_5c;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        puStack_5c = extraout_ECX_01;
        puStack_58 = extraout_ECX_01;
        FUN_0045e0ed();
        *(int **)(unaff_EBP + 0xc) = &iStack_60;
        iStack_60 = extraout_ECX_02;
        FUN_00424dbc(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iVar3 = FUN_00467ed8();
        if (iVar3 == 0) {
          iStack_54 = 0x84a817;
          iVar3 = FUN_0045f28f();
          FUN_0045e45d();
          FUN_0045e46f();
          *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(unaff_EBP + -0x20);
          iVar3 = *(int *)(unaff_EBP + -0x20);
          iVar5 = *(int *)(unaff_EBP + 8);
          *(int *)(iVar5 + 4) = iVar3;
          iVar4 = 0;
          if (iVar3 != 0) {
            iStack_54 = 0x84a845;
            InterlockedIncrement((LONG *)(iVar3 + 4));
            iVar4 = *(int *)(unaff_EBP + -0x20);
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (iVar4 != 0) {
            iStack_54 = 0x84a859;
            FUN_0045e794();
            *(undefined4 *)(unaff_EBP + -0x20) = 0;
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
            iStack_54 = 0x84a86d;
            (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
          }
          goto LAB_0084a89e;
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0x20) != 0) {
          iStack_54 = 0x84a883;
          FUN_0045e794();
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
        }
      }
    }
LAB_0084a886:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      iStack_54 = 0x84a897;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
  }
  iVar5 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(iVar5 + 4) = 0;
LAB_0084a89e:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar5;
}


