/* FUN_004fe1a4 - 0x004fe1a4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004fe1a4(void)

{
  int extraout_ECX;
  int unaff_EBP;
  int *local_18;
  
  FUN_00879bb8();
  local_18 = *(int **)(unaff_EBP + 8);
  FUN_004e5f8c();
  local_18 = *(int **)(extraout_ECX + 0x28);
  *(undefined4 *)(extraout_ECX + 0x770) = 0;
  *(int ***)(unaff_EBP + 8) = &local_18;
  if (local_18 != (int *)0x0) {
    (**(code **)(*local_18 + 4))(local_18);
  }
  FUN_004fd364();
  if ((*(int *)(extraout_ECX + 0x734) == 0) || (*(int *)(extraout_ECX + 0x734) == 1)) {
    local_18 = (int *)0x0;
    FUN_0060142b(0xbb,0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    local_18 = (int *)0x4fe212;
    local_18 = (int *)FUN_004f162d();
    FUN_00457d37();
    local_18 = (int *)(uint)*(byte *)(extraout_ECX + 0x734);
    FUN_00457cda();
    local_18 = (int *)(unaff_EBP + -0x1c);
    FUN_004751b2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_18 = (int *)0x4fe247;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


