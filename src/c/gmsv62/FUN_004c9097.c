/* FUN_004c9097 - 0x004c9097 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004c9097(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = DAT_00978368;
  iVar2 = **(int **)(unaff_EBP + 8);
  iVar5 = *(int *)(unaff_EBP + 0x14);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  *(int *)(unaff_EBP + -0x2c) = iVar2 + -0x7d;
  *(int *)(unaff_EBP + -0x24) = iVar2 + 0x7d;
  if (iVar5 == 0) {
LAB_004c92b5:
    iVar2 = 0;
LAB_004c92b7:
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return iVar2;
  }
  iVar2 = FUN_004cd670(iVar5 + 0x13c,*(undefined4 *)(iVar5 + 0x144));
  if (iVar2 != 0) {
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + -0x96;
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 0x96;
  }
  uVar3 = FUN_007d1e08();
  iVar2 = *(int *)(extraout_ECX + 0x2c);
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  if (iVar2 == 0) goto LAB_004c92b5;
LAB_004c910d:
  iVar4 = *(int *)((-(uint)(iVar2 != 0) & iVar2 - 0x10U) + 4);
  uVar3 = *(undefined4 *)(iVar2 + 4);
  *(uint *)(unaff_EBP + 0x14) = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
  *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
  FUN_004cd4d5();
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x88);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
LAB_004c9145:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004cd4f2();
    goto LAB_004c92ac;
  }
  iVar4 = FUN_004cd670(iVar5 + 0x130,*(undefined4 *)(iVar5 + 0x138));
  iVar2 = *(int *)(unaff_EBP + -0x18);
  if (*(int *)(iVar2 + 0x30) == 0) {
    iVar2 = FUN_004cd670(iVar5 + 0x124,*(undefined4 *)(iVar5 + 300));
    if (((iVar2 == 0) && (iVar4 == 0)) ||
       (iVar2 = FUN_005545a2(*(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x34)), iVar2 != 0))
    goto LAB_004c9145;
    iVar2 = *(int *)(unaff_EBP + -0x18);
  }
  if ((((*(int *)(unaff_EBP + 8) - *(int *)(iVar2 + 0x40) < 0x3a99) || (iVar4 == 0)) &&
      (*(int *)(iVar2 + 0x28) != 0)) &&
     (((*(int *)(iVar2 + 0x2c) == 0 &&
       (*(int *)(iVar2 + 0x24) != *(int *)(*(int *)(unaff_EBP + -0x10) + 0x2088))) ||
      ((*(int *)(iVar2 + 0x2c) == 1 &&
       (*(int *)(iVar2 + 0x24) != *(int *)(*(int *)(unaff_EBP + -0x10) + 0x2b40))))))) {
LAB_004c9298:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    iVar2 = FUN_004cd670(iVar5 + 0x16c,*(undefined4 *)(iVar5 + 0x174));
    if (iVar2 == 0) {
LAB_004c922f:
      iVar2 = *(int *)(unaff_EBP + -0x18);
      if (((*(char *)(iVar2 + 0x1d) != '\0') && (*(int *)(iVar2 + 0x48) == 3)) &&
         (2999 < *(int *)(unaff_EBP + 8) - *(int *)(iVar2 + 0x54))) {
        iVar2 = FUN_0045e2eb();
        piVar1 = *(int **)(unaff_EBP + 0xc);
        if (((iVar2 <= piVar1[1] + -0x32) || (iVar2 = FUN_0045e2eb(), piVar1[1] + 10 <= iVar2)) ||
           ((iVar2 = FUN_0045e2eb(), iVar2 <= *(int *)(unaff_EBP + -0x2c) ||
            (iVar2 = FUN_0045e2eb(), *(int *)(unaff_EBP + -0x24) <= iVar2)))) {
          iVar2 = *(int *)(unaff_EBP + -0x18);
          goto LAB_004c9298;
        }
        iVar5 = FUN_0045e2eb();
        iVar2 = *piVar1;
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar2 = ((iVar5 <= iVar2) - 1 & 2) - 1;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          FUN_004cd5da(0);
        }
        goto LAB_004c92b7;
      }
      goto LAB_004c9298;
    }
    if (*(int *)(*(int *)(unaff_EBP + -0x18) + 0x30) == 0) {
      uVar3 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x34);
    }
    else {
      uVar3 = 0x7fffffff;
    }
    iVar2 = FUN_004cd1dd(uVar3);
    if (iVar2 == 0) goto LAB_004c922f;
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar2 = *(int *)(unaff_EBP + -0x18);
  }
  if (iVar2 != 0) {
    FUN_004cd5da(0);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
LAB_004c92ac:
  if (*(int *)(unaff_EBP + 0x14) == 0) goto LAB_004c92b5;
  iVar2 = *(int *)(unaff_EBP + 0x14);
  goto LAB_004c910d;
}


