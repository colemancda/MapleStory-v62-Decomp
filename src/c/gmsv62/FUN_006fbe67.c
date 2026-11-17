/* FUN_006fbe67 - 0x006fbe67 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006fbe67(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = FUN_006fb663(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00705b42(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00705e5b(0);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  if (*(int **)(extraout_ECX + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(extraout_ECX + 0x88) + 0xc))();
  }
  if (*(int **)(extraout_ECX + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(extraout_ECX + 0x80) + 0xc))();
  }
  if (*(int **)(extraout_ECX + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(extraout_ECX + 0x90) + 0xc))();
  }
  FUN_006fbf59();
  FUN_006fcbdc();
  FUN_006fc80c();
  FUN_006fcc37();
  FUN_008161f1(0);
  FUN_006fbf25(CONCAT22((short)((uint)*(undefined2 **)(extraout_ECX + 0x70) >> 0x10),
                        **(undefined2 **)(extraout_ECX + 0x70)));
  FUN_008161f1(0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


