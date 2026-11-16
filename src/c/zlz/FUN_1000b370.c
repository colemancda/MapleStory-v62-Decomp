/* FUN_1000b370 - 0x1000b370 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000b370(int *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000c6a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = (int)&PTR_FUN_1000edd0;
  local_4 = 0;
  FUN_10004b10((int)(param_1 + 4));
  if ((undefined4 *)param_1[0x14] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x14])(1);
  }
  *param_1 = (int)&PTR_FUN_1000ee3c;
  local_4 = 1;
  if (param_1[0x12] == 0) {
    _DAT_00000000 = 0;
  }
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[3])(1);
  }
  *param_1 = (int)&PTR_FUN_1000ee18;
  local_4 = 2;
  FUN_1000c270(param_1);
  *param_1 = (int)&PTR_LAB_1000edf4;
  ExceptionList = pvStack_c;
  return;
}


