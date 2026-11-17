/* FUN_004eadc0 - 0x004eadc0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004eadc0(void)

{
  int unaff_EBP;
  int local_1c;
  
  FUN_00879bb8();
  local_1c = 0;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_0060142b(0x72,0);
  local_1c = 0xd;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00457cda();
  *(int **)(unaff_EBP + -0x10) = &local_1c;
  local_1c = 0;
  FUN_00414f8b(unaff_EBP + 8);
  FUN_00459cb5();
  *(int **)(unaff_EBP + -0x10) = &local_1c;
  local_1c = 0;
  FUN_00414f8b(unaff_EBP + 0xc);
  FUN_00459cb5();
  *(int **)(unaff_EBP + -0x10) = &local_1c;
  local_1c = 0;
  FUN_00414f8b(unaff_EBP + 0x10);
  FUN_00459cb5();
  *(int **)(unaff_EBP + -0x10) = &local_1c;
  local_1c = 0;
  FUN_00414f8b(unaff_EBP + 0x14);
  FUN_00459cb5();
  *(int **)(unaff_EBP + -0x10) = &local_1c;
  local_1c = 0;
  FUN_00414f8b(unaff_EBP + 0x18);
  FUN_00459cb5();
  local_1c = unaff_EBP + -0x20;
  FUN_004751b2();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  local_1c = 0x4eae89;
  FUN_0045ebca();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  local_1c = 0x4eae95;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  local_1c = 0x4eaea1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  local_1c = 0x4eaead;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_1c = 0x4eaeb8;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_1c = 0x4eaec4;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


