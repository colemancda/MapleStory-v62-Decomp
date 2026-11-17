/* FUN_005ec8f3 - 0x005ec8f3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005ec8f3(void)

{
  int extraout_ECX;
  int unaff_EBP;
  int local_20;
  
  FUN_00879bb8();
  local_20 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0060142b(0xa7,0);
  local_20 = *(int *)(extraout_ECX + 0x94);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00457d37();
  *(int **)(unaff_EBP + -0x10) = &local_20;
  local_20 = 0;
  FUN_00414f8b(unaff_EBP + 8);
  FUN_00459cb5();
  local_20 = unaff_EBP + -0x20;
  FUN_004751b2();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_20 = 0x5ec95d;
  FUN_0045ebca();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_20 = 0x5ec969;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


