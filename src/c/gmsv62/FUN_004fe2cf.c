/* FUN_004fe2cf - 0x004fe2cf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004fe2cf(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_0042452b();
  if (cVar1 == '\a') {
    FUN_004fe3b9(param_1);
  }
  else if (cVar1 == '\b') {
    FUN_004fe3bc(param_1);
  }
  else if (cVar1 == '\t') {
    FUN_004fe3de(param_1);
  }
  else if (cVar1 == '\n') {
    FUN_004fe3e1(param_1);
  }
  else if (cVar1 == '\v') {
    FUN_004fe414(param_1);
  }
  else if (cVar1 == '\f') {
    FUN_004fe417(param_1);
  }
  return;
}


