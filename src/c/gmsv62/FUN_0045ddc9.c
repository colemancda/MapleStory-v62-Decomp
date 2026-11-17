/* FUN_0045ddc9 - 0x0045ddc9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0045ddc9(void)

{
  int extraout_ECX;
  int unaff_EBP;
  int local_1c;
  
  FUN_00879bb8();
  local_1c = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_0060142b(0xc6,0);
  local_1c = 0x27;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00457cda();
  local_1c = *(int *)(unaff_EBP + 8);
  FUN_00457d37();
  local_1c = 0;
  *(int **)(unaff_EBP + 8) = &local_1c;
  FUN_00414f8b(unaff_EBP + 0xc);
  FUN_00459cb5();
  local_1c = 0;
  *(int **)(unaff_EBP + 8) = &local_1c;
  FUN_00414f8b(unaff_EBP + 0x10);
  FUN_00459cb5();
  local_1c = unaff_EBP + -0x1c;
  FUN_004751b2();
  *(undefined4 *)(extraout_ECX + 0x18) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  local_1c = 0x45de5b;
  FUN_0045ebca();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_1c = 0x45de67;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_1c = 0x45de73;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


