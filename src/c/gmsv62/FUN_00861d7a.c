/* FUN_00861d7a - 0x00861d7a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00861d7a(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int *piVar4;
  int unaff_EBP;
  int iVar5;
  int *piVar6;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  piVar1 = (int *)FUN_00862118(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0x10));
  FUN_00862332(*(undefined4 *)(unaff_EBP + 8));
  FUN_008620a1(piVar1,*(undefined4 *)(unaff_EBP + 8));
  iVar5 = extraout_ECX;
  if (4 < piVar1[0x25]) {
    while( true ) {
      iVar2 = FUN_008622bb(piVar1,*(undefined4 *)(unaff_EBP + 0xc));
      *(int *)(unaff_EBP + 8) = iVar2;
      if (iVar2 == 0) break;
      if (piVar1 == *(int **)(iVar5 + 0x1c)) {
        uVar3 = FUN_00861f3c(piVar1[1] + 1);
        *(undefined4 *)(iVar5 + 0x1c) = uVar3;
        if (piVar1[0x26] == 0) {
          FUN_00862b53();
        }
        *(int *)(unaff_EBP + -0x48) = piVar1[0x27];
        *(int *)(unaff_EBP + -0x44) = piVar1[0x28];
        *(int *)(unaff_EBP + -0x40) = piVar1[0x29];
        *(int *)(unaff_EBP + -0x3c) = piVar1[0x2a];
        *(undefined4 *)(unaff_EBP + -0x34) = 0;
        *(int **)(unaff_EBP + -0x30) = piVar1;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        FUN_00862332(unaff_EBP + -0x48);
        *(undefined4 *)(unaff_EBP + -4) = 1;
        FUN_00862bb6();
        iVar5 = *(int *)(unaff_EBP + 8);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(iVar5 + 0x98) == 0) {
          FUN_00862b53();
        }
        *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(iVar5 + 0x9c);
        *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(iVar5 + 0xa0);
        *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(iVar5 + 0xa4);
        *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(iVar5 + 0xa8);
        *(undefined4 *)(unaff_EBP + -0x34) = 0;
        *(int *)(unaff_EBP + -0x30) = iVar5;
        *(undefined4 *)(unaff_EBP + -4) = 2;
        FUN_00862332(unaff_EBP + -0x48);
        *(undefined4 *)(unaff_EBP + -4) = 3;
        FUN_00862bb6();
        break;
      }
      iVar5 = *piVar1;
      iVar2 = *(int *)(iVar5 + 0x94);
      *(int *)(unaff_EBP + 0x10) = iVar5;
      for (piVar4 = (int *)(iVar2 * 0x1c + -0x14 + iVar5);
          (piVar6 = (int *)0x0, (int *)(iVar5 + 8) <= piVar4 &&
          (piVar6 = piVar4, (int *)piVar4[6] != piVar1)); piVar4 = piVar4 + -7) {
      }
      if (piVar1[0x26] == 0) {
        FUN_00862b53();
      }
      piVar4 = *(int **)(unaff_EBP + 0x10);
      *piVar6 = piVar1[0x27];
      piVar6[1] = piVar1[0x28];
      piVar6[2] = piVar1[0x29];
      piVar6[3] = piVar1[0x2a];
      iVar5 = *(int *)(unaff_EBP + 8);
      if (*(int *)(iVar5 + 0x98) == 0) {
        FUN_00862b53();
      }
      *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar5 + 0x9c);
      *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(iVar5 + 0xa0);
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar5 + 0xa4);
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar5 + 0xa8);
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 8);
      iVar5 = *(int *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -4) = 4;
      FUN_00862332(unaff_EBP + -0x2c);
      *(undefined4 *)(unaff_EBP + -4) = 5;
      FUN_00862bb6();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(iVar5 + 0x94) < 5) break;
      iVar5 = *(int *)(unaff_EBP + -0x10);
      piVar1 = piVar4;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


