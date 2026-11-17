/* FUN_004f0eb4 - 0x004f0eb4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004f0eb4(void)

{
  int unaff_EBP;
  int local_1c;
  
  FUN_00879bb8();
  local_1c = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0060142b(0x6f,0);
  local_1c = 0x1d;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00457cda();
  *(int **)(unaff_EBP + -0x10) = &local_1c;
  local_1c = 0;
  FUN_00414f8b(unaff_EBP + 8);
  FUN_00459cb5();
  local_1c = unaff_EBP + -0x20;
  FUN_004751b2();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_1c = 0x4f0f14;
  FUN_0045ebca();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_1c = 0x4f0f20;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


