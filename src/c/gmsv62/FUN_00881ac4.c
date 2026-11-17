/* FUN_00881ac4 - 0x00881ac4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


float10 FUN_00881ac4(undefined4 param_1,double param_2,double param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  float10 fVar2;
  
  if (DAT_00972de0 == 0) {
    fVar2 = (float10)FUN_0088212b(1,param_1,param_2,param_3,param_2 + param_3,param_4);
    return fVar2;
  }
  puVar1 = (undefined4 *)FUN_0087fc84();
  *puVar1 = 0x21;
  FUN_008823f2();
  return (float10)(param_2 + param_3);
}


