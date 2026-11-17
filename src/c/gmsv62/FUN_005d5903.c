/* FUN_005d5903 - 0x005d5903 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005d5903(void)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  if (*(int *)(unaff_EBP + 0x24) == 0) {
LAB_005d5957:
    piVar1 = *(int **)(unaff_EBP + 0x1c);
    uVar2 = *(uint *)(extraout_ECX + 0x28);
    while (uVar2 != 0) {
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(iVar4 + -4);
      }
      if (*(uint *)(unaff_EBP + 0x20) <= uVar6) break;
      iVar4 = *(int *)((-(uint)(uVar2 != 0) & uVar2 - 0x10) + 4);
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(uVar2 + 4);
      FUN_005d1003();
      uVar5 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x100);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar7 = FUN_004cd670(*(int *)(unaff_EBP + -0x18) + 0xf8,uVar5);
      if ((((iVar7 != 0) &&
           (iVar7 = FUN_004cd670(*(int *)(unaff_EBP + -0x18) + 0x3d0,
                                 *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x3d8)), iVar7 == 0))
          && ((*(int *)(unaff_EBP + -0x10) == 0 ||
              (iVar7 = FUN_004b8c9b(*(int *)(unaff_EBP + -0x18) + 0x150,
                                    *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x158)),
              iVar7 == *(int *)(unaff_EBP + -0x10))))) &&
         (((*(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x15c) + 0x1d8) == 0 &&
           (iVar7 = FUN_005d04ff(), iVar7 == 0)) &&
          (iVar7 = FUN_005d5ded(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                                *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14),
                                *(undefined4 *)(unaff_EBP + 0x18),*(undefined4 *)(unaff_EBP + -0x18)
                               ), iVar7 != 0)))) {
        iVar7 = FUN_005d6844(0xffffffff);
        FUN_005d1003();
        FUN_00434d5d();
        *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(unaff_EBP + -0x18);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00434d5d();
      uVar2 = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
    }
    iVar4 = *piVar1;
    if (iVar4 != 0) {
      uVar5 = *(undefined4 *)(iVar4 + -4);
      goto LAB_005d5a7e;
    }
  }
  else {
    iVar4 = (**(code **)(*DAT_00978358 + 4))();
    cVar3 = (**(code **)(**(int **)(iVar4 + 0x96c) + 4))();
    if ((cVar3 != '\0') && (*(int *)(iVar4 + 0x96c) != 0)) {
      uVar5 = FUN_005c4af4();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
      goto LAB_005d5957;
    }
  }
  uVar5 = 0;
LAB_005d5a7e:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


