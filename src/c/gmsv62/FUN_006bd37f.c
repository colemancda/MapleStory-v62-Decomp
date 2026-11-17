/* FUN_006bd37f - 0x006bd37f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006bd37f(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_0042452b();
  if (cVar1 == '\x06') {
    FUN_006bd3bc(param_1);
  }
  else if (cVar1 == '\a') {
    FUN_006bd6fe(param_1);
  }
  else if (cVar1 == '\b') {
    FUN_006bda21();
  }
  return;
}


