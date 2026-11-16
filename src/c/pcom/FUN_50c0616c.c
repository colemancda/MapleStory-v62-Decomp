/* FUN_50c0616c - 0x50c0616c in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


uint * FUN_50c0616c(int param_1)

{
  uint *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (uint *)0x0;
  }
  else {
    (*DAT_50c21064)(0,0,param_1,0xffffffff,0,0,0,0);
    puVar1 = FUN_50c025fb();
    (*DAT_50c21064)(0,0,param_1,0xffffffff,puVar1,0x3fffffff,0,0);
  }
  return puVar1;
}


