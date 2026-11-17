/* FUN_00423c11 - 0x00423c11 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00423c11(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  uint uVar4;
  int unaff_EBP;
  uint uVar5;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar2 = FUN_007d1e08();
  uVar5 = *(uint *)(extraout_ECX + 0x10);
  do {
    if (uVar5 == 0) {
      iVar2 = *(int *)(unaff_EBP + 8);
      *(undefined4 *)(iVar2 + 4) = 0;
LAB_00423ce3:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return iVar2;
    }
    iVar3 = *(int *)((-(uint)(uVar5 != 0) & uVar5 - 0x10) + 4);
    uVar4 = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(uVar5 + 4);
    FUN_00424fdb();
    iVar1 = *(int *)(unaff_EBP + -0x14);
    iVar3 = *(int *)(iVar1 + 4);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if ((iVar3 == 0) && (-1 < iVar2 - *(int *)(iVar1 + 0x14))) {
      iVar3 = (*DAT_0097b57c)(iVar1 + 0x20,*(undefined4 *)(unaff_EBP + 0xc),
                              *(undefined4 *)(unaff_EBP + 0x10));
      if (iVar3 != 0) {
        iVar3 = *(int *)(unaff_EBP + -0x14);
        iVar2 = *(int *)(unaff_EBP + 8);
        **(uint **)(unaff_EBP + 0x14) =
             (uint)CONCAT11(*(undefined1 *)(iVar3 + 0xc),*(undefined1 *)(iVar3 + 0x10));
        *(int *)(iVar2 + 4) = iVar3;
        FUN_00424fdb();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          FUN_0042500e(0);
        }
        goto LAB_00423ce3;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar1 = *(int *)(unaff_EBP + -0x14);
    }
    else {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    uVar5 = uVar4;
    if (iVar1 != 0) {
      FUN_0042500e(0);
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
  } while( true );
}


