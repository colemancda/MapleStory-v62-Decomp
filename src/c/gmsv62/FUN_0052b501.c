/* FUN_0052b501 - 0x0052b501 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052b501(void)

{
  int extraout_ECX;
  int unaff_EBP;
  int local_c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 0x1d60) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(extraout_ECX + 0x1d64) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(extraout_ECX + 0x1d68) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(extraout_ECX + 0x1d6c) = *(undefined4 *)(unaff_EBP + 0x14);
  local_c = unaff_EBP + 0x18;
  FUN_00414f8b();
  local_c = 0;
  *(int **)(unaff_EBP + 8) = &local_c;
  FUN_00414f8b(extraout_ECX + 0x1d70);
  FUN_0052b57e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_c = 0x52b56e;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


