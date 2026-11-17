/* FUN_00566b73 - 0x00566b73 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00566b73(void)

{
  byte bVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  uint local_20;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x144);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    local_20 = 0x566ba1;
    bVar1 = FUN_0045e4b8();
    local_20 = (byte)~bVar1 & 1;
    iVar2 = FUN_007d1e11(unaff_EBP + 8);
    local_20 = 0;
    if (iVar2 == 0) {
      FUN_0057a546(10);
    }
    else {
      FUN_0060142b(0x15,0);
      *(uint **)(unaff_EBP + -0x10) = &local_20;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      local_20 = 0;
      FUN_00414f8b(unaff_EBP + 8);
      FUN_00459cb5();
      local_20 = unaff_EBP - 0x20;
      FUN_00565a2e();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      local_20 = 0x566c00;
      FUN_0045ebca();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_20 = 0x566c0c;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


