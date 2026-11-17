/* FUN_0076bc09 - 0x0076bc09 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0076bc09(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_80 [4];
  undefined4 uStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  
  FUN_00879bb8();
  piVar1 = (int *)(*(int *)(extraout_ECX + 0x3c) + 0x818);
  if (*piVar1 != 0) {
    *(undefined4 *)(unaff_EBP + -0x70) = 0;
    local_70 = unaff_EBP + -0x74;
    iStack_74 = *piVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_78 = 0x76bc3a;
    FUN_0076c53a();
    if (*(int *)(unaff_EBP + -0x74) != 0) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      local_70 = 0x2d1;
      iStack_74 = unaff_EBP + -0x14;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_78 = 0x76bc59;
      puVar2 = (undefined4 *)FUN_00679d22();
      local_70 = *(undefined4 *)(unaff_EBP + -0x70);
      iStack_74 = *puVar2;
      iStack_78 = unaff_EBP + -0x10;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uStack_7c = 0x76bc6c;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      local_70 = 0x76bc7b;
      FUN_00414ebb();
      local_70 = 0;
      iStack_74 = 1;
      iStack_78 = 0;
      uStack_7c = 0;
      *(undefined1 **)(unaff_EBP + -0x18) = auStack_80;
      FUN_00450368(unaff_EBP + -0x10);
      iVar3 = FUN_007db791();
      if (iVar3 == 6) {
        local_70 = *(undefined4 *)(unaff_EBP + -0x74);
        iStack_74 = 0x76bca4;
        FUN_00429303();
        iStack_74 = 0x76bcab;
        FUN_004eb116();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      local_70 = 0x76bcb6;
      FUN_00414ebb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_70 = 0x76bcc2;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


