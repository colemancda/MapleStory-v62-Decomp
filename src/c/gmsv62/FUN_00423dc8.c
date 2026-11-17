/* FUN_00423dc8 - 0x00423dc8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00423dc8(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int extraout_ECX;
  uint uVar6;
  int *piVar7;
  int unaff_EBP;
  uint uVar8;
  
  FUN_00879bb8();
  uVar3 = FUN_007d1e08();
  uVar8 = *(uint *)(extraout_ECX + 0x10);
  *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
  do {
    if (uVar8 == 0) {
      uVar3 = 0;
LAB_00423ebb:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return uVar3;
    }
    iVar5 = *(int *)((-(uint)(uVar8 != 0) & uVar8 - 0x10) + 4);
    uVar6 = -(uint)(iVar5 != 0) & iVar5 + 0x10U;
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(uVar8 + 4);
    FUN_00424fdb();
    iVar1 = *(int *)(unaff_EBP + -0x14);
    iVar5 = *(int *)(iVar1 + 4);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if ((iVar5 == 2) && (-1 < *(int *)(unaff_EBP + -0x10) - *(int *)(iVar1 + 0x14))) {
      piVar2 = (int *)**(undefined4 **)(unaff_EBP + 0xc);
      uVar8 = 0;
      piVar7 = piVar2;
      while (piVar2 != (int *)0x0) {
        if (((uint)piVar2[-1] <= uVar8) || (*(int *)(iVar1 + 8) == *piVar7)) {
          if (piVar2 != (int *)0x0) {
            uVar4 = piVar2[-1];
            goto LAB_00423e5c;
          }
          break;
        }
        uVar8 = uVar8 + 1;
        piVar7 = piVar7 + 1;
      }
      uVar4 = 0;
LAB_00423e5c:
      if ((uVar8 == uVar4) && (*(int *)(iVar1 + 8) != *(int *)(unaff_EBP + 8))) goto LAB_00423e85;
      iVar5 = (*DAT_0097b57c)(iVar1 + 0x20,*(undefined4 *)(unaff_EBP + 0x10),
                              *(undefined4 *)(unaff_EBP + 0x14));
      if (iVar5 != 0) {
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          FUN_0042500e(0);
        }
        uVar3 = 1;
        goto LAB_00423ebb;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar1 = *(int *)(unaff_EBP + -0x14);
    }
    else {
LAB_00423e85:
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    uVar8 = uVar6;
    if (iVar1 != 0) {
      FUN_0042500e(0);
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
  } while( true );
}


