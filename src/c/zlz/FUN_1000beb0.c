/* FUN_1000beb0 - 0x1000beb0 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __fastcall FUN_1000beb0(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000c7c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = (int)&PTR_FUN_1000ee18;
  local_4 = 0;
  FUN_1000c270(param_1);
  *param_1 = (int)&PTR_LAB_1000edf4;
  ExceptionList = local_c;
  return;
}


