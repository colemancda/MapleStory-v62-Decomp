/* FUN_00615045 - 0x00615045 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00615045(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_24;
  int local_1c;
  
  FUN_00879bb8();
  if ((((*(int *)(extraout_ECX + 0x84) == 0) ||
       (*(int *)(*(int *)(extraout_ECX + 0x84) + 0x524) == 0)) &&
      (*(int *)(extraout_ECX + 0xac) == 0)) &&
     ((iVar2 = *(int *)(*(int *)(extraout_ECX + 0x78) + 0x50), iVar2 != 0 &&
      (uVar5 = *(uint *)(iVar2 + -4), uVar5 != 0)))) {
    local_1c = 0x6150a2;
    uVar4 = FUN_004133f0();
    iVar2 = *(int *)(*(int *)(extraout_ECX + 0x78) + 0x50) + (uVar4 % uVar5) * 0xc;
    iVar3 = *(int *)(iVar2 + 8);
    if ((iVar3 != 0) &&
       (iVar3 = *(int *)(iVar3 + -4), *(int *)(unaff_EBP + -0x14) = iVar3, iVar3 != 0)) {
      local_1c = 0x6150d2;
      uVar5 = FUN_004133f0();
      iVar2 = *(int *)(iVar2 + 8);
      *(int **)(unaff_EBP + -0x18) = &local_1c;
      piVar1 = (int *)(iVar2 + (uVar5 % *(uint *)(unaff_EBP + -0x14)) * 8);
      local_1c = *piVar1;
      if (local_1c != 0) {
        uStack_24 = 0x6150f5;
        InterlockedIncrement((LONG *)(local_1c + 8));
      }
      uVar6 = FUN_0061d152();
      *(undefined4 *)(unaff_EBP + -0x18) = uVar6;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      iVar2 = piVar1[1];
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if ((iVar2 != 0) && (*(int *)(iVar2 + -4) != 0)) {
        if ((iVar2 == 0) ||
           (iVar2 = *(int *)(iVar2 + -4), *(int *)(unaff_EBP + -0x14) = iVar2, iVar2 == 0)) {
          local_1c = 0x615139;
          uVar5 = FUN_004133f0();
        }
        else {
          local_1c = 0x615129;
          uVar5 = FUN_004133f0();
          uVar5 = uVar5 % *(uint *)(unaff_EBP + -0x14);
        }
        local_1c = piVar1[1] + uVar5 * 4;
        FUN_00402f41();
      }
      local_1c = 0;
      uStack_24 = 0;
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_24;
      FUN_004059fd(unaff_EBP + -0x10);
      FUN_00615b8e(3,*(undefined4 *)(unaff_EBP + -0x18));
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        local_1c = 0x615173;
        FUN_004030b1();
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


