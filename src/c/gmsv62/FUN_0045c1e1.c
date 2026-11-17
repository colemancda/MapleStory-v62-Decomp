/* FUN_0045c1e1 - 0x0045c1e1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0045c1e1(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_EBP;
  int iVar6;
  bool bVar7;
  
  FUN_00879bb8();
  piVar1 = (int *)(DAT_00978368 + 0x3278);
  iVar3 = *piVar1;
  iVar6 = 0;
  if (iVar3 == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar3 + -4);
  }
  bVar7 = *(int *)(unaff_EBP + -0x10) == 0;
  if (0 < *(int *)(unaff_EBP + -0x10)) {
    piVar5 = (int *)(iVar3 + 4);
    do {
      if (*(int *)(*piVar5 + 0xc) == **(int **)(unaff_EBP + 8)) break;
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 2;
    } while (iVar6 < *(int *)(unaff_EBP + -0x10));
    bVar7 = iVar6 == *(int *)(unaff_EBP + -0x10);
  }
  if (bVar7) {
    **(undefined4 **)(unaff_EBP + 8) = 0;
    iVar6 = -1;
  }
  else {
    iVar3 = *(int *)(iVar3 + 4 + iVar6 * 8);
    if (*(int *)(iVar3 + 0x40) == 0) {
      *(int *)(unaff_EBP + -0x1c) = iVar3;
      iVar4 = 0;
      if (iVar3 != 0) {
        InterlockedIncrement((LONG *)(iVar3 + 4));
        iVar4 = *(int *)(unaff_EBP + -0x1c);
      }
      *(int *)(unaff_EBP + -0x18) = iVar6;
      iVar6 = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (0 < *(int *)(unaff_EBP + -0x10)) {
        do {
          uVar2 = FUN_0045e2eb();
          *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
          iVar3 = FUN_0045e2eb();
          iVar4 = *(int *)(unaff_EBP + -0x1c);
          if ((((iVar3 == *(int *)(unaff_EBP + -0x14)) &&
               (iVar3 = *(int *)(*piVar1 + 4 + iVar6 * 8),
               *(int *)(iVar3 + 0x1c) == *(int *)(iVar4 + 0x1c))) &&
              (*(int *)(iVar3 + 0x28) == *(int *)(iVar4 + 0x28))) && (*(int *)(iVar3 + 0x40) != 0))
          {
            uVar2 = *(undefined4 *)(*(int *)(*piVar1 + 4 + iVar6 * 8) + 0xc);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            **(undefined4 **)(unaff_EBP + 8) = uVar2;
            if (iVar4 != 0) {
              FUN_0045e794(0);
            }
            goto LAB_0045c2cc;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(unaff_EBP + -0x10));
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (iVar4 != 0) {
        FUN_0045e794(0);
      }
      iVar6 = *(int *)(unaff_EBP + -0x18);
    }
  }
LAB_0045c2cc:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar6;
}


