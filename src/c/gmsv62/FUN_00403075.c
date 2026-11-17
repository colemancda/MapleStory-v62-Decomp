/* FUN_00403075 - 0x00403075 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint * FUN_00403075(undefined4 param_1,uint param_2)

{
  uint *puVar1;
  int unaff_retaddr;
  
  puVar1 = (uint *)(*DAT_0097b648)(param_2 + 6);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_2;
    puVar1 = puVar1 + 1;
    if (unaff_retaddr != 0) {
      FUN_00879c20(puVar1,unaff_retaddr,param_2);
    }
    *(undefined2 *)((int)puVar1 + (param_2 & 0xfffffffe)) = 0;
  }
  return puVar1;
}


