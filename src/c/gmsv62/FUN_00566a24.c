/* FUN_00566a24 - 0x00566a24 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00566a24(void)

{
  int extraout_ECX;
  int unaff_EBP;
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint local_28;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  iVar3 = *(int *)(extraout_ECX + 0x144);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 == 0) {
    local_28 = 0;
    if (*(int *)(*(int *)(extraout_ECX + 0x164) + 0xc80) == 0) {
      FUN_0060142b(0x16,0);
      *(uint **)(unaff_EBP + -0x10) = &local_28;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      local_28 = 0;
      FUN_00414f8b(unaff_EBP + 8);
      FUN_00459cb5();
      uVar1 = 0;
      do {
        local_28 = uVar1;
        local_28 = FUN_00566b10();
        FUN_00457d37();
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < 8);
      *(undefined1 *)(unaff_EBP + -0x10) = *(undefined1 *)(DAT_0097940c + 0xd4);
      local_28 = *(uint *)(unaff_EBP + -0x10);
      FUN_00457cda();
      pbVar2 = *(byte **)(unaff_EBP + 0xc);
      iVar3 = 4;
      do {
        local_28 = (uint)*pbVar2;
        FUN_00457cda();
        pbVar2 = pbVar2 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      local_28 = unaff_EBP - 0x24;
      FUN_00565a2e();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      local_28 = 0x566af3;
      FUN_0045ebca();
    }
    else {
      FUN_0057a546(9);
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_28 = 0x566aff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


