/* FUN_00499edf - 0x00499edf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00499edf(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x20))();
  if (iVar1 != 0) {
    FUN_008180db(-(uint)(param_1 != 0) & param_1 + 4U);
    FUN_00499e9b();
  }
  return;
}


