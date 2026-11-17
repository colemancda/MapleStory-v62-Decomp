/* FUN_0065a9ba - 0x0065a9ba in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0065a9ba(void)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int unaff_EBP;
  int *piVar8;
  
  FUN_00879bb8();
  piVar8 = *(int **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (piVar8 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (uint)piVar8[-1] >> 1;
  }
  piVar2 = *(int **)(unaff_EBP + 0x10);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)piVar2[-1] >> 1;
  }
  if (((uVar6 & 1) == 0) && ((uVar3 & 1) == 0)) {
    if (piVar2 == (int *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (uint)piVar2[-1] >> 1;
    }
    if ((piVar8 == (int *)0x0) || (uVar3 = (uint)piVar8[-1] >> 1, (uint)piVar8[-1] >> 1 <= uVar6)) {
      uVar3 = uVar6;
    }
    piVar4 = (int *)FUN_00402df5(0,uVar3);
    *(int **)(unaff_EBP + 0xc) = piVar4;
    for (; (short)*piVar8 != 0; piVar8 = piVar8 + 1) {
      sVar1 = (short)*piVar2;
      piVar7 = piVar2;
      while (sVar1 != 0) {
        if (*piVar8 == *piVar7) {
          *piVar4 = *piVar8;
          piVar4 = piVar4 + 1;
        }
        piVar7 = piVar7 + 1;
        sVar1 = (short)*piVar7;
      }
    }
    iVar5 = FUN_0065af97(unaff_EBP + 0xc,0,(int)piVar4 - *(int *)(unaff_EBP + 0xc) >> 1);
    if (iVar5 == 0) {
      FUN_008795da(0x8007000e,0);
    }
    FUN_00402ee6(*(undefined4 *)(unaff_EBP + 0xc),0);
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return *(undefined4 *)(unaff_EBP + 8);
  }
  *(undefined4 *)(unaff_EBP + 0x10) = 0x22000006;
  *(undefined4 *)(unaff_EBP + 8) = 0x22000006;
  *(undefined4 *)(unaff_EBP + -4) = 0;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + 8,&DAT_008f7260);
}


