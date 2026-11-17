/* FUN_0042517f - 0x0042517f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0042517f(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_004133f0();
    return uVar1 % param_1 + param_2;
  }
  iVar2 = FUN_004133f0();
  return iVar2;
}


