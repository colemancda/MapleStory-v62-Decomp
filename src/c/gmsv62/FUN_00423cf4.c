/* FUN_00423cf4 - 0x00423cf4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00423cf4(void)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  uint uVar5;
  int unaff_EBP;
  uint uVar6;
  
  FUN_00879bb8();
  DVar1 = timeGetTime();
  uVar6 = *(uint *)(extraout_ECX + 0x10);
  do {
    if (uVar6 == 0) {
      uVar4 = 1;
LAB_00423db7:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return uVar4;
    }
    iVar2 = *(int *)((-(uint)(uVar6 != 0) & uVar6 - 0x10) + 4);
    uVar5 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(uVar6 + 4);
    FUN_00424fdb();
    iVar3 = *(int *)(unaff_EBP + -0x10);
    iVar2 = *(int *)(iVar3 + 0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if ((iVar2 <= (int)DVar1) && (*(int *)(iVar3 + 4) == 3)) {
      if ((*(int *)(iVar3 + 8) == *(int *)(unaff_EBP + 8)) &&
         (*(int *)(iVar3 + 0xc) == *(int *)(unaff_EBP + 0xc))) {
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      else {
        iVar2 = (*DAT_0097b57c)(iVar3 + 0x20,*(undefined4 *)(unaff_EBP + 0x10),
                                *(undefined4 *)(unaff_EBP + 0x14));
        if (iVar2 == 0) {
          iVar3 = *(int *)(unaff_EBP + -0x10);
          goto LAB_00423d7d;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar3 = *(int *)(unaff_EBP + -0x10);
      }
      if (iVar3 != 0) {
        FUN_0042500e(0);
      }
      uVar4 = 0;
      goto LAB_00423db7;
    }
LAB_00423d7d:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar6 = uVar5;
    if (iVar3 != 0) {
      FUN_0042500e(0);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
  } while( true );
}


