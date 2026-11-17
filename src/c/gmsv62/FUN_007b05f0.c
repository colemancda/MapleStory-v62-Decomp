/* FUN_007b05f0 - 0x007b05f0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_007b05f0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar6 = DAT_00978368;
  iVar2 = FUN_00455c59(unaff_EBP + -0x1c);
  iVar2 = *(int *)(iVar2 + 4);
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_0045e7c2(0);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  iVar3 = *(int *)(*(int *)(extraout_ECX + 0x1744) + 4);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar3 = FUN_004cd670(iVar3 + 0x154,*(undefined4 *)(iVar3 + 0x15c));
    iVar4 = 0;
    if ((iVar3 != 0) && (iVar4 = FUN_007a3f46(), iVar4 == 0)) {
      uVar5 = FUN_0045f084(iVar2 + 0x61,*(undefined4 *)(iVar2 + 0x65));
      uVar7 = *(undefined4 *)(iVar6 + 0x2104);
      *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
      iVar4 = FUN_00413367(iVar6 + 0x20fc,uVar7);
      iVar3 = 0;
      iVar4 = (((int)*(short *)(unaff_EBP + -0x10) - *(int *)(unaff_EBP + 8)) * 100) / iVar4;
      iVar6 = *(int *)(DAT_00978134 + 0x74) * 5;
      if (((iVar6 != 0) && (iVar4 < iVar6)) || (*(int *)(unaff_EBP + 0xc) != 0)) {
        iVar6 = *(int *)(DAT_00979110 + 0x380);
        *(int *)(unaff_EBP + 0xc) = iVar6;
        iVar4 = 0;
        if (iVar6 != 0) {
          do {
            iVar6 = *(int *)(*(int *)(extraout_ECX + 0x1744) + 4 + iVar3 * 8);
            if (iVar6 == 0) break;
            iVar6 = FUN_004cd670(iVar6 + 0x154,*(undefined4 *)(iVar6 + 0x15c));
            if (iVar6 != 0) {
              iVar6 = *(int *)(*(int *)(extraout_ECX + 0x1744) + 4 + iVar3 * 8);
              *(int *)(unaff_EBP + -0x14) = iVar6;
              if (iVar6 != 0) {
                *(undefined4 *)(extraout_ECX + 0x2520) = 0;
                iVar6 = 0;
                if (*(int *)(iVar2 + 0x3eb) != 0) {
                  iVar6 = *(int *)(*(int *)(iVar2 + 0x3eb) + -4);
                }
                *(int *)(unaff_EBP + -0x10) = iVar6 + -1;
                *(undefined4 *)(unaff_EBP + 8) = 1;
                if (iVar6 + -1 < 1) goto LAB_007b07a2;
                goto LAB_007b0754;
              }
              break;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < 3);
          *(int *)(extraout_ECX + 0x2520) = *(int *)(extraout_ECX + 0x2520) + 1;
          iVar4 = extraout_ECX + 0x2520;
          if (*(int *)(extraout_ECX + 0x2520) < 4) {
            iVar4 = FUN_0079d45a(3);
          }
        }
      }
    }
  }
  goto LAB_007b07ed;
  while (*(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1,
        *(int *)(unaff_EBP + 8) <= *(int *)(unaff_EBP + -0x10)) {
LAB_007b0754:
    iVar2 = FUN_00458c4f(unaff_EBP + -0x1c,2,*(undefined4 *)(unaff_EBP + 8));
    piVar1 = *(int **)(iVar2 + 4);
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      FUN_00449913(0);
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    if (((piVar1 != (int *)0x0) && (iVar2 = FUN_0045e2eb(), iVar2 == *(int *)(unaff_EBP + 0xc))) &&
       (iVar2 = (**(code **)(*piVar1 + 4))(), iVar2 == 0)) {
      if (*(int *)(unaff_EBP + 8) != 0) {
        iVar4 = FUN_00834c99(*(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x90),
                             *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x94),
                             *(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),0,
                             *(undefined4 *)(unaff_EBP + 0x10));
        *(undefined4 *)(extraout_ECX + 0x2518) = 0;
        goto LAB_007b07ed;
      }
      break;
    }
  }
LAB_007b07a2:
  *(int *)(extraout_ECX + 0x2518) = *(int *)(extraout_ECX + 0x2518) + 1;
  if (*(int *)(extraout_ECX + 0x2518) < 4) {
    FUN_0079d45a(4);
  }
  uVar7 = FUN_00679d22(unaff_EBP + 8,0xd23);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00471102(uVar7,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00414ebb();
LAB_007b07ed:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


