/* FUN_00886338 - 0x00886338 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_00886338(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_008863ae();
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_00886440(uVar1);
  return uVar1;
}


