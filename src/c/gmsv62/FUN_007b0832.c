/* FUN_007b0832 - 0x007b0832 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007b0832(void)

{
  int iVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int unaff_EBP;
  int iVar7;
  
  FUN_00879bb8();
  iVar4 = *(int *)(extraout_ECX + 0x1e60);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar1 = DAT_00978368;
  if (iVar4 != 0) {
    iVar4 = FUN_00455c59(unaff_EBP + -0x1c);
    iVar4 = *(int *)(iVar4 + 4);
    FUN_0045e4a2();
    iVar5 = *(int *)(*(int *)(extraout_ECX + 0x1744) + 4);
    if (((iVar5 != 0) &&
        (iVar5 = FUN_004cd670(iVar5 + 0x160,*(undefined4 *)(iVar5 + 0x168)), iVar5 != 0)) &&
       (iVar5 = FUN_007a3f46(), iVar5 == 0)) {
      sVar3 = FUN_0045f084(iVar4 + 0x71,*(undefined4 *)(iVar4 + 0x75));
      iVar5 = FUN_00413367(iVar1 + 0x2108,*(undefined4 *)(iVar1 + 0x2110));
      iVar7 = 0;
      iVar1 = *(int *)(DAT_00978134 + 0x78) * 5;
      if ((((iVar1 != 0) && ((((int)sVar3 - *(int *)(unaff_EBP + 8)) * 100) / iVar5 < iVar1)) ||
          (*(int *)(unaff_EBP + 0xc) != 0)) &&
         (iVar1 = *(int *)(DAT_00979110 + 900), *(int *)(unaff_EBP + 0xc) = iVar1, iVar1 != 0)) {
        do {
          iVar1 = *(int *)(unaff_EBP + -0x10);
          iVar5 = *(int *)(*(int *)(iVar1 + 0x1744) + 4 + iVar7 * 8);
          if (iVar5 == 0) break;
          iVar5 = FUN_004cd670(iVar5 + 0x160,*(undefined4 *)(iVar5 + 0x168));
          if (iVar5 != 0) {
            iVar1 = *(int *)(*(int *)(iVar1 + 0x1744) + 4 + iVar7 * 8);
            if (iVar1 != 0) {
              iVar5 = 0;
              if (*(int *)(iVar4 + 0x3eb) != 0) {
                iVar5 = *(int *)(*(int *)(iVar4 + 0x3eb) + -4);
              }
              *(int *)(unaff_EBP + -0x14) = iVar5 + -1;
              *(undefined4 *)(unaff_EBP + 8) = 1;
              if (iVar5 + -1 < 1) goto LAB_007b09c3;
              goto LAB_007b0975;
            }
            break;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 3);
      }
    }
  }
  goto LAB_007b0a0f;
  while (*(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1,
        *(int *)(unaff_EBP + 8) <= *(int *)(unaff_EBP + -0x14)) {
LAB_007b0975:
    iVar4 = FUN_00458c4f(unaff_EBP + -0x1c,2,*(undefined4 *)(unaff_EBP + 8));
    piVar2 = *(int **)(iVar4 + 4);
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      FUN_00449913(0);
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    if (((piVar2 != (int *)0x0) && (iVar4 = FUN_0045e2eb(), iVar4 == *(int *)(unaff_EBP + 0xc))) &&
       (iVar4 = (**(code **)(*piVar2 + 4))(), iVar4 == 0)) {
      if (*(int *)(unaff_EBP + 8) != 0) {
        FUN_00834c99(*(undefined4 *)(iVar1 + 0x90),*(undefined4 *)(iVar1 + 0x94),
                     *(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),1,
                     *(undefined4 *)(unaff_EBP + 0x10));
        goto LAB_007b0a0f;
      }
      break;
    }
  }
LAB_007b09c3:
  iVar4 = *(int *)(unaff_EBP + -0x10);
  piVar2 = (int *)(iVar4 + 0x251c);
  *piVar2 = *piVar2 + 1;
  if (*(int *)(iVar4 + 0x251c) < 4) {
    FUN_0079d45a(5);
  }
  uVar6 = FUN_00679d22(unaff_EBP + 8,0xd24);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00471102(uVar6,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
LAB_007b0a0f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


