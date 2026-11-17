/* FUN_0088504b - 0x0088504b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0088504b(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  do {
    *param_1 = *param_1 + 1;
    uVar1 = FUN_0088501a(param_2);
    iVar2 = FUN_00889753(uVar1);
  } while (iVar2 != 0);
  return uVar1;
}


