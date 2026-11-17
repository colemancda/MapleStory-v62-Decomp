/* FUN_005d5a8e - 0x005d5a8e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_005d5a8e(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int iVar6;
  uint uVar7;
  int iVar8;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x28);
  if (iVar2 == 0) {
LAB_005d5c71:
    iVar5 = 0;
LAB_005d5c73:
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return iVar5;
  }
  do {
    uVar7 = 0;
    iVar5 = *(int *)(iVar2 + 4);
    uVar1 = *(undefined4 *)(iVar5 + 0x100);
    iVar2 = *(int *)((-(uint)(iVar2 != 0) & iVar2 - 0x10U) + 4);
    *(uint *)(unaff_EBP + -0x14) = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
    iVar2 = FUN_004cd670(iVar5 + 0xf8,uVar1);
    if ((((iVar2 != 0) &&
         (iVar2 = FUN_00413367(iVar5 + 0x3b8,*(undefined4 *)(iVar5 + 0x3c0)), iVar2 == 0)) &&
        (iVar2 = FUN_004cd670(iVar5 + 0x3d0,*(undefined4 *)(iVar5 + 0x3d8)), iVar2 == 0)) &&
       (iVar2 = FUN_005c8935(), iVar2 == 0)) {
      iVar2 = FUN_004cd670(*(int *)(iVar5 + 0x15c) + 0x58,
                           *(undefined4 *)(*(int *)(iVar5 + 0x15c) + 0x60));
      if (((iVar2 != 0) && (*(int *)(*(int *)(iVar5 + 0x15c) + 0x1d8) == 0)) &&
         ((iVar2 = FUN_005d04ff(), iVar2 == 0 && (*(int *)(iVar5 + 0x2f8) == 0)))) {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        FUN_005c5c52(unaff_EBP + -0x10,1);
        iVar2 = 0;
        for (; (iVar3 = *(int *)(unaff_EBP + -0x10), iVar3 != 0 && (uVar7 < *(uint *)(iVar3 + -4)));
            uVar7 = uVar7 + 1) {
          iVar3 = (*DAT_0097b5a4)(iVar3 + iVar2);
          if ((iVar3 == 0) &&
             (iVar3 = (*DAT_0097b5a0)(unaff_EBP + -0x34,*(int *)(unaff_EBP + -0x10) + iVar2,
                                      *(undefined4 *)(unaff_EBP + 8)), iVar3 != 0))
          goto LAB_005d5c84;
          iVar2 = iVar2 + 0x10;
        }
        FUN_005c5b12(unaff_EBP + -0x24,1);
        iVar2 = (*DAT_0097b5a4)(unaff_EBP + -0x24);
        if (iVar2 == 0) {
          iVar4 = (*(int *)(unaff_EBP + -0x20) + *(int *)(unaff_EBP + -0x18)) / 2;
          iVar2 = iVar4 + 1;
          iVar3 = *(int *)(unaff_EBP + -0x18) + -10;
          iVar6 = (*(int *)(unaff_EBP + -0x24) + *(int *)(unaff_EBP + -0x1c)) / 2;
          if (iVar3 <= iVar2) {
            iVar3 = iVar2;
          }
          iVar8 = *(int *)(unaff_EBP + -0x1c) + -0x19;
          iVar2 = iVar6 + 1;
          if (iVar2 < iVar8) {
            iVar2 = iVar8;
          }
          iVar8 = *(int *)(unaff_EBP + -0x20) + 0x1e;
          iVar4 = iVar4 + -1;
          if (iVar4 <= iVar8) {
            iVar8 = iVar4;
          }
          iVar4 = *(int *)(unaff_EBP + -0x24) + 0x19;
          iVar6 = iVar6 + -1;
          if (iVar6 <= iVar4) {
            iVar4 = iVar6;
          }
          (*DAT_0097b504)(unaff_EBP + -0x24,iVar4,iVar8,iVar2,iVar3);
          iVar2 = (*DAT_0097b5a0)(unaff_EBP + -0x34,unaff_EBP + -0x24,*(undefined4 *)(unaff_EBP + 8)
                                 );
          if (iVar2 != 0) {
LAB_005d5c84:
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            FUN_004f1a88();
            goto LAB_005d5c73;
          }
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004f1a88();
      }
    }
    if (*(int *)(unaff_EBP + -0x14) == 0) goto LAB_005d5c71;
    iVar2 = *(int *)(unaff_EBP + -0x14);
  } while( true );
}


