/* FUN_0043c12f - 0x0043c12f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0043c12f(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_008e8c74;
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


